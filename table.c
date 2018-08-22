#include<stdio.h>
int main()
{
    int n,k,i,j,r;
    r=0;
    scanf("%d %d",&n,&k);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   
            arr[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        arr[i][r]=k;
        r++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}