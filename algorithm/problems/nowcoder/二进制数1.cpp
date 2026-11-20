#include <iostream>
using namespace std;

int main() {
    long long a, b, c=0;
    while (cin >> a >> b) { // 注意 while 处理多个 case
        cout << a + b << endl;
    }
    if(a==0) c=0;
    while(a>0)
    {
        if((a & 1)==1) c++;
        a>>=1;
    }
    cout<<c<<endl;
    return 0;
}