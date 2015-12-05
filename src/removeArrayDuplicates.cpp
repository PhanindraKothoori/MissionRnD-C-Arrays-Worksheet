/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	if (Arr && len > 0){
		int flag = 0;
		for (int x = 0; x<len; x++)
		{
			flag = 0;
			for (int y = 0; y<len - 1; y++)
			{
				if (Arr[y]>Arr[y + 1])
				{
					int temp = Arr[y + 1];
					Arr[y + 1] = Arr[y];
					Arr[y] = temp;
					flag++;
				}
			}
			if (flag == 0){
				break;
			}
		}


		int i = 0, j = 0;
		for (i = 1; i < len; i++)
		{
			if (Arr[i] != Arr[j])
			{
				j++;
				Arr[j] = Arr[i]; // Move it to the front

			}
		}
	}
	else return NULL;
}