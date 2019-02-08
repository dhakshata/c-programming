#include <stdio.h>

int main() {
	int n,c=1,i,rem;
	scanf("%d",&n);
	while(n>9)
	{
		rem=n%10;
		c++;
		n=n/10;
	}
	printf("%d",c);
	return 0;
}
