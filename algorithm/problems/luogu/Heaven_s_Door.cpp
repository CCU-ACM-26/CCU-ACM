#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m,k,all=0,a,sec=0,j;
    cin>>n>>m>>k;
    map<int,int> gz;
    for(j=0;j<k;j++)
    {
        cin>>a;
        gz[j]=a;
    }
    if (gz.count(0) != 0)
    {
        for(j=0;j<k;j++)
        {
            if((gz[j]-all)%m==0)
            {
                sec+=(gz[j]-all)/m;
                all=gz[j];
                m++;
            }
            else
            {
                sec+=((gz[j]-all)-(gz[j]-all)%m)/m+1;
                all=gz[j]+(m-(gz[j]-all)%m);
            }
        }
        if((n-all)%m==0) sec+=(n-all)/m;
        else sec+=(n-all)/m+1;
    }
    else 
    {
        if(n%m==0) sec=n/m;
        else sec=n/m+1;
    }
    cout<<sec<<endl;
    return 0;
}

/*
    写完这段代码之后，我感觉map知识如飞龙一般的进入到我的大脑
    ，就算是非常多的黑蚊子也不能阻止知识的传输
    所以Arcaea下次联动明日方舟的时候能不能把细节再完善一下
    一头少女.jpg
*/