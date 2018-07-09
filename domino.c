#include<stdio.h>
int main()
{
    int n,i,j,x,y,z,p,q;
    p=0;
    q=0;
    x=0;
    y=0;
    z=0;
    scanf("%d",&n);
    int arr[n][2];
    for (i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {scanf("%d",&arr[i][j]);
        
        }
    }
    for (i=0;i<n;i++)
    {
        if (arr[i][0]%2==1&&arr[i][1]%2==1)
        x++;
        else if (arr[i][0]%2==1&&arr[i][1]%2==0)
        y++;
            else if (arr[i][0]%2==0&&arr[i][1]%2==1)
        z++;
        
    }
    if ((x+y)%2==1)
    p=1;
    if ((x+z)%2==1)
    q=1;
    if((p==1)&&(q==1))
    {
        if((y>0)||(z>0))
        {
            printf("1");
        }
        else
        printf("-1");
    }
    else if((p==1)&&(q==0)||(p==0)&&(q==1))
    printf("-1");
    else 
    printf("0");
    return 0;
}