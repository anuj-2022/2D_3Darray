#include<stdio.h>
#define	D1	2
#define D2	3
#define	D3	3	

void main()
{
	int a[D1][D2][D3];
	int i,j,k;
	printf("Enter the value\n");
for(i=0;i<D1;i++)//loop use for 1d array
{
        for(j=0;j<D2;j++)//loop use for 2d array
        {
                for(k=0;k<D3;k++)//loop use for 3d array
		{
		printf("a[%d][%d][%d]=",i,j,k);
                scanf("%d",&a[i][j][k]);//reading the value from the user
		}
        }
}
printf("\nThe value is #####\n");
for(i=0;i<D1;i++)
{
	for(j=0;j<D2;j++)
	{
		for(k=0;k<D3;k++)
		printf("&a[%d][%d][%d]=%p a[%d][%d][%d]=%d\n",i,j,k,&a[i][j][k],i,j,k,a[i][j][k]);//printing the arrays value
	}
}
}
