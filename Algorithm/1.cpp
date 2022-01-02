#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int key;cin>>key;
	auto it=find(arr,arr+n,key);
	int idx=it-arr;
	if(idx==n)cout<<key<<" not present"<<endl;
	else cout<<key<<" present"<<endl;
}