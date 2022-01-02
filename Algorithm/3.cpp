#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
bool compare(int a,int b){

	return a<b; // will give the array sorted in dec. order
}
int main(){
	
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	sort(arr,arr+n,compare);


}