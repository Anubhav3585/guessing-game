
//creating a game for guessing a number from 0 to 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{  //creating a random variable from 0 to 20
    time_t t;
    srand((unsigned)time(&t));
    int randomresult= rand()%21;
   //instructions to the game
    printf("Welcome to my Game::\n");
    printf("In this game you have to guess number between 0 to 20\n");
    printf("In this game you have only 5 tries to guess a number...........");
    printf("\n\n    GAME BEGIN    \n\n");


    int x=0,y=5;


    for (int z=1;z<=5;z++)
    {
        y--;
        printf("\nEnter your number:: ");
        scanf("%d",&x);
        if (x>=0 && x<=20)
        {
            if (x==randomresult)
            {
                printf("\nyou have won the game\n\a");
                break;
            }

            else  {
                      if (x<randomresult)
                      {
                          printf("\nyour number is lower\n");
                          printf("Now you have %d tr%s left\a",y,(y==1 || y==0)?"y":"ies");
                      }

                      else
                      {
                          printf("\nyour number is higher\n");
                          printf("Now you have %d tr%s left\a",y,(y==1 || y==0)?"y":"ies");
                      }
                  }
        }
        else
          {
           printf("\nhey you must use number from 0 to 20\n");
           printf("Now you have %d tr%s left\a",y,(y==1 || y==0)?"y":"ies");
          }

    }//loop ends

    if(x !=randomresult)
      {
          printf("\n\n...GAME OVER....\n\a");
          printf("The number was %d",randomresult);
      }

    return 0;
}
