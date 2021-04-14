#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct Question{

 	char question[100];
	char answer1[50];
	char answer2[50];
	char answer3[50];
	char answer4[50];
};

void questionPrinter(char question[], char answer1[], char answer2[], char answer3[], char answer4[]){

printf("\n %s \n 1: %s \n 2: %s \n 3: %s \n 4: %s\n", question, answer1, answer2, answer3, answer4);
printf("What is your answer? 1? 2? 3? 4?");
}
int playerAnswers[8] = {};
bool trueOrFalse[8] = {};

int main()
{

struct Question question1;
	strcpy( question1.question, "Which country produces the most coffee?");
	strcpy( question1.answer1, "Kenya");
	strcpy( question1.answer2, "Guatemala");
	strcpy( question1.answer3, "Brazil");
	strcpy( question1.answer4, "Ethiopia");
struct Question question2;
	strcpy( question2.question, "What was the first state?" );
	strcpy( question2.answer1, "Michigan");
	strcpy( question2.answer2, "California");
	strcpy( question2.answer3, "Delaware");
	strcpy( question2.answer4, "Washington");
struct Question question3;
	strcpy( question3.question, "Pure water has a pH level of around?");
	strcpy( question3.answer1, "7");
	strcpy( question3.answer2, "6");
	strcpy( question3.answer3, "8");
	strcpy( question3.answer4, "10");
struct Question question4;
	strcpy( question4.question, "Which computer manufacturer is the best?");
	strcpy( question4.answer1, "Dell");
	strcpy( question4.answer2, "MSI");
	strcpy( question4.answer3, "Apple");
	strcpy( question4.answer4, "Asus");
struct Question question5;
	strcpy( question5.question, "Which country is the best?");
	strcpy( question5.answer1, "USA");
	strcpy( question5.answer2, "Turkey");
	strcpy( question5.answer3, "Taiwan");
	strcpy( question5.answer4, "Japan");
struct Question question6;
	strcpy( question6.question, "What is love?");
	strcpy( question6.answer1, "Having strong feelings for someone");
	strcpy( question6.answer2, "Being illogically attached");
	strcpy( question6.answer3, "a chemical reaction");
	strcpy( question6.answer4, "Baby Dont Hurt me!");

printf("Welcome to  your final quiz!\n");
printf("If you'd like to take the quiz press Y or press N to exit!");
char startQuiz;
scanf("%s", &startQuiz);

if(startQuiz=='y' || startQuiz=='Y')
{
	printf("Welcome to the quiz!!! Brave human!!!");

}else if(startQuiz=='n' || startQuiz== 'N')
{
	return 0;
}else
{
printf("Dont hack the quiz!");
return 0;
}

int points = 0;

questionPrinter(question1.question, question1.answer1, question1.answer2, question1.answer3, question1.answer4);
scanf("%d", &playerAnswers[1]);
if(playerAnswers[1] == 3)
{
printf("Correct answer!\n\n Get ready for your next question!\n");
points = points+16;
trueOrFalse[1] = 1;
}else if(playerAnswers[1]!=3)
{
printf("Wrong Answer! But dont worry there are more questions! ");
trueOrFalse[1] = 0;
};

questionPrinter(question2.question, question2.answer1, question2.answer2, question2.answer3, question2.answer4);
scanf("%d", &playerAnswers[2]);
if(playerAnswers[2] == 3)
{
 printf("Correct answer!\n\n Get ready for your next question!\n");
points = points+16;
trueOrFalse[2] = 1;
}else if(playerAnswers[2]!=3)
{
printf("Wrong Answer! But dont worry there are more questions! ");
trueOrFalse[2] = 0;
};

questionPrinter(question3.question, question3.answer1, question3.answer2, question3.answer3, question3.answer4);
scanf("%d", &playerAnswers[3]);
if(playerAnswers[3] == 1)
{
 printf("Correct answer!\n\n Get ready for your next question!\n");
points = points+16;
trueOrFalse[3] = 1;
}else if(playerAnswers[3]!=1)
{
printf("Wrong Answer! But dont worry there are more questions! ");
trueOrFalse[3] = 0;
};

questionPrinter(question4.question, question4.answer1, question4.answer2, question4.answer3, question4.answer4);
scanf("%d", &playerAnswers[4]);
if(playerAnswers[4] == 4)
{
 printf("Correct answer!\n\n Get ready for your next question!\n");
points = points+16;
trueOrFalse[4] = 1;
}else if(playerAnswers[4]!=4)
{
printf("Wrong Answer! But dont worry there are more questions! ");
trueOrFalse[4] = 0;
};

questionPrinter(question5.question, question5.answer1, question5.answer2, question5.answer3, question5.answer4);
scanf("%d", &playerAnswers[5]);
if(playerAnswers[5] == 3)
{
 printf("Correct answer!\n\n Get ready for your next question!\n");
points = points+16;
trueOrFalse[5] = 1;
}else if(playerAnswers[5]!=3)
{
printf("Wrong Answer! But dont worry there are more questions! ");
trueOrFalse[5] = 0;
};

questionPrinter(question6.question, question6.answer1, question6.answer2, question6.answer3, question6.answer4);
scanf("%d", &playerAnswers[6]);
if(playerAnswers[6] == 4)
{
 printf("Correct answer!\n\n The quiz is over!!\n");
points = points+16;
trueOrFalse[6] = 1;
}else if(playerAnswers[6]!=4)
{
printf("The quiz is over!!!\n");
trueOrFalse[6] = 0;
};
 for(int j=1; j<7; j++)
{
printf("Your %dth question was ",j);
if(trueOrFalse[j]==true)
{
printf("Correct!\n");
}
else if(trueOrFalse[j] ==false)
{
printf("Wrong!\n");
}
printf("Your answer was %d\n", playerAnswers[j]);
}
printf("Your total score is: %d \n", points);
return 0;
}
