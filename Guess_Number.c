#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int mynum,usernum;
	srand(time(NULL));
	mynum = rand() % 101;
	int tries = 0;
	
	
	
	for (tries = 0; tries < 3 || mynum==usernum ; tries++)
	{
	
	printf("Enter a number between 0 to 100 : ");
	scanf("%d",&usernum);
	
	if (mynum == usernum)
	{
		printf("You win the game! The number was %d. \n" , mynum);
		printf("Do you want to play again ? \n");
		scanf("");
		return 0;
		
	}	
	else if(mynum > usernum)
	{
		printf("Try a bigger number! \n");
		
	}
	else if(mynum < usernum)
	{
		printf("Try a smaller number! \n");
	
	}
	if (tries == 3)
	
		  break;
      
	}
	
	 printf("You lost the game! The number was %d. \n" , mynum);
	 printf("Do you want to play again ? \n");
		scanf("");
	return 0 ;
}
