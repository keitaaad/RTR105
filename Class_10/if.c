#include <stdio.h>
#define N 10

int main(void)
{
int gadiijuma_skaitlis, gadiijuma_skaitlu_generatora_grauds;

gadiijuma_skaitlu_generatora_grauds = time(NULL);
printf("Gadījuma skaitļu ģenerātora grauds - %d\n", gadiijuma_skaitlu_generatora_grauds);

srand(gadiijuma_skaitlu_generatora_grauds);
gadiijuma_skaitlis = rand();
printf("Gadījuma skaitlis - %d\n", gadiijuma_skaitlis);
if( gadiijuma_skaitlis % 10 ==0)
{
printf("šis skaitlis dalās ar 10 bez atlikuma.\n");
}

if( gadiijuma_skaitlis % 10)//tiek pārbaudīts vai šis skaitlis dalās ar 10 bez atlikuma
{
printf("šis skaitlis nedalās ar 10 bez atlikuma.\n");
}
{
else //NB! else vienmēr pieder kādam if
}
{
printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
}


return 0;
}
