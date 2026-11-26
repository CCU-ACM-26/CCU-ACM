#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct Students{
    string name;
    int yr;
    int mon;
    int dt;
    int num;
};


int main()
{
    int n,i,yr,mon,dt;
    string name;
    cin>>n;
    vector<Students> stu(n);
    for(i=0;i<n;++i)
    {
        cin>>name>>yr>>mon>>dt;
        stu[i]={name,yr,mon,dt,i+1};
    }

    sort(stu.begin(),stu.end(),[](const Students& a, const Students& b){
        if(a.yr!=b.yr)
            return a.yr<b.yr;
        if(a.mon!=b.mon)
            return a.mon<b.mon;
        if(a.dt!=b.dt)
            return a.dt<b.dt;
        return a.num>b.num;
    });

    for(i=0;i<n;++i)
        cout<<stu[i].name<<endl;
    return 0;
}