#include<stdio.h>
#define	D1	2
#define D2	3
#define	D3	3	

void main()
{
	int a[D1][D2][D3]={10,20,30,40,50,60,70,80,90,100,110,120};
	int i,j,k;
for(i=0;i<D1;i++)
{
	for(j=0;j<D2;j++)
	{
		for(k=0;k<D3;k++)
		printf("&a[%d][%d][%d]=%p a[%d][%d][%d]=%d\n",i,j,k,&a[i][j][k],i,j,k,a[i][j][k]);
	}
}
}
