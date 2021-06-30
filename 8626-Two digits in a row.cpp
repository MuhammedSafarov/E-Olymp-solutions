#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,d,n;
	cin>>n;
	a=n/1000;
	b=n%1000/100;
	c=n%100/10;
	d=n%10;
	if((a==3&&b==7)||(b==3&&c==7)||(c==3&&d==7)) 
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}
