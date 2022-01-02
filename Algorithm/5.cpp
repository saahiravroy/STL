#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
 	int n;cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	rotate(v.begin(),v.begin()+2,v.end());
	for(int i=0;i<n;i++)cout<<v[i]<<" ";
	cout<<endl;


	next_permutation(v.begin(), v.end());
	for(auto x:v)cout<<x<<" ";
	cout<<endl;
	

	//swap(arguments) .... // reverse(arguments)
}