#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n%2==0&&n>0)||(n%2!=0&&n<0))
	cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	
	
	return 0;
}
