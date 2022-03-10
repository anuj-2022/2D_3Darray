#include<stdio.h>
#define	D1	2
#define D2	2
#define	D3	3	

void array_3d(int *,int );

void main()
{
	int a[D1][D2][D3]={10,20,30,40,50,60,70,80,90,100,110,120};
	int n=0;
	n=D1*D2*D3;
	void (*fp)(int *,int);
	 fp=array_3d;
	fp(a,n);
}

void array_3d(int *a,int b)
{
int i=0;
for(i=0;i<b;i++)
	printf("%d ",*a++);
}
