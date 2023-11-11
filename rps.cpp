#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you, char computer){
	
	if(you==computer){//if booth the user and the computer has chosen the sme thiingie
	
		return -1;//-1 == draw 1 == win  else lost
	}
	
	if(you=='r'&&computer=='p')
		return 1;

	else if(you == 'p'&& computer=='r') 
		return 0;
		
	if(you == 's' && computer=='r'){
		return 0;
		
	}
	else if(you == 'r' && computer=='s'){
		return 1;
	}
	if(you =='p'&&computer=='p'){
		return -1;
	}
	else if(you=='s'&&computer=='p'){
		return 1;
	}
	
}

int main(){
	int n;
	char you, computer;
	char result;
	
	srand(time(NULL));
	
	n = rand()%100;
	
	if(n<33)
		computer = 'r';
	else if(n>33 && n<66)
		computer='p';
	else 
	 	computer='s';
	printf("enter r for rock, p for paper, and s for scissor\n");
	
	scanf("%c",&you);
	result = game(you,computer);
	
	if(result==-1)
	{
		printf("the game is a draw\n");
		
	}
	else if(result==1){
		printf("you have won the game\n");
		
	}
	else{
		printf("you have lost the game\n");
	}
		
		printf("\nyou chose : %c and computer chose : %c\n", you, computer);
	return 0;
	
}
