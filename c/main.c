#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    srand(time(NULL));
    int r = rand() % 100;

    int guessnumber;
    int attempts = 5;
    bool whileloop = true;
    while(whileloop){
        printf("guess the number: \n");
        if (scanf("%d", &guessnumber) != 1) {
            printf("invalid input!! please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        if(guessnumber > r ){
            printf("Wrong!! too high!! \n");
            attempts--;
        }else if(guessnumber < r){

            printf("Wrong!! too low!! \n");
            attempts--;
        }else if (guessnumber == r){
            printf("well done you got the number");
            whileloop = false;
        }
        if(attempts == 0){
            printf("you failed the number was %d", r);
            whileloop = false;
        }
    }
    return 0;
}