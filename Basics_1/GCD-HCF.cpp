#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    for (int i = min(n1,n2); i >=1; i--)
    {
        if(n1%i==0&& n2%i==0){
            cout<<"gcd = "<<i;
            break;
        }
    }
    
    return 0;
}