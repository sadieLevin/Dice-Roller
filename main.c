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
	
	char buff[100];
	int n = 99; //buff will cut off at 99 characters
	// At this point, strlen(buff) == 0.

	// Read input from user
	fgets(buff, n, stdin);
	printf("You entered: %s\n", buff);

	char arr[30];

	//populates arr with statements as delineated by plus signs in buff
	int start_index = 0;
	int current_index = 0;
	char working_string[100];

	for(int i = 0; i < strlen(buff); i++)
	{
		printf("%c\n", buff[i]);
	}




/*
	for (int i = 0; i < 100; i++) {
	
		int random_number = rand() % 9 + 1;
		printf("%d ", random_number);
	}
*/

	
	//this lets the computer know it didn't royally mess up, I think??
	return 0;
}
