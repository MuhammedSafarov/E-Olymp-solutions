#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==0)
	cout<<"YES"<<endl;
	else {
	if(n%2==0&&n>=0&&n%3!=0)
	cout<<"YES"<<endl;
	else if(n%3==0&&n<0&&n%2!=0)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
	
	return 0;
}
