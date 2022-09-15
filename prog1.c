#include<stdio.h>
int main()
{
    int a[10],b[10],flag=0,n1,n2,i,j;
    printf("enter array 1 size: ");
    scanf("%d",&n1);
    printf("\n enter arrary 2 size: ");
    scanf("%d",&n2);
    printf("\n enter array 1 elements: ");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("\n enter elements of array 2: ");
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    printf("\n union : ");
    for (i=0;i<n1; i++)
    printf("%d",a[i]);
    for(i=0;i<n2;i++)
    {for(j=0;j<n1;j++)
    {if(b[i]==a[j])
    {flag=1;}
    }}
    if(flag==0)
    {printf("%d",b[i]);}

return 0;
}


