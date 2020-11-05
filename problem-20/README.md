## Estimated Washing Time ##

A washing machine works on the principle of Fuzzy System. 
The weight of clothes put inside it for washing is uncertain.
But based on weight measured by sensors, it decides time and water level which can be changed by menus given on the machine control area.  

1. For low level water, the time estimate is 25 minutes, where approximately weight is between 2000 grams or any nonzero positive number below that.
2. For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.
3. For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams.

Assume the capacity of machine is maximum 7000 grams.

Write a function which takes a numeric weight in the range [0,7000] as input 
and produces estimated time as output is: “OVERLOADED” for input greater than 7000, and for all other inputs, the output statement is “INVALID INPUT”.

Input should be in the form of *integer* value 

Output must have the following format – *Time Estimated: Minutes*

**Test Case 1:**

*Sample Input:*

> 2000

*Sample Output:*

> Time Estimated: 25 minutes

**Test Case 2:**

*Sample Input:*

> 7020

*Sample Output:*

> OVERLOADED
