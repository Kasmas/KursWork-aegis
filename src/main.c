#include <stdio.h>
#include "deposit.h"

int main() {
    int deposit, time;

    printf("Enter deposit and time\n");
    do {
    	scanf("%d %d", &deposit, &time);
    } while (Check (deposit, time), printf("invalid data"));

    printf("v: %d s: %d\n", deposit, time);
    
    printf("\nprofit = %d\n", Profit(deposit, time));

    return 0;
}
