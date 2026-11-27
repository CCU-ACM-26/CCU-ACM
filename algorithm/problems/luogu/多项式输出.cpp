#include<iostream>
#include<queue>
using namespace std;

int av(int n){
    if(n<0) return -n;
    else return n;
}

int main()
{
    int n,i,s,ck=1;
    cin>>n;
    queue<int> a;
    for(i=0;i<=n;i++)
    {
        cin>>s;
        a.push(s);
    }
    for(i=n;!a.empty();i--)
    {
        if(a.front()!=0)
        {
            if(ck==0)
            {
                cout<<(a.front()>=0? "+":"-");
            }
            else
            {
                if(a.front()<0) cout<<"-";
                ck=0;
            }
        
            if(i==0) cout<<av(a.front());
            else if(av(a.front())!=1) cout<<av(a.front());

            if(i!=0)
                cout<<(i==1? "x":"x^");
            if(i>1) cout<<i;
        }
        a.pop();
    }
    return 0;
}