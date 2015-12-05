/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr && len > 0){
		int first = -1, last = -1, i = 0;
		while (i < len){
			if (Arr[i] > Arr[i + 1]){
				first = i;
				break;
			}
			i++;
		}
		i = len - 1;
		while (i >0){
			if (Arr[i] < Arr[i - 1]){
				last = i;
				break;
			}
			i--;
		}
		//swap
		if (first != -1 && last != -1){
			Arr[first] = Arr[first] + Arr[last];
			Arr[last] = Arr[first] - Arr[last];
			Arr[first] = Arr[first] - Arr[last];
		}

		
	}
	else return NULL;
}