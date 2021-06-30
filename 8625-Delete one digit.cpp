#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,n;
	cin>>n;
	a=n/100;
	b=n%100/10;
	c=n%10;
	if(a==c&&b>=c&&b>=a)
	cout<<b<<a<<endl;
	else {
	if(c<=b&&c<=a)
	cout<<a<<b<<endl;
	else if(a<=b&&a<=c)
	cout<<b<<c<<endl;
	else
	cout<<a<<c<<endl;}
	
	return 0;
}
