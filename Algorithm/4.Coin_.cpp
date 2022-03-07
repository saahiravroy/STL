//money change problem
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
int main(){
	
	int coins[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coins)/sizeof(int);
	int money = 168;

	while(money){
		int x=upper_bound(coins,coins+n,money)-1-coins;
		int m=coins[x];
		cout<<m<<",";
		money-=m;

	}

	return 0;
}
