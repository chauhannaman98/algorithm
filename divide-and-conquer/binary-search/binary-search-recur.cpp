//binary search using recursive function

#include <iostream>

using namespace std;

/* arr[0,high];
 * low = first index of array
 * high = last element of array
 */

int BinSrch(int arr[], int low, int high, int x)	{
	if (high>=1)	{
		int mid=(low+high)/2;
		
		//if element is the present at the middle itself
		if (arr[mid]==x)
			return mid;
			
		/*if element <  mid, it can only be present
		in the left subarray*/
		if (arr[mid]>x)
			return BinSrch(arr, low, mid-1, x);
			
		/*else the element can only be present
		in the right subarray*/
		return BinSrch(arr, mid+1, high, x);
	}
	return -1;
}

int main()	{
	int arr[] = {2,3,4,10,40,43,65,126};
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
