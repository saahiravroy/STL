#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){

	queue<int> q;
	for(int i=0;i<=5;i++)q.push(i);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}

	return 0;
}