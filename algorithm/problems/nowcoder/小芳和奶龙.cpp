#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,xf,nl,i;
    cin >> n;
    xf=nl=0;
    string a,b;
    cin >> a >> b;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0') xf+=1;
        else nl+=1;
        if(b[i]=='0') xf+=1;
        else nl+=1;
    }
    cout << xf << " " << nl << endl;
    return 0;
} 