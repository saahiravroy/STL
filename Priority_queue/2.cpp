#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int64_t int
class person{
public:
	int age;
	string name;
	person(string name,int age){
		this->name=name;
		this->age=age;
	}
};
class personcompare{
public:
	bool operator()(person A,person B){
		return A.age>B.age;
	}
};
int main(){

	priority_queue<int,vector<int> , greater<int>> pq;
	//Above is min pq
	//int is data type of pq
	pq.pop() //removes the min element
	pq.top() //gives the min element
    int n;cin>>n;
	priority_queue<person,vector<person>,personcompare> pq;
	for(int i=0;i<n;i++){
		strig name;
		int age;
		cin>>name>>age;
		person p(name,age);
		priority_queue.push(p);
	}
}