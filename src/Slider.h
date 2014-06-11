#include <string.h>
#include <stdlib.h>
#include <Letters.h>

int delayMs=50;
int16 repetitions=0;
void shiftAndFillMAtrix(unsigned int8 characterByte)
{
   int row=0,column=0;
   int rightCellColumn=0;
   int1 currentCharBit=0;
   unsigned int8 mask=0;
   int justRepetitionCounter=0;
   unsigned int8 shiftCount=0;
   unsigned int8 tempResult=0;
   for(column=0;column<DIMENSION-1;column++)
   {
      for(row=0;row<DIMENSION;row++)
      {
         rightCellColumn=column+1;
         matrix[row][column]=matrix[row][rightCellColumn];
         matrix[row][rightCellColumn]=0;
      }
   }

   for(row=0;row<DIMENSION;row++)
   {
      shiftCount=(DIMENSION-1)-row;
      mask=((unsigned int8)0x01)<<shiftCount;
      tempResult=mask&characterByte;
      tempResult=tempResult>>shiftCount;
      currentCharBit=(int1)tempResult;
      matrix[row][DIMENSION-1]=currentCharBit;
   }

   for(justRepetitionCounter=0;justRepetitionCounter<repetitions;justRepetitionCounter++)
   {
      Display();
      delayDelegate(4);
   }
}

void endMessage()
{
   int column=0;
   for(column=0;column<DIMENSION;column++)
   {
      shiftAndFillMAtrix((unsigned int8)0x00);
   }
}

void Slide(char *slidingMessage,int aDelayMs=100)
{
   int length=0;
   int currentCharPosition=0;
   char currentChar;
   int16 positionInLettersArray=0;
   signed int byteCounter=0;
   unsigned int8 currentLetterByte;
   length=strlen(slidingMessage);
   delayMs=aDelayMs;
   repetitions=(int16)(delayMs/4);
   for(currentCharPosition=0;currentCharPosition<length;currentCharPosition++)
   {
      currentChar=slidingMessage[currentCharPosition];
      //Do some int32 operations :)
      positionInLettersArray=currentChar-32; 
      positionInLettersArray=positionInLettersArray*8;
      positionInLettersArray=positionInLettersArray+7;

      for(byteCounter=0;byteCounter<8;byteCounter++)
      {
         currentLetterByte=letters[positionInLettersArray-byteCounter];   
         shiftAndFillMAtrix(currentLetterByte);
      }
   }

   endMessage();
}


