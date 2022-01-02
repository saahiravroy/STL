#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	set<int> s;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		s.inseert(x);
	}

	s.erase(10);
	auto it = s.find(11);
	s.erase(it);
	
}