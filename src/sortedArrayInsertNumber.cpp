/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
int findIndex(int *a, int len, int n){
	int j = 1, i = 0;
	int index = NULL;
	//first
	if (a[i] > n){
		return index = 0;
	}

	if (a[len - 1] < n){
		return index = len;
	}

	++i;
	while (j < len && j * 2<len){
		if (a[j] < n && j * 2 < len){
			j *= 2;
		}
		else if (a[i] < n && i * 2 != j){
			i *= 2;
		}
		else break;

	}
	int k = 0, temp = 0;
	while (i < j){
		if (a[i] < n){
			temp = i;
			i += 1 << k;
			if (a[i] > n){
				i = temp;
				while (1){
					if (a[i] > n){
						return i;
					}
					i++;
				}
			}
		}

		k++;
	}

}
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (Arr && len>=0){
		int i = 0, j = 0, ind = findIndex(Arr, len, num);
		int *newarr = (int *)calloc(len + 1, sizeof(int));
		newarr[ind] = num;
		while (j < len + 1){
			if (j == ind){
				j++;
				continue;
			}
			newarr[j] = Arr[i];
			i++;
			j++;
		}
		return newarr;
	}
	else return NULL;
}