#define COUNTER_RESET PIN_B0
#define COUNTER_CLOCK PIN_B1
#define SHIFT_CLOCK PIN_B2
#define LATCH_CLOCK PIN_B3
#define SDI PIN_B4
#define SHIFT_RESET PIN_B5

/**
These are the drivers functions for the matrix
*/

void nop(){
#asm 
   NOP
   NOP
#endasm
}

void ResetShift()
{
   output_bit(SHIFT_RESET, 0);
   nop();
   output_bit(SHIFT_RESET, 1);
}

void ResetColumnCounter()
{
   output_bit(COUNTER_RESET,1);
   nop();
   output_bit(COUNTER_RESET,0);
}

void NextColumn()
{
   output_bit(COUNTER_CLOCK,1);
   nop(); 
   output_bit(COUNTER_CLOCK,0);
}

void SelectColumn(int column)
{
   int counter=1;
   ResetColumnCounter();
   for(counter=1;counter<=column;counter++)
   {
      NextColumn();
   }
}

void WriteSignal(int1 signal)
{
   output_bit(SDI, signal);  
   nop();
}

void NextLed()
{
   output_bit(SHIFT_CLOCK,1);
   nop();
   output_bit(SHIFT_CLOCK,0);
}

void ExportColumn()
{
   output_bit(LATCH_CLOCK,1);
   nop();
   output_bit(LATCH_CLOCK,0);
}

/**
Utility functions
*/

//Todo Refactor
void Display()
{
   signed int row=DIMENSION-1, column=0;
   int1 signal=0;
   for(column=0;column<DIMENSION;column++)
   {

      SelectColumn(column);
      ResetShift();
      for(row=DIMENSION-1;row>=0;row--)
      {
         signal=matrix[row][column];
         WriteSignal(signal);
         NextLed();
      }
      ExportColumn();
      delayDelegate(4);
   }
}

void EraseMatrix()
{
   int i=0,j=0;
   
   for(i=0;i<DIMENSION;i++)
   {
      for(j=0;j<DIMENSION;j++)
      {
         matrix[i][j]=0;
      }
   }
}
