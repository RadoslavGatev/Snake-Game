#include <18f2550.h>
#define DIMENSION 8
int1 matrix[DIMENSION][DIMENSION];
void delayDelegate(int32 milliseconds);

#include <MatrixUtilities.h>
#include <Slider.h>
#include <MatrixEffects.h>
#include <Snake.h>

#fuses HSPLL,NOWDT,NOPROTECT,NOLVP,NODEBUG,USBDIV,PLL5,CPUDIV1,VREGEN
#use delay (clock=20000000)

#use rs232(baud=9600)
#build (reset=0x1000, interrupt=0x1008) // new addresses 
#org 0x0,0xfff {} // reserved space 

#use fast_io(b)
#byte   portb=6
#use standard_io(c)

void delayDelegate(int32 milliseconds)
{ 
int32 i=0;
   for(i=0;i<milliseconds;i++)
   {
   delay_ms(1);
   ReadButtons();
   }
}

void init()
{
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   set_tris_b(0x00);
   output_b(0x00);
  
   output_a(0x00);
   set_tris_a(0xFF);
   
   EraseMatrix();
   LoadLetters();
   InitializeSnake();
}

void main()
{
char message[]="...BY RADOSLAV GATEV AND TSONIO TSONEV :)";

   init();
   Display();
   
   RunSnake(75);
   Slide(message,30);  
}
