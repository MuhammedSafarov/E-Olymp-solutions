#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long int n,a;
	cin>>n;
	long long h=1;
	while(n!=0){

	a=n%10;
	n=n/10;
	if(a!=0)
	h=h*a;
	}
	cout<<h<<endl;
	
	return 0;
}
