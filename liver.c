#include<stdio.h>
#include<string.h>

int main()
{
 long long int i ,z , n,a,p,q;
 p = 0;
 q  = 0;

 char arr[1000001];
 scanf("%s",&arr);

 n = strlen(arr);
 for(i = 0;i<n;i++)
 {
    if(arr[i]== '^')
    {
        z = i;
        break;
    }
 }
for(i=0;i<z;i++)
{
    if(arr[i]=='=')
    {   
        continue;

    }
        else a=arr[i]-'0';
        p=p+(a*(z-i));
    

}
for(i=z;i<n;i++)
{
    if(arr[i]=='=')
    {   
        continue;

    }
        else a=arr[i]-'0';
        q=q+(a*(i-z));
    

}
if(p>q)
    printf("left");
    else if(p==q)
    printf("balance");
    else
    printf("right");
    
    return 0;

}