#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,max,a[3];
    cin>>t;
    for(i=0;i<t;i++)
    {
        max=0;
        cin>>n;
        for(j=0;j<3;j++)
        {
            cin>>a[j];
            if(a[j]<n && n-a[j]>max) max=n-a[j];
        }
        cout<<max<<endl;
    }
    return 0;
}