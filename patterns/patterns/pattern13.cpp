#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<endl;
    int s=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<s<<" ";
            s++;
        }
        cout<<endl;
    }
    
    return 0;
}