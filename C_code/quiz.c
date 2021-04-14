
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct question{

	char question[200];
}question;

typedef struct answer{

	char answers[][50];
	{
		{char answer1},
		{char answer2},
		{char answer3},
		{char answer4}
	};
}answer;

void questionPrinter(question printing)
{
printf("%s", printing.question);
};
answer answers1 = {"Kenya", "Guatemala", "Brazil", "Columbia"};
question question1 = {"Which country produces the most coffe in the world?"};



int main()
{
char quizStart;

printf("Welcome to the Trivia quiz!!!");
printf("Would you like to start?\n\t press Y or N.");
scanf("%s", &quizStart);
if(quizStart == "y" || quizStart  == "Y")
{
	printf("Get ready for your first question!\n");

} else if(quizStart ==  "n" || quizStart == "N")
{
	printf("Goodbye!");
	return 0;
};	
void questionPrinter(question1.question);



	return 0;
}
