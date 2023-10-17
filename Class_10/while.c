#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void)
{
int gadiijuma_skaitlis, gadiijuma_skaitlu_generatora_grauds;

gadiijuma_skaitlu_generatora_grauds = time(NULL);
printf("Gadījuma skaitļu ģenerātora grauds - %d\n", gadiijuma_skaitlu_generatora_grauds);

srand(gadiijuma_skaitlu_generatora_grauds);
gadiijuma_skaitlis = rand();
printf("Gadījuma skaitlis - %d\n", gadiijuma_skaitlis);

i = i + 1;
printf("%d. skaitlis\n",i)
if( gadiijuma_skaitlis % 10)
{
printf("šis skaitlis nedalās ar 10 bez atlikuma.\n");
}
else
{printf(";sis skaitlis nedalās ar 10 bez atlikuma\n");
printf("Generešanas beigas\n");
return 0;}

return 0;
}
