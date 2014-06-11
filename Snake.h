#define DOWN_BUTTON PIN_C0
#define UP_BUTTON PIN_C1
#define LEFT_BUTTON PIN_C2
#define RIGHT_BUTTON PIN_C6

#DEFINE RAND_MAX DIMENSION-1
#pragma USE DYNAMIC_MEMORY
#include <stdlibm.h>
#include <limits.h>

typedef enum Directions
{
   DOWN=0,
   UP=1,
   LEFT=2,
   RIGHT=3
};

typedef enum States
{
RUNNING, GAME_OVER
};

typedef struct SnakePart
{
   int row;
   int column;

   struct SnakePart *previousPart;
};

typedef struct Fruit
{
   int row;
   int column;
};

int snakeLength;
struct SnakePart *Head, *Tail;
struct Fruit *CurrentFruit;

Directions CurrentDirection;
States CurrentState;

unsigned int32 counterForSeed=2;

 char GAME_OVER_STRING[]="GAME OVER";

unsigned int8 lastStateOfPort=0;

int repetitionsOfSnake=30;

void assignDirection(int16 pin);
void ReadButtons();
void LoadSnake();
void MoveHead();
void PrintSnakeAndFruit();
void RunSnake(int8 delay);
void GenerateFruit();
int1 IsSnakeHere(int row, int column);
void  AddPartToTail();
void checkState();
void incrementCounterGenerator();

void assignDirection(int16 pin)
{
   switch(pin)
   {
      case DOWN_BUTTON:
      if(CurrentDirection!=UP)
      {
         CurrentDirection=DOWN;
      }break;
      
      case UP_BUTTON:
      if(CurrentDirection!=DOWN)
      {
         CurrentDirection=UP;
      }break;
      
      case LEFT_BUTTON:
      if(CurrentDirection!=RIGHT)
      {
         CurrentDirection=LEFT;
      }break;
      
      case RIGHT_BUTTON:
      if(CurrentDirection!=LEFT)
      {
         CurrentDirection=RIGHT;
      }break;
   }
}

void ReadButtons()
{
   unsigned int8 currentStateOfPort;
   currentStateOfPort=input_c();
   if(currentStateOfPort!=lastStateOfPort)
   {
      if(input(DOWN_BUTTON)==1)
      {
         assignDirection(DOWN_BUTTON);
      }
      else
      {
         if(input(UP_BUTTON)==1)
         {
            assignDirection(UP_BUTTON);
         }
         else
         {
            if(input(LEFT_BUTTON)==1)
            {
               assignDirection(LEFT_BUTTON);
            }
            else
            {
               if(input(RIGHT_BUTTON)==1)
               {
                  assignDirection(RIGHT_BUTTON);
               }
            }
         }
      }
      lastStateOfPort=currentStateOfPort;
   }
}

void InitializeSnake()
{
   static struct SnakePart *mHead,*mBody,*mTail;

   int row=4;
   int column=4;

   CurrentDirection=RIGHT;
   
   CurrentState=RUNNING;
   
   mHead=malloc(sizeof(struct SnakePart));
   mBody=malloc(sizeof(struct SnakePart));
   mTail=malloc(sizeof(struct SnakePart));
   
   (*mHead).row=row;
   (*mHead).column=column;

   --column;
   (*mBody).row=row;
   (*mBody).column=column;

   --column;
   (*mTail).row=row;
   (*mTail).column=column;

   (*mBody).previousPart=mTail;
   (*mHead).previousPart=mBody;

   Head=mHead;
   Tail=mTail;

   snakeLength=3;
   
   GenerateFruit();
}

void MoveHead()
{
   int1 isHeadEqualToCurrentFruit=0;
   
   switch(CurrentDirection)
   {
   case DOWN:
      {
         if((*Head).row==DIMENSION-1)
         {
            (*Head).row=0;
         }
         else
         {
            (*Head).row++;
         }
      }break;

   case UP:
      {
         if((*Head).row==0)
         {
            (*Head).row=DIMENSION-1;
         }
         else
         {
            (*Head).row--;
         }
      }break;

   case LEFT:
      {
         if((*Head).column==0)
         {
            (*Head).column=DIMENSION-1;
         }
         else
         {
            (*Head).column--;
         }
      }break;

   case RIGHT:
      {
         if((*Head).column==DIMENSION-1)
         {
            (*Head).column=0;
         }
         else
         {
            (*Head).column=(*Head).column+1;
         }
      }break;
   }
   
  isHeadEqualToCurrentFruit= ((*Head).row==(*CurrentFruit).row)&&
      ((*Head).column==(*CurrentFruit).column);
      
   if(isHeadEqualToCurrentFruit==TRUE)
   {
      AddPartToTail();
      GenerateFruit();
   }
}

