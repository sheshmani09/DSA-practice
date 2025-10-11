#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-1 ; j++)
        {
            cout<<" ";
        }
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<ch;
            (k<breakpoint)?ch++:ch--;
        }
        cout<<endl;
        
    }
    
    return 0;
}