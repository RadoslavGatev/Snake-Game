char* FillMatrixWithAllCharacters()
{
   int i=32;
    static char message[60];
    message[59]='\0';
   for(i=32;i<=90;i++)
   {
      message[i-32]=i;
   }
   return message;
}