void PrintSnakeAndFruit()
{
   int i=0;
   struct SnakePart *currentPart;
   int justRepetitionCounter=0;

   EraseMatrix();
   
   //print the snake on the matrix
   currentPart=Head;
   do
   {
      matrix[(*currentPart).row][(*currentPart).column]=1;
      currentPart=(*currentPart).previousPart;
      i++;
   }while(i<snakeLength);
   
   //print the fruit on the matrix array
   matrix[(*CurrentFruit).row][(*CurrentFruit).column]=1;

   for(justRepetitionCounter=0;justRepetitionCounter<repetitionsOfSnake;justRepetitionCounter++)
   {
      Display();
      delayDelegate(4);
   }
}

void RunSnake(int8 delay)
{
   for(;;)
   {
      int i=0;
      struct SnakePart *currentPart;
      int tempPositionRow=0,tempPositionColumn=0;
      int lastPositionRow=0,lastPositionColumn=0;
      int16 repetitionsCounter=0;
      repetitionsOfSnake=(int)delay/4;
      
     incrementCounterGenerator();
      
      currentPart=Head;
      if(CurrentState==RUNNING)
      {
         for(i=0;i<snakeLength;i++)
         {
            tempPositionRow=(*currentPart).row;
            tempPositionColumn=(*currentPart).column;
            if(i==0)
            {
               MoveHead();
            }
            else
            {
               (*currentPart).row=lastPositionRow;
               (*currentPart).column=lastPositionColumn;
            }
      
            lastPositionRow=tempPositionRow;
            lastPositionColumn=tempPositionColumn;
      
            currentPart=(*currentPart).previousPart;      
         }
         
         //Display the snake and fruit
         PrintSnakeAndFruit();
         checkState();
      }
      else
      {
      //GAME OVER
         for(repetitionsCounter=0;repetitionsCounter<250;repetitionsCounter++)
          {
               Display();
              delayDelegate(4);
         }
         EraseMatrix();
         Slide(GAME_OVER_STRING,30);
         return;
      }
   }
}

void GenerateFruit()
{
   int row,column;
   unsigned int32 seed;
   
   do
   {
   //seed=counterForSeed;
  seed=(*Tail).row*(*Tail).column-((int)(*CurrentDirection)+1);
   
     srand(seed);
      row=rand()%DIMENSION;
      column=rand()%DIMENSION;
      
      --seed;
   }while(IsSnakeHere(row, column));
   
   (*CurrentFruit).row=row;
   (*CurrentFruit).column=column;
}

int1 IsSnakeHere(int row, int column)
{
   int i=0;
   struct SnakePart *currentPart;

   currentPart=Head;
   do
   {
      if((*currentPart).row==row&&(*currentPart).column==column)
      {
          return TRUE;
      }
      currentPart=(*currentPart).previousPart;
      i++;
   }while(i<snakeLength);
   
   return FALSE;
}

void  AddPartToTail()
{
     struct SnakePart *newPart;
      newPart=malloc(sizeof(struct SnakePart));
   //TODO Refactor
switch(CurrentDirection)
   {
   case DOWN:
      {
       (*newPart).row=((*Tail).row-1)%DIMENSION;
       (*newPart).column=(*Tail).column;
      }break;

   case UP:
      {
      (*newPart).row=((*Tail).row+1)%DIMENSION;
      (*newPart).column=(*Tail).column;
      }break;

   case LEFT:
      {
         (*newPart).row=(*Tail).row;
         (*newPart).column=((*Tail).column+1)%DIMENSION;
      }break;

   case RIGHT:
      {
         (*newPart).row=(*Tail).row;
         (*newPart).column=((*Tail).column-1)%DIMENSION;
      }break;
   }
   (*Tail).previousPart=newPart;
   Tail=newPart;
      
   ++snakeLength;
}

void checkState()
{
   int i=1;
   struct SnakePart *currentPart;

   currentPart=(*Head).previousPart;
   do
   {
      if(((*currentPart).row==(*Head).row)&&((*currentPart).column==(*Head).column))
      {
         CurrentState=GAME_OVER;
         return;
      }
      currentPart=(*currentPart).previousPart;
      i++;
   }while(i<snakeLength);
}

void incrementCounterGenerator()
{
   if(counterForSeed<2147483643)
   {
      ++counterForSeed;
   }
   else
   {
      counterForSeed=2;
   }
}
