#include<iostream>
#include<algorithm>
#include<sstream>

using namespace std;

int main()
{
    long long N,i=0;
    cin >> N;
    if(N!=0)
    {
        for(;N%10==0;)
        {
            N=N/10;
        }
    }
    ostringstream ss;
    if(N>=0) 
    {
        ss << N;
    }
    else 
    {
        i=1;
        N=N*(-1);
        ss << N;
    }
    string n=ss.str();
    reverse(n.begin(),n.end());
    if(i==1) cout << "-" << n << endl;
    else    cout << n << endl;
    return 0;
}