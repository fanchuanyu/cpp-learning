#include <iostream> 
using namespace std;
int main()
{
	int a[50],d,b,c,i,j;
	cin>>j;
	for(i=0;i<j;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<j-1;i++)
	{
		for(c=j-1;c>=i+1;c--)
		{
			if(a[c]>a[c-1])
			{
				d=a[c];
				a[c]=a[c-1];
				a[c-1]=d;
			}
		}
	}
	for(i=j-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
