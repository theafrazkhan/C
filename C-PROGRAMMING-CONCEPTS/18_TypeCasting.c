//*****************************************************************************************************
// Author : Afraz Khan
//
// www.github.com/theafrazkhan
// www.linkedin.com/theafrazkhan
// www.facebook.com/theafrazkhan
//
// Program: Typecasting in C
// Description: Have a look at Readme.md file to have detailed insights of this program

//*****************************************************************************************************

#include <stdio.h>
int main()
{
	int a;
	float b;
	char c;
	printf("Enter the value of a\n");
	scanf("%d", &a);
	printf("A is %d\n", a);
	printf("Enter the value of b\n");
	scanf("%f", &b);
	printf("B is %d\n", (int)b);
	printf("Type any character : \n");
	scanf(" %c", &c);
	printf("Character is %d", (int)c);
	return 0;
}
