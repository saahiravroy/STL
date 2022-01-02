#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){

	list<int> l1{1,2,3};
	for(auto l:l1)cout<<l<<" ";
	cout<<endl;
	l1.pop_front();
	for(auto l:l1)cout<<l<<" ";
	cout<<endl;
	l1.sort();
	l1.reverse();
	
}