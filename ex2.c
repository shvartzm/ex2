/******************
Name: Maor Shvartz
ID: 216763235
Assignment:
*******************/

#include <stdio.h>

int main()
{
    int pick = 0;
    do
    {
        //MENU
        printf("Welcome to our games, please choose an option:\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");
        scanf("%d", &pick);

        //input check
        if(!(pick >= 1 && pick <= 6)){
            printf("Invalid option, please try again\n");
            continue;
        }

        //menu handling
        switch (pick)
        {
        case 1: // Ducky's Unity Game
            
            int decimalNumber;
            int counter1 = 0;
            do
            {
                printf("please enter a positive number:\n");
                scanf("%d", &decimalNumber);
                while(!(decimalNumber > 0)){ // input validation
                    printf("Invalid number, please try again\n");
                    scanf("%d", &decimalNumber);
                }
                while (decimalNumber > 0)
                    {
                        counter1 += decimalNumber & 1;
                        // &1 gives us LSB, we add if 1, (0 doesnt affect)
                        decimalNumber /= 2;
                        // using binary (base 2), same as >>    
                    }
                    break;
                
            } while (decimalNumber > 0);
            printf("Ducky earns %d corns\n", counter1);
            break;
        
        
        case 2: // The Memory Game
            int duckNumber;// we will use it as a multiplier
            int duckActions = 0;
            int action = 0; // duck action
            int exponent = 1; // represent math.pow(10,i-1)
            do
            {
                printf("please enter the number of ducks:\n");
                scanf("%d", &duckNumber);
                while(!(duckNumber > 0)){  // input validation
                    printf("Invalid number, please try again\n");
                    scanf("%d", &duckNumber);
                }
                printf("you entered %d ducks\n", duckNumber);
                for (int i = 1; i <= duckNumber; i++){
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n",i);
                    scanf("%d", &action);
                    while(!(action == 1 || action == 0)){
                        printf("Invalid number, please try again\n"); // input validation
                        scanf("%d", &action);
                    }
                    duckActions += action * exponent; // creating a 1 and 0 number based on actions
                    exponent *= 10;
                    action = 0;  
                }
                for (int i = 1; i <= duckNumber; i++){
                    if (duckActions % 10 == 1){  //decrypting the action number
                        printf("duck number %d do Quak\n", i);  
                } else{
                  printf("duck number %d do Sh...\n", i);
                }
                duckActions /= 10;
            }
            } while (duckActions > 0);
            break;




        case 3: // Professor Pat's Power Calculation
            int base, expo;
            int result = 1;
            printf("please enter the number\n");
            scanf("%d", &base);
            while(!(base > 0)){
                    printf("Invalid number, please try again\n"); // input validation
                    scanf("%d", &base);
            }
            printf("please enter the exponent\n");
            scanf("%d", &expo);
            while(!(expo > 0)){
                    printf("Invalid number, please try again\n"); // input validation
                    scanf("%d", &expo);
            }
            for (int i =0 ; i < expo; i++){  // for loop base * base * base * ... expo times -> base^expo
                result *= base;
            }
            printf("your power is: %d\n", result);
            break;
 


        case 4: // The Duck Parade
             int numDucks;
             printf("please enter number of ducks:\n");
             scanf("%d", &numDucks);
             while (!(numDucks > 0)){
                printf("Invalid number, please try again\n"); // input validation
                scanf("%d", &numDucks);
             }
             while(numDucks > 0){
                // either numducks > 10 then we just print line or < 10 then we print specific one digit number
                    for(int i = 0 ; i < (numDucks > 10 ? 10 : numDucks); i++){  // inline if to check our situation
                        if (i == (numDucks > 10? 9 : (numDucks-1))){ // find the i of the last duck in the row
                            printf("   _\n");
                        }
                        else{
                            printf("   _\t\t");
                        }
                    }
                    for(int i = 0 ; i < (numDucks > 10 ? 10 : numDucks); i++){ // same as above
                        if (i == (numDucks > 10? 9 : (numDucks-1))){ // same as above
                            printf("__(o)>\n");
                        }
                        else{
                            printf("__(o)>\t\t");
                        }
                    }    
                    for(int i = 0 ; i < (numDucks > 10 ? 10 : numDucks); i++){ // same as above
                        if (i == (numDucks > 10? 9 : (numDucks-1))){ // same as above
                            printf("\\___)\n");
                        }
                        else{
                            printf("\\___)\t\t");
                        }
                    }  
                    numDucks -= 10;
             }
            break;
        
        



        case 5: // The Mystery of the Repeated Digits
            int number;
            int temp;
            printf("please enter number\n");
            scanf("%d", &number);
            while(!(number > 0)){
                printf("Invalid number, please try again\n");  // input validation
                scanf("%d", &number);
            }
            temp = number / 10;
            while(number > 0){
                while (temp > 0)
                {
                    if (number % 10 == temp % 10){ // scan the number for same digit
                        printf("%d appears more than once!\n", number % 10);
                        break;
                    }
                    temp /= 10;
                }
                number /= 10;
                temp = number /10;
            }
            break;  
        }
    } while (pick != 6);
    printf("Good night! See you at the pond tomorrow.\n");




    return 0;
}
