#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Iegust tris decimalskaitlus no lietotaja
    printf("Ievadiet pirmo decimālskaitli: ");
    scanf("%d", &num1);
    printf("Ievadiet otro decimālskaitli: ");
    scanf("%d", &num2);
    printf("Ievadiet trešo decimālskaitli: ");
    scanf("%d", &num3);


    char order;
    printf("Ieraksti a ja gribi augošā secībā sakitļus vai d ja gribi dilstošā secībā: ");
    scanf(" %c", &order);

    // Sakarto skaitlus pec lietotaja velmes
    if (order == 'a') {
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else if (order == 'd') {
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3) {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2) {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
    } else {
        printf("Jūs ievadījāt nepareizu burtu.\n");
        return 1; 
    }

    // Iznākums sakartosanai
    printf("Sakārtotā secība: %d, %d, %d\n", num1, num2, num3);

    return 0; 
}
