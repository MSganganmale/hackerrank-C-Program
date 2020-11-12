#include<stdio.h>
int main()
{
	int a,b,c[100];
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		scanf("%d",&c[b]);
	}
	int ans=0;
	for(b=0;b<a;b++)
	{
		ans=ans+c[b];
	}
	printf("%d",ans);
}
