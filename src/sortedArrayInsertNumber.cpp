/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

int* sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if(Arr == NULL || len<0)
		return NULL;
	int c = 1;
	/*for (int i = 0; i < len - 1; i++)
		if (Arr[i] <= Arr[i + 1])
			c++;
	if ((c + 1) != len)
	 return NULL;*/
	Arr = (int *)realloc(Arr, sizeof(int)*(len + 1));
	for (int i = 0; i < len; i++)
	{

		if (Arr[i] >= num)
		{
			for (int j = i; j < len; j++)
			{
				Arr[j + 1] = Arr[j];
			}
			c = 0;
			Arr[i] = num;

		}
	}
	if (c)
		Arr[len] = num;
	
	return Arr;
}