#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int num;
    srand((unsigned int)time(NULL));
    
    num = rand() % 6 + 1;
    
    if (num % 2 == 0){
        printf("%d is even. You win!\n", num);
    }
    else{
        printf("%d is odd. You lose!\n", num);
    }

    return 0;
}
