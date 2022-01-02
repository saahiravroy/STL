#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	char s[100]="Today is a rainy day";
	char *ptr=strtok(s," ");
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}
	
}