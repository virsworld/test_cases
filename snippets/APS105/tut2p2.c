#include <stdio.h>
#include <math.h>

int main(void){
    int iComp;
    int aComp;

    printf("Enter an encrypted 4-digit combination: ");
    scanf("%d", &iComp);

    aComp = ((iComp / 1000) % 1000) * ( 9 - ((iComp / 100) % 100)) * ((iComp / 10) % 10) * (9 - ((iComp / 1) % 1));

    printf("The real combination is: %d", aComp);

    return 0;
}
