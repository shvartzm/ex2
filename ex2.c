/******************
Name: Maor Shvartz
ID: 216763235
Assignment:
*******************/

#include <stdio.h>

int main()
{
    // MAIN MENU LOOP

    // TASK 1: Ducky's Unity Game

    // TASK 2: The Memory Game

    // TASK 3: Professor Pat's Power Calculation

    // TASK 4: The Duck Parade

    // TASK 5: The Mystery of the Repeated Digits

    // TASK 6: EXIT

    // dont forget through all the necessary parts to validate invalid input.
    int pick = 0;
    do
    {
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game");
        printf("2. The Memory Game");
        printf("3. Professor Pat's Power Calculation");
        printf("4. The Duck Parade");
        printf("5. The Mystery of the Repeated Digits");
        printf("6. Good Night Ducks");
        scanf("%d", &pick);
    } while (pick != 6);
    




    return 0;
}
