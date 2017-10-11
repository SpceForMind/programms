#include <stdio.h>

int index_first_negative(int arr[20]);

int index_last_negative(int arr[20]);
/*
int index_between_negative(int []);

int index_before_and_after_negative(int []);
*/

void menu(int arr[20], int value)
{
	switch(value)
	{
	case 0:
		printf("%d\n", index_first_negative(arr));
		break;

	case 1:
		printf("%d\n", index_last_negative(arr));
		break;
/*
	case 2:
		printf("%d\n", index_between_negative(arr));
		break;

	case 3:
		printf("%d\n", index_before_and_after_negative(arr));
		break;
*/
	default:
		printf("Данные некоректны");
		break;
	}
}



int main()
{
	int arr[] = {1, 10, -30, 21,-89, 10, 16};	
	int value;

	printf("Enter value: ");
	scanf("%d", &value);
	
	menu(arr, value);	

	return 0;
}
