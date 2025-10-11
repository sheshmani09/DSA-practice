#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E'-i; ch <= 'E'; ch++)
        {
           cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}