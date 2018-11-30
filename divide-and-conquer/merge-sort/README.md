# Merge Sort

It divides input array in two halves, calls itself for the two halves and then, merges the two halves and then, merges the two sorted halves. **The merge() function** is used for merging two halves. The merge(arr,l,m,r) is key process that asssumes that arr[l..m]- and arr[m+1..r] are sorted and merges the two sorted subarrays into one.

**MergeSort(arr[],l,r)**
If r>11
1. Find the middle point to divide the array into two halves:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`middle m=(l+r)/2`
2. Call mergeSort for first half:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Call `mergeSort(arr,l,m)`
3. Call mergeSort for second half:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Call `mergeSort(arr,m+1,r)`
4. Merge the two halves sorted in step 2 and step 3:
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Call `merge(arr,l,m,r)`

**Note:** Once the size becomes 1, the merge processes comes into action and starts merging arrays back till the complete array is merged.

![MergeSort](merge-sort.png)