## Second Largest ##

You are required to implement the following Function 

**def largeSmallSum(arr)**

The function accepts an integers arr of size ’length’ as its arguments. 
You are required to return the sum of second largest largest element from the even positions and second smallest from the odd position of given ‘arr’

*Assumption:*

1. All array elements are unique
2. Treat the 0th position as even

**NOTE**

- Return 0 if array is empty
- Return 0, if array length is 3 or less than 3

**Test Case 1**

*Sample Input:*

> 6

> 3 2 1 7 5 4

*Sample Output:*

> 7

*Explanation:*

- Second largest among even position elements (3 1 5) is 3
- Second largest among odd position elements (2 7 4) is 4
- Thus output is 3+4 = 7

**Test Case 2**

*Sample Input:*

> 7

> 1 8 0 2 3 5 6

*Sample Output:*

> 8
