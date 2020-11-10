## Dormant Accounts ##

The bank SafeMoney had some dormant accounts. The bank charges certain monthly rates for the maintenance of these accounts. 
Because of the monthly deductions, the balance of some of these accounts are negative. The bank wishes to close these negative-value dormant accounts.

Write a program to help the bank find the number of dormant accounts that have a negative balance.


**Input Format:**

The first line of the input consists of an integer numOfAccounts , representing the number of dormant accounts (N).

The second line consists of N space-separated integers : ac1, ac2........, acN representing the balance in each account.

**Output Format:**

Print an integer representing the number of dormant accounts that must be closed for negative balance.


Constraints

0 < = numOfAccounts < = 10^6

-1006 <= balances <=1006

0 < = i < numOfAccounts

**Test Case 1**

*Sample Input:* 

> 10

> -5 - 3 8 -6 -7 18 10 -4 -3 11

*Sample Output:*

> 6

*Explanation:* 

The accounts that must be closed for negative balances are at indices [ 0, 1, 3, 4, 7, 8 ] i.e. [ -5, -3, -6, -7, -4, -3 ]
So, the output is 6
