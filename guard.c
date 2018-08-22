#include<stdio.h>
int main()
{
    int n,i,j,a,b,c,z;
    z=0;
    scanf("%d",&n);
    int arr[4][4];
    for(i=0;i<4;i++)
    {for(j=0;j<4;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    }
    for(i=0;i<4;i++)
    {
        if (arr[i][0]<=arr[i][1])
        a=arr[i][0];
        else
        a=arr[i][1];
        if(arr[i][2]<=arr[i][3])
        b=arr[i][2];
        else
        b=arr[i][3];
        if((a+b)<=n)
        {
        z=0;
        
        break;
        }
        else
        {
        z=1;
        continue;
        }
    }
    c=n-a;
    if(z==0)
    printf("%d %d %d",i+1,a,c);
    else
    printf("-1");
    return 0;
    
}