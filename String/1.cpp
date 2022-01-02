#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	string s1("hello");
	cout<<s1<<endl;
	string s2(s1);
	cout<<s2<<endl;
	s1="Apple";
	s2="Mango";
	cout<<s1.compare(s2)<<endl; //returns a int ==0 >0 or <0
	for(int i=0;i<s1.length();i++)cout<<s1[i]<<" ";
	cout<<endl;
	for(auto it=s1.begin();it!=s1.end();it++)cout<<(*it)<<" ";
	cout<<endl;
	for(char c : s1)cout<<c<<' ';
	cout<<endl;

}