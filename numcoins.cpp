#include<bits/stdc++.h>
using namespace std;
int dp[100001],cnt=0;
int slove(int arr[],n,m){
	if(m<=0){
		return 1;
	}
	if(dp[i]!=0){
		return dp[i];
	}
}

main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i,n;i++){
			cin>>arr[i];
		}
		int m;
		cin>>m;
		cout<<slove(arr,n,m);
	}
}
