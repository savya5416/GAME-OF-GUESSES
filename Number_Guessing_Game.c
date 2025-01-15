#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

  const int MIN =1;
  const int MAX =100;
  int guess =0;
  int guesses =0;
  int answer =0;
  int max_guesses=10;

  srand(time(0));

  answer = (rand() % MAX)+MIN;
  printf("----------------------------\nWelcome To THE GAME OF GUESSES!\n---------------------------- \nThe Rules are Simple:\n");
  printf("Guess the Correct Number between 1 to 100 in 10 tries.\nGood Luck!\n----------------------------\n");

  while(answer != guess && guesses < max_guesses)
  {
  
    printf("Enter your Guess: ");
    scanf("%d",&guess);
    
    if(guess > MAX)
    {
        printf("PLEASE ENTER A VALID GUESS.your guess is greater than 100!\n");
    }
    
    else if(guess < MIN)
    {
          printf("PLEASE ENTER A VALID GUESS.your guess is lesses than 1!\n");
    }
  
    if(guess > answer)
    {

      printf("Guessed Number is Too High!\n");

    }
    
    else if(guess < answer)
    {

      printf("Guessed Number is too Low!\n");

    }

    else
    {
        guesses++;

      printf("\nCONGRATULATIONS!!\n");
      printf("----------------------------\n");
      printf("YOU GUESSED THE COREECT NUMBER!\n");
      printf("No. of Guesses:%d",guesses);
       switch(guesses)
     {
         case 1:
         printf("\nIt Was Just Luck,wasn't it?");
           break;
         case 2:
         printf("\nCan you see the future?");
           break;
         case 3:
         printf("\nYou are an Guessing Expert!");
           break;
         case 4:
         printf("\nThat Was really nice!");
           break;
         case 5:
         printf("\nYour are a Good Guesser!");
           break;
         case 6:
         printf("\nYou are good at it.");
           break;
         case 7:
         printf("\nYou are an average guesser.");
           break;
         case 8:
         printf("\nWork On your guessing skills!");
           break;
         case 9:
         printf("\nYour are terrible at guessing and got saved by a bit!");
           break;
     
     }
      printf("\n----------------------------\n");
     
    
    }
    
    guesses++;
    
    if (guesses>9 && answer != guess)
    {
        guesses++;
      printf("\nBETTER LUCK NEXT TIME :(\n");
      printf("----------------------------\n");
      printf("You are out of guesses!\n");
      printf("the correct number was: %d",answer);
      printf("You Can't Even Guess a number! Why Do You Exist!");
      printf("\n----------------------------\n");
    }
    
     

  } 

  return 0;
  
  }