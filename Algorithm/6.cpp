#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	pair<int,int> p;
	p.first=10;
	p.second=20;
	cout<<p.first<<" "<<p.second<<endl;

	pair<int,int> p2(p);
	cout<<p2.first<<" "<<p2.second<<endl;

	pair<int,int> p3={10,20};
	cout<<p3.first<<" "<<p3.second<<endl;

	pair<int,int> p4=make_pair(10,20);
	cout<<p4.first<<' '<<p4.second<<endl;

	pair<int,int> p5(10,20);
	cout<<p5.first<<" "<<p5.second<<endl;

}