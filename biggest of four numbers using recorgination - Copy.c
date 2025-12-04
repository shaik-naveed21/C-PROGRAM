#include<stdio.h>
int biggest(int a,int b,int c,int d)
{
if(a>b&&a>c&&a>d)
return a;
else if(b>a&&b>c&&b>d)
return b;
else if(c>a&&c>b&&c>d)
return c;
else if(d>a&&d>b&&d>c)
return d;	
}
int main()
{
	int result;
	result=biggest(100,20,30,50);
	printf("Biggest Number is %d",result);
	return 0;
}

