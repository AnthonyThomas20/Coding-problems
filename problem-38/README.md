## Smallest Pair ##

Implement the following Function

**def productSmallestPair(sum, arr)**

The function accepts an integers sum and an integer array arr of size n. 
Implement the function to find the pair, (arr[j], arr[k]) where j!=k, 
Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) 
and return the product of element of this pair

**NOTE**

1. Return -1 if array is empty or if n<2
2. Return 0, if no such pairs found

All computed values lie within integer range

**Input Format**

- First line indicates the sum value
- Second line indicates the size of array
- Third line consist of all array elements

**Output Format**

- Product of smallest pair of elements in the array whose sum is less than the user-entered sum value

**Test Case 1**

*Sample Input:*

> 9

> 7

> 5 2 4 3 9 7 1

*Sample Output:*

> 2

*Explanation:*

- Pair of least two element is (2, 1) 2 + 1 = 3 < 9
- Product of (2, 1) 2*1 = 2. Thus, output is 2

**Test Case 2**

*Sample Input:*

> 4

> 6

> 9 8 3 -7 3 9

*Sample Output:*

> -21
