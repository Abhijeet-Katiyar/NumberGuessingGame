#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
int main()
{
    printf("Enter the range within which the random number have to be generated\n");
    int lower, upper;

    printf("\nEnter the lower range : ");
    scanf("%d", &lower);

    printf("\nEnter the upper range : ");
    scanf("%d", &upper);

    int num = (rand() % (upper - lower + 1)) + lower;

    int guessed;
    int num_of_tries = 0;
    printf("\nPlease enter your guessed number : ");
    do
    {

        scanf("%d", &guessed);
        if (guessed > num)
        {
            printf("\nOops!! You enter a number greater than the number generated. Please guess it again.\n");
            printf("\nGuess the number again : ");
            num_of_tries++;
        }
        else if (guessed < num)
        {
            printf("\nOops!! You enter a number smaller than the number generated. Please guess it again.\n");
            printf("\nGuess the number again : ");
            num_of_tries++;
        }
        else
        {
            printf("\nYess!! You got it.\n");
            break;
        }

    } while (guessed != num);

    printf("\nThe number was %d.\n", guessed);
    printf("\nYou guess the number after %d tries.\n", num_of_tries);

    return 0;
}