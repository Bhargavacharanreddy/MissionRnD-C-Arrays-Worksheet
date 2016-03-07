/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void* sortedArrayPositionsChange(int *Arr, int len)
{
	int c = 0,x = 0, y = 0;
	if (Arr==NULL || len<0)
	return NULL;
	for (int i = 0; i < len-1; i++)
	{
		if (!(Arr[i] <= Arr[i + 1]))
		{
			c++;
			if (c == 1)
				x = i;
			if (c == 2)
				y = i+1;
		}
	}
	if (c == 1)
		y = x + 1;
	c = Arr[x];
	Arr[x] = Arr[y];
	Arr[y] = c;
}