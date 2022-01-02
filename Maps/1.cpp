#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	map<string,int> m;
	m.insert({"Mango",100});
	m["Banana"]=20;
	string fruit;
	cin>>fruit;
	auto it = m.find(fruit);
	if(it!=m.end()){
		cout<<"price : "<<fruit<< " "<<m[fruit]<<endl;
	}
	else cout<<"NOT FOUND!"<<endl;

	if(m.count(fruit))cout<<'FOUND'<<endl;
	else cout<<'NOT FOUND!'<<endl;

	//Maps contain in sorted order 
	//Maps contain only one key
	//Mulimap contain multiple key
	


}