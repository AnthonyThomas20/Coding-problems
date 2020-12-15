## Fertility Value ##

The NGO SaveEarth is planting trees on a straight highway road. 
For this purpose, they have divided the road into virtual blocks. 
Each block is assigned a value identifies the fertility value of the soil of the block. 
The fertility value can be positive or negative. 
The NGO will plant the trees over the course of the first day and second day. 
The third block will be plowed on the first day and the fourth block will be plowed on the second day, and so on.

For the purpose of analysis, they wish to calculate the total fertility value of the blocks that are plowed each day. 
The total fertility value is calculated by adding the fertility values of all the blocks.

Write an algorithm to find the total fertility value of the blocks plowed on first day.


**Input Format :**

The first line of the input consists of an integer numBlocks, representing the number of blocks(N). 
The second line consists of N space - separated integers - fertilityValue1, fertilityValue2, ......... , fertilityValueN 
representing the fertility value of the soil assigned to each block.

**Output Format :**

Print an integer representing total fertility value of the blocks plowed on first day.


**Constraints**

0 < = numBlocks < = 10^5

-10^6 < = fertility value < = 10^6

1 < i < numBlocks


**Test Case 1**

*Sample Input :*

> 7

> 2 -3 8 -6 -7 18 1

*Sample Output :*

> 4
