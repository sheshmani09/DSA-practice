#include <bits/stdc++.h>
using namespace std;
int fact(int x){
    if(x==0) return 1;
    return x*fact(x-1);
}
int main() {
    int n;
    cin>>n;
   cout<< fact(n);
    return 0;
}