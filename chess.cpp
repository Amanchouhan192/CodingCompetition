#include<cstdio>
using namespace std;
int main()
{

int n,a,k,l,m,x,o,y,p=0,q=0;
scanf("%d",&n);



if(n%2==1)
{

k=(n+1)/2;
l=(n-1)/2;
m=(k)*(k);
a=(l)*(l);

x=m+a;
printf("%d\n",x);
}
else if(n%2==0)
{
    o=(n/2)*(n/2);
    y=o+o;
    printf("%d\n",y);

}
for(p=1;p<=n;++p)
{
for (q=1;q<=n;++q)

  {
  
  if(((p+q)%2))
  {printf("%c",'.');
  }
  else
  {printf("%c",'C');
  } 
  
  
}printf("\n");
}
return 0;
}