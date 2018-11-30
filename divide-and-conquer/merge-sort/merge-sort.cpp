#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r)	{
	int i, j, k;
	int n1 = m-1+1;
	int n2 = r-m;
	
	/* create temp arrays */
	int L[n1], R[n2];
	
	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l+i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 +j];
		
	/* Merge the temp arrays back into arr[l..r] */
	i = 0;	//Intitial index of first subarray
	j = 0;	//Intitial index of second subarray
	k = 0;	//Intitial index of merged subarray
	while (i < n1 && j < n2)	{
		if (L[i] <= R[j])	{
			arr[k] = L[i];
			i++;
		}
		else	{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	/* Copy the remaining elements of L[], if there are any */
	while (i < n1)	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	/* Copy the remaining elements of R[], if */
}
