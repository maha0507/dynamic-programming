#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int fact(int n)
{   if(n<=1)
    {
    	return n;
    }

	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=fact(n-1)*n;
}
 int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<fact(n)<<endl;
	for(int i=0;i<=n;i++)
	{
		cout<<dp[i];
	}
	return 0;
}
