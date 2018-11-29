# Binary Search

Note: The array elements entered for binary search are always fed in ascending order.

## Steps:

1. Compare `x` with the middle element.
2. If `x` matches with middle element, return the middle index.
3. Else if `x` is greater than the middle element, then, `x` can only lie in the right half of the subarray after the mid element. So, we recur for right half.
4. Else `x` is smaller, recur fo th left subarray.