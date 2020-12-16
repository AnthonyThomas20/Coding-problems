## E-commerce Sales ##

The e-commerce company BookShelf wishes to analyze its monthly sales data between minimum range 30 and maximum range 100.

The company has categorized these books sales into four groups depending on the number of sales. With the help of these groups, the company will know which stock they should increase or decrease in their inventory for the next month.

The groups are as follows :

| Sales Range |	Groups |
| ----------- | ------ |
|   30 - 50   |   D    |
|   51 - 60   |   C    |
|   61 - 80   |   B    |
|   81 - 100  |   A    |

Write a program to find the group for a given book sale count.

**Input Format:**

The input consists of an integer saleCount, representing the total sales of a book.

**Output Format:**

Print a character representing the group for a given sale count.

**Constraints:**

30 < = salesCount < = 100


**Test Case 1**

*Sample Input:*

> 57

*Sample Output:*

> C


*Explanation:*

57 lies in range 51 to 60, so the group is C.
