#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int N,M;
	    scanf("%d%d",&N,&M);
	    printf("%d\n",((N - M) > 0) ? (N - M) : 0);
	}
	return 0;
	

}

