#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(3<=n&&n<=5)
	cout<<"Spring"<<endl;
	else if(6<=n&&n<=8)
	cout<<"Summer"<<endl;
	else if(9<=n&&n<=11)
	cout<<"Autumn"<<endl;
	else cout<<"Winter"<<endl;
	return 0;
}
