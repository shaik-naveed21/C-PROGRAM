#include<stdio.h>
void add();
int main()
{
	add();
	add();
	add();
	return 0;
}
void add()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("addition is %d\n",c);
}
