#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
bool compare(string s1,string s2){
	if(s1.length()==s2.length()){
		return s1<s2;
	}
	return s1.length()>s2.length();
}
int main(){
	
	string p;getline(cin,p);
	cout<<p<<endl;
	int n;cin>>n;
	cin.get();
	string s[100];
	for(int i=0;i<n;i++)getline(cin,s[i]);
	sort(s,s+n);
	for(int i=0;i<n;i++)cout<<s[i]<<endl;
	sort(s,s+n,compare);
	cout<<"ON BASIS OF LENGTH"<<endl;
	for(int i=0;i<n;i++)cout<<s[i]<<endl;
}