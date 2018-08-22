#include<stdio.h>
int main()
{
    int n,m,i,j,z;
    
    z=0;
    
    scanf("%d %d",&n,&m);
    int arr[m][3];
    int arr2[n];
    for(i=0;i<n;i++)
    {
        arr2[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    for(i=1;i<=n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (arr[j][0]==i)
            arr2[i-1]+=arr[j][2];
            else if (arr[j][1]==i)
            arr2[i-1]-=arr[j][2];
        }
    }
    for(i=0;i<n;i++)
    {
    if(arr2[i]>=0)
    z=z+arr2[i];
    }
    printf("%d",z);
    
    
}