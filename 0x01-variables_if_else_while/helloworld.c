#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry Point
  *
  *Return: Always 0 (Success)
*/
int main(void)
{
        unsigned char nam;
	int age;
	printf("Hello, World\n");
	printf("Please enter your name and age\n:");
	scanf("%c %d",&nam,&age);
	printf("Oh your name is %c and your age is %d\n",nam,age);
	printf("Thank you for the info\n");
	return (0);
}

