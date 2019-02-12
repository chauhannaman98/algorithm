//binary search using iterative function

#include <iostream>

using namespace std;

/* arr[0,high];
 * low = first index of array
 * high = last element of array
 */

int BinSrch(int arr[], int low, int high, int x)	{
	int mid = (low+mid)/2;
	while(low<=high)	{
		if(arr[mid]==x)
			return mid;
		else	
			if (x>arr[mid])
				low = mid+1;
			else
			 	high = mid-1;
		mid=(low+high)/2;		
	}
	return -1;
}

int main()	{
	int arr[] = {2,3,4,10,40,43,126};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cout<<"Enter the number to be searched: ";
	cin>>x;
	int result = BinSrch(arr,0,n-1,x);
	if (result == -1)	{
		cout<<"\nElement is not present in array!";
	}
	else	{
		cout<<"\nElement is present at index "<<result;
	}
	return 0;
}
