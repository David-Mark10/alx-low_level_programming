#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
  *Main - Entry Point
  *
  * Return: Alwas 0 (Success)
*/
int main()
{	
	int prc, qty;
	printf("Please enter the price of the orange\n");
	scanf("%d", &prc);
	printf("Please enter the quantity of orange taken\n");
	scanf("%d", &qty);
	int m = prc*qty;

	if (prc <=0){
		printf("You didn't enter the price for the item\n");
		printf("Please enter the price for the item\n");
		scanf("%d", &prc);
		int m = prc*qty;
		printf("Your bill is %d\n", m);
	}
	else if (qty <= 0){
		printf("You did not enter any value for quantity\n");
		printf("Please enter a value for quantity\n");
		scanf("%d", &qty);
		int m = prc*qty;
		printf("Your bill is %d\n", m);
	}
	else 
		{printf("Your bill is %d\n", m);
	}
	return (0);
}
