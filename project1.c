#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    srand(time(0));

    int randomnumber=(rand()%100) + 1;
    int no_of_guesses=0;
    int guessed;

    do{
        printf( "Guess the Number");
        scanf("%d", &guessed);
        if(guessed>randomnumber)
        printf( " Lower Number Please!\n");

        else{
            // (guesses<randomnumber);
        
        printf("Higher number Please!\n");
        }
        
        no_of_guesses++;

    } while (guessed!= randomnumber);

    printf(" You guessed the Number in %d guesses", no_of_guesses);
    

    return 0;
}