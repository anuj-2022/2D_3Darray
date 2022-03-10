#include<stdio.h>
#define ROW    2
#define COL     3

void main()
{
int a[2][3]={10,20,30,40,50,60};//it is not understanding
int b[2][3]={{100,200,300},{400,500,600}};//more clear
//              row0            row1
printf("%d\n",b[0][1]);//accessing row0 and columb1
printf("%d\n",a[1][0]);//accessing row1 and columb0
int i,j;
for(i=0;i<ROW;i++)
{
        for(j=0;j<COL;j++)
        {
                printf("&a[%d][%d]=%p, value is=%d\n",i,j,&a[i][j],a[i][j]);
        }
}
printf("base addr of the array=%p, address of first element =%p\n",a,&a[0][0]);//no need to given the & for printing the address in array
//base address and first element address are always same

}

