#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){

	int n;cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	cout<<v.size()<<endl;	
	cout<<v.capacity()<<endl;
	v.push_back(6);
	cout<<"size : "<<v.size()<<endl;
	v.pop_back();
	cout<<"size : "<<v.size()<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;

}