#include <bits/stdc++.h>
using namespace std;
int sum(int x){
    if(x==0) return 0;
    return x+sum(x-1);
}
int main() {
    int n;
    cin>>n;
   cout<< sum(n);
    return 0;
}