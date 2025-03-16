/* Minor Project-2
BY-TUSHAR SHARMA */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int user;
    int noofguess=0;
    srand(time(NULL));
    printf("***Welcome to Snake Water and Gun game***\n");
    int random=rand()%3+1;
    do {
        printf("1-> Snake   2-> Water  3-> Gun  4->Exit\n");
        printf("Enter your choice:");
        scanf("%d",&user);
        noofguess++;
        if (random==1 & user==2) printf("Computer win!");
        else if (random==1 & user==3) printf("You win!\n");
        else if (random==2 & user==1) printf("You win!\n");
        
        else if (random==2 & user==3) printf("Computer win!\n");
        else if (random==3 & user==1) printf("Computer win!\n");
        else if (random==3 & user==2) printf("You win!\n");
        else if (random==user) {
            printf("It's a Tie!\n");
        }
    } while (user!=4);
     printf("Bye Bye Thanks for playing.\n");
     printf("Game Developed by: Tushar Sharma");
    
    return 0;
}