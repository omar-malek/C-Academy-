#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include<time.h>  // for random number generator seed

int main(){

    int randomNumber =0;
    int guess =0;
    int NumberOfGuesses = 5;

    time_t t;

    // initialization of random number generator
    srand((unsigned)time(&t));

    //get the random number

    randomNumber=rand()%21;

    printf(" \n This is a guessing game .");

    printf("\n I have  chosen a number between 0 and 20 , which you must guess .\n");

    for (NumberOfGuesses =5;NumberOfGuesses>0;--NumberOfGuesses)
    {
        printf( "\n You have %d tr%s left",NumberOfGuesses,NumberOfGuesses=1?"y":"ies" );
        printf("\n Enter a guess :  ");
        scanf("%d", &guess);

        if (guess== randomNumber){
            printf(" \n Congratulations . You guessed it! \n ");
            break;
        }
        else if (guess<0 || guess >20) // checking for invalid guess
            printf(" I said the number is between 0 and 20 .\n");
        else if ( randomNumber >guess)
            printf("Sorry , %d id wrong  My number is %s greater  than that \n ", guess);
        else if ( randomNumber  < guess)
            printf("Sorry , %d id wrong  My number is %s less  than that \n ",guess);
    }
            printf("\n You have had five tries and failed ,.The number was %d \n , ",randomNumber);
return 0 ;
}


