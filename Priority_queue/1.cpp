#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	priority_queue<int> pq; //max heap 
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		pq.push(no);
	}

	while(!pq.empty()){
		cout<<pq.top()<<" "; //gives the max element
		pq.pop(); //removes the max element
	}

}