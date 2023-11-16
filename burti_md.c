#include <stdio.h>

int main() {
    char burts1, burts2, burts3;

    // Iegustiet tris burtus no lietotaja
    printf("Ievadiet pirmo burtu: ");
    scanf(" %c", &burts1);
    printf("Ievadiet otro burtu: ");
    scanf(" %c", &burts2);
    printf("Ievadiet trešo burtu: ");
    scanf(" %c", &burts3);

    // Pajauta lietotajam secibu
    char order;
    printf("Ievadiet a ja vēlaties, lai burti sakārtojas alfabēta secībā vai arī ievadiet p ja vēlaties pretēji: ");
    scanf(" %c", &order);

    // Sakarto burtus pec pieprasijuma
    if (order == 'a') {
        if (burts1 > burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
        if (burts2 > burts3) {
            char temp = burts2;
            burts2 = burts3;
            burts3 = temp;
        }
        if (burts1 > burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
    } else if (order == 'p') {
        if (burts1 < burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
        if (burts2 < burts3) {
            char temp = burts2;
            burts2 = burts3;
            burts3 = temp;
        }
        if (burts1 < burts2) {
            char temp = burts1;
            burts1 = burts2;
            burts2 = temp;
        }
    } else {
        printf("Jūs ievadījāt nepareizu burtu.\n");
        return 1; 
    }

    // Izvada sakartotu secību
    printf("Sakārtotā secība: %c, %c, %c\n", burts1, burts2, burts3);

    return 0;
}
