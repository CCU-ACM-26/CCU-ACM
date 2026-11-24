#include<iostream>
using namespace std;
int main()
{
    int t,x0,y0,R;
    cin>>t;
    while(t--)
    {
        cin>>x0>>y0>>R;
        cout<<x0-R<<" "<<y0<<endl;
    }
    return 0;
}