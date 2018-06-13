#include<iostream>

using namespace std;

long long cache[100001];

long long fact(int n)
{
    if(n==0)
        return 1;
    if(cache[n]!=-1)
        return cache[n];
    cache[n]=(n*fact(n-1))%(1000000007);
    return cache[n];
}

int main(void)
{
    for(int i=0;i<100001;i++)
        cache[i]=-1;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans=fact(n);
        cout<<ans<<endl;
    }
    return 0;
}
