#include <stdio.h>

void main ()

{
printf("\nBytes in char %i",      sizeof(char));
printf("\nBytes in int %i",       sizeof(int));
printf("\nBytes in float %i",     sizeof(float));
printf("\nBytes in double %i\n",  sizeof(double));

int block1 =  1024*sizeof(int);
malloc( 1024*sizeof(int))
;printf("\nBytes in block1 %i\n",  block1);

}
