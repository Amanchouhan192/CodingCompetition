#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,j,a,b,p,q,r,s,k,z,c,d,l;
    long arr[4];
    arr[0]=1000001;
    arr[1]=1000001;
    arr[2]=1000001;
    arr[3]=1000001;
    scanf("%d %d %d %d %d %d",&n,&m,&i,&j,&a,&b);
    
    
    p=(i-1);
    q=(j-1);
    r=abs(i-n);
    s=abs(j-m);
    
    if(((p%a)==0)&&((q%b)==0))
    {k=p/a;
     z=q/b;
        if(((abs(k-z))%2)==0)
        {
        if (k>z)
        arr[0]=k;
        else
        arr[0]=z;
        }
     }
    
    if(((p%a)==0)&&((s%b)==0))
    {k=p/a;
     z=s/b;
        if((abs(k-z)%2)==0)
        {
        if (k>z)
        arr[1]=k;
        else
        arr[1]=z;
        }
     }
    
     if(((r%a)==0)&&((q%b)==0))
    {k=r/a;
     z=q/b;
        if((abs(k-z)%2)==0)
        {
        if (k>z)
        arr[2]=k;
        else
        arr[2]=z;
        }
     }
    if(((r%a)==0)&&((s%b)==0))
    {k=r/a;
     z=s/b;
        if((abs(k-z)%2)==0)
        {
        if (k>z)
        arr[3]=k;
        else
        arr[3]=z;
        }
     }
  for (c = 1 ; c <= 3; c++) {
    d = c;
 
    while ( d > 0 && arr[d] < arr[d-1]) {
      l         = arr[d];
      arr[d]   = arr[d-1];
      arr[d-1] = l;
 
      d--;
    }
  }
  
  
  if(n==i&&m==j||(i==1)&&(j==1)||(i==n)&&(j==1)||(i==1)&&(j==m))
  printf("0");
  else if(a>(n-i)&&(n!=i))
  printf("Poor Inna and pony!");
  else if(b>(m-j)&&(m!=j))
  printf("Poor Inna and pony!");
  
  
  else if(n==1)
  printf("Poor Inna and pony!");
  else if(n==i&&a>=n)
  printf("Poor Inna and pony!");
  else if(m==j&&b>=m)
  printf("Poor Inna and pony!");
  else if (arr[0]!=1000001)
  printf("%d",arr[0]);
  else
  printf("Poor Inna and pony!");
  return 0;
    
    
}