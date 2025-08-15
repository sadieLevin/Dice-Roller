#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//rand() generates random number, ought to be stored as int __variablename__ = rand();
//input follows this pattern
//	printf("type a number: ")
//	scanf("%d", &myNum)
//%d suspected to be regex, &myNum stores the memory address of the referenced 

//main is an int in order to communicate with the OS whether or not the program completed successfully
//(as opposed to void main() etc

int main()
{
	printf("xdy for x of dice rolls y\nq to quit\n");
	
	char input_buff[100];
	int n = 99; //input_buff will cut off at 99 characters
	// At this point, strlen(input_buff) == 0.

	// Read input from user
	fgets(input_buff, n, stdin);
	printf("You entered: %s\n", input_buff);

/*    POSSIBLE SOLUTION TO STRING HANDLING
	//populates arr with statements as delineated by plus signs in input_buff
	int start_index = 0;
	int current_index = 0;
	char working_string[100];
*/

	//string parsing here! I need a malloc situation and some conditionals in this for loop to handle "d" phrases, "+" delimiters, and whitespace! Whitespace effectively caught!
	
	//dice = malloc(sizeof(char* * len(input))); //courtesy of Cassidy Ureda for helping me through this one.
	char dice_notation_buff[10];

	for(int i = 0; i < strlen(input_buff); i++)
	{
		printf("%c ", input_buff[i]);
		
		if (input_buff[i] == '+')
		{
			printf("is an addition symbol, should lead to next phrase memory chunk");
		}
		else if (input_buff[i] == 'd')
		{
			printf("indicates the second half of a phrase, should indicate block 2 of a memory chunk");
		}
		printf("\n");
	}




/*
	for (int i = 0; i < 100; i++) {
	
		int random_number = rand() % 9 + 1;
		printf("%d ", random_number);
	}
*/

	
	
	return 0;
}
