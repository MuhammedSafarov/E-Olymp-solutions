#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if ((x == 0) or (y == 0))
        cout<<"0"<<endl;
    if ((x > 0) and (y > 0)) 
        cout<<"1"<<endl;
    if ((x < 0) and (y > 0)) 
        cout<<"2"<<endl;
    if ((x < 0) and (y < 0)) 
        cout<<"3"<<endl;
    if ((x > 0) and (y < 0))
        cout<<"4"<<endl;
    return 0;
}
