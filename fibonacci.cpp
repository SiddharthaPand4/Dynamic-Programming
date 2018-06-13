#include<iostream>
#define MAX 100000
using namespace std;

long long cache[MAX+1];

long long fibonacci(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	if(cache[n]!=-1)
		return cache[n];
	cache[n]=fibonacci(n-1)+fibonacci(n-2);
	return cache[n];
}

int main(void)
{
	for(int i=0;i<=MAX;i++)
			cache[i]=-1;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long ans=fibonacci(n);
		cout<<ans<<endl;
	}
	return 0;
}
