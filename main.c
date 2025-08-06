#include <stdio.h>
#include <stdlib.h>

//rand() generates random number, ought to be stored as int __variablename__ = rand();
//input follows this pattern
//	printf("type a number: ")
//	scanf("%d", &myNum)
//%d suspected to be regex, &myNum stores the memory address of the referenced 

//main is an int in order to communicate with the OS whether or not the program completed successfully
//(as opposed to void main() etc

int main()
{
	for (int i = 0; i < 100; i++) {
	
		int random_number = rand() % 9 + 1;
		printf("%d ", random_number);
	}
	
	//this lets the computer know it didn't royally mess up, I think??
	return 0;
}

