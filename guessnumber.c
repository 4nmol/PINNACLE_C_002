/*Number guessing game*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int mynum,usernum;
    srand(time(NULL));//random number Initializer.
    mynum=rand()%10;// till ten it will generate
    printf("Computer:I have random number from 0 to 9, so can you geuss it ?\n");
    
    while(1)
    {
        printf("Guess the number\n");
        scanf("%d",&usernum);
        
        if(mynum==usernum)
        {
            printf("You are right !\n");
            printf("You won !\n");
            break;
        }
        else if(mynum>usernum)
        {
            printf("My number is greater than your number=%d\n",usernum);
            printf("Try agian\n");
        }
        else //if(mynum<usernum)
        {
            printf("My number is smaller than your number=%d\n",usernum);
            printf("Try agian\n");
        }
    }
    return 0;
}