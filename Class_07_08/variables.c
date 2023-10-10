#include<stdio.h>

;int main(void)
{
char c1; // šī ir diskrēta mainīgā deklarēšana - noteikta izmēra atmiņas
        // apgabals (char -> byte) tiks sasaistīts ar noteiktu
        // identifaktoru (c1)
        // atmiņā nav vakuums => šaja rezervētājā atmiņas apgabalā būs
        // kaut kada 0 un 1 kombinācija, kas palikusi pēc kādas iepreikšejās programmas
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n", c1)"

        // mainīgā "loma" ir - mainīties ...
;c1 = 'A'; //visbiežāk šo izmiaņu veiksim ar NB! pieškiršanas operācija - =
          //piesķiršanas operacijai ie gandrīz viszemākā prioritāte
          //(tā tiek izpildīta viena no pēdējām)
          //labajā pusē izreķinātais lielums (vērtība) tiek izmitināta atmiņas apgabalā, kas ir saistīts ar kreisajā pusē pieminēto
          //identifikātoru

;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n", c1)"

;printf ("\n")
;c1 = 0125;
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n", c1)"
;printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n", c1)"

;int birth_year = 2000; //šī ir mainīgā definēsana (atmiņas apgabala sasaistīsāna ar identfikātoru vertības piešķiršana
                       //mainīgajiem identifikātoriem, jeb vardiem vēlams
                       //izvēleties memoniskus nosaukums - nosaukuma vards vai teksts atspogoļo nolūku, kuram šis mainīgais ir paredzēts

printf ("\n")
printf("birth_year mainīgā vērtība (simbols): %c\n", birth_year);
printf("birth_year mainīgā vērtība (dec): %d\n", birth_year);
printf("birth_year mainīgā vērtība (hex): %#c\n", birth_year);
printf("birth_year mainīgā vērtība (oct): %#c\n", birth_year);

int i1, i2 = 0, i3 = 0x13, i4 = 025

int modified_birth_year = birth_year >> 4;

printf("modified_birth_year mainīgā vērtība (simbols): %c\n", modified_birth_year);
printf("modified_birth_year mainīgā vērtība (dec): %d\n", modified_birth_year);
printf("modidied_birth_year mainīgā vērtība (hex): %#c\n", modified_birth_year);
printf("modified_birth_year mainīgā vērtība (oct): %#c\n", modified_birth_year);



return 0;
}
