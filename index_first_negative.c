#include <stdio.h>


int index_first_negative(int arr[20])
{
	unsigned i;
	for(i = 0; i < (int)sizeof(arr)/(int)sizeof(arr[0]); ++i)
	{
		if(arr[i] < 0)
			return arr[i];
	}
}
