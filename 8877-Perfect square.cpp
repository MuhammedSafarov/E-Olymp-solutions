#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n,m;
	cin>>n;
	m=sqrt(n);
	if(m*m==n)
	cout<<m<<endl;
	else cout<<"No"<<endl;
	
	return 0;
}
