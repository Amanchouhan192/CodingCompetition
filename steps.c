#include<stdio.h>

int main()
{

	int n;
	int arr[n];
	int i;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d\t",arr[i]);
		}
	}

return 0;
}