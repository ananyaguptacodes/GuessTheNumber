#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess,nguesses=1;
    srand(time(0));
    num=rand()%100+1; //generates a random number between 1 and 100
    //the loop will run until the number is guessed
    do{
        printf("Guess the number between 1 to 100.\n");
        scanf("%d",&guess);
        if(guess>num){
            printf("lower number please!\n");
        }
        else if(guess<num){
            printf("higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=num);
    return 0;
}
