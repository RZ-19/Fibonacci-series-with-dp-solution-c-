#include<bits/stdc++.h>
using namespace std;
const int N=100000;
int dp[N];
int main()
{
	int n;
	cin>>n;
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
		cout<<dp[i]<<endl;
		
	}
	
	cout<<dp[n];
	
	return 0;
}
