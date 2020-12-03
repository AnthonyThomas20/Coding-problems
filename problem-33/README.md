## Divisibility - Difference of Sum ##

Implement the following Function :- *def differenceofSum(n, m)*

The function accepts two integers n, m as arguments.
Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. 
Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

*Assumption:*

n>0 and m>0 and sum lies between integral range

**Test Case 1**

*Sample Input:*

> 4

> 20

*Sample Output:*

> 90

*Explanation:*

Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60

Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150

Difference 150 – 60 = 90

**Test Case 2**

*Sample Input:*

> 3

> 10

*Sample Output:*

> 19
