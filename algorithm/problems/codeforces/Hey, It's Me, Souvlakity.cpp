#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int a,n,max,min,kg,score;
    cin>>a;
    max=min=0;
    for(int i=0;i<a;i++)
    {
        kg=1;
        cin>>n;
        string s(n,' ');
        cin>>s;
        vector<string> S;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                S.push_back("1");
            }
        }
        if(S.size()==1)
        {
            max=min=1;
        }
        else if(S.size()==2)
        {
            max=1;
            min=0;
        }
        else
        {
            for(int j=1;j<n+1;j++)
            {   
               if(s[j-1]=='1')
               {
                    if(kg==1)
                    {
                    min=j;
                    max=j;
                    kg=0;
                }
                else
                {
                    if(j>max)
                    {
                        max=j;
                    }
                }
                }
            }
        }
        score=max-min;
        cout<<score<<endl;
    }
    return 0;
}