#include <stdio.h>

int main(void) {
int a[1000],n,k,i,sum=0;
scanf("%d ",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&k);

for(i=0;i<=k;i++)
{
	sum=sum+i;
}
printf("%d",sum);
	return 0;
}
