#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        int s=(i%2==0)?0:1;
        for (int j = 0; j < i; j++)
        {
            cout<< s;
            s= 1-s;
        }
        cout<<endl;

    }
    
    return 0;
}