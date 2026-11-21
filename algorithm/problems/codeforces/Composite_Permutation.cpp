#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n,m,i,ds,j;
    vector<int> p(5);
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m<4) 
        {
            cout<<"-1"<<endl;
            continue;
        }
        p.reserve(m);
        vector<int>::iterator t,t1;
        for(j=1;j<=m;j++)
        {
            p.clear();
            for(i=1;i<=m;i++) p.push_back(i);
            t1=p.begin();
            t=find(p.begin(),p.end(),1);
            ds=j;
            if(ds!=0)
            {
                if(ds/2!=1 && ds%2==0) 
                {
                    swap(p[j-1],*t);
                    break;
                }
                if(ds/3!=1 && ds%3==0) 
                {
                    swap(p[j-1],*t);
                    break;
                }
                if(ds/5!=1 && ds%5==0) 
                {
                    swap(p[j-1],*t);
                    break;
                }
                if(ds/7!=1 && ds%7==0) 
                {
                    swap(p[j-1],*t);
                    break;
                }
            }
        }
        
        for(i=0;i<m;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//说实话这么写我自己都绷不住。本质就是1和4互换