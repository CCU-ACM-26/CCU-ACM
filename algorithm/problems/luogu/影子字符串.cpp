#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string zf;
    unordered_set<string> re;
    while(zf!="0")
    {
        cin>>zf;
        auto ck=re.find(zf);
        if(re.empty()==true)
        {
            re.insert(zf);
            cout<<zf;
        }
        else if(ck==re.end() && zf!="0")
        {
            re.insert(zf);
            cout<<zf;
        }
    }
    cout<<endl;
    return 0;
}