#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,a,b,c,d;
	cin>>n;
 	a=n/1000;
 	b=n%1000/100;
 	c=n%100/10;
 	d=n%10;
 	
 	if(a%2==0&&c%2==0&&b%2==0&&d%2==0)
 	cout<<"NO"<<endl;
 	else cout<<"YES"<<endl;
	
	
	return 0;
}
