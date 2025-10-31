#include <bits/stdc++.h>
using namespace std;

int countDigit(int x){
    int c=0;
    while(x>0){
        x/=10;
        c++;
    }
    return c;
}
int main() {
    int num,sum=0;
    cin>>num;
    int n=num;
    int p = countDigit(n);
    while(n>0){
        int rem = n%10;
        sum+= pow(rem,p);
        n/=10;
    }
    if(sum==num) cout<<"true";
    else cout<<"false";
    return 0;
}