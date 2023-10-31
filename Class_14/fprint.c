/* fprintf example */
#include <stdio.h>

int main ()
{
   FILE * pFile;
   int n;
   char Vards [100];

   pFile = fopen ("myfile.txt","w");
   for (n=0 ; n<3 ; n++)
   {
     puts ("Lūdzu ievadi vārdu: ");
     gets (Vards);
     fprintf (pFile, "Vards %d [%-10.10s]\n",n+1,Vards);
   }
   fclose (pFile);

   return 0;
}
