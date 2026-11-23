#include<iostream>
using namespace std;

int main()
{
    int t,n,k,i,x=0,a[2],b[2];
    bool p1,p2,p3;
    cin>>t;
    while(t--)
    {
        a[0]=a[1]=b[0]=b[1]=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if((x & 1)==1) a[1]++;
            else a[0]++;//x为奇数放a1，偶数放a0
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            if((x & 1)==1) b[1]++;
            else b[0]++;//x为奇数放b1，偶数放b0
        }
        if((k & 1)==1)//k为奇数比奇数
        {
            if(a[1]<=b[1]) cout<<"YES";
            else cout<<"NO";
        }
        else//k为偶数比偶数
        {
            if(a[0]<=b[0]) cout<<"YES";
            else cout<<"NO";
        }
        
        cout<<endl;
    }
    return 0;
}