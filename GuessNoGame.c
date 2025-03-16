/* Minor Project-1 
BY-TUSHAR SHARMA */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int guess;
    int noofguess=0;
    srand(time(NULL));
    printf("***Welcome to the world of guessing numbers***\n");
    int a=rand()%100+1;
    do {
        printf("Enter a number between 1 to 100: \n");
        scanf("%d",&guess);
        noofguess++;
        if (guess==a) {
            printf("Congratulations!! You have successfully guessed the no in %d attempts \n",noofguess);
            break;
        }
        else {
            if (guess>a) {
                printf("Enter a smaller number.\n");
            }
            else printf("Enter a larger number.\n");
        }
    } while (guess!=5);
     printf("Bye Bye Thanks for playing.\n");
     printf("Game Developed by: Tushar Sharma");
    
    return 0;
}