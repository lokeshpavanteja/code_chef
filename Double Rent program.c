/*Chefina decided to move into Chef's apartment.
Chef was initially paying a rent of 
X
X rupees. Since Chefina is moving in, the owner decided to double the rent.

Find the final rent Chef needs to pay.

Input Format
The input consists of a single integer 
X
X, denoting the rent Chef was initially paying.

Output Format
Output on a new line, the final rent Chef needs to pay.

Constraints
1
≤
X
≤
10
1≤X≤10*/
#include <stdio.h>
int main() 
{
	int X;
	scanf("%d",&X);
	int y=2*X;
	printf("%d",y);
	return 0;
}

