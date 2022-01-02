#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){

	stack<int> s;
	for(int i=0;i<=5;i++)s.push(i);
	while(!s.empty()){

		cout<<s.top()<<" ,";
		s.pop();
	}
}