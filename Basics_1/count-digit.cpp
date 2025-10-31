#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    if(n==0){
        cout<<"digit = 1";
    }else{
        while(n>0){
            n=n/10;
            c++;
        }
        cout<<"digits = "<<c;
    }
    return 0;
}


//one liner version
//int count = (int)(log10(n)+1);
//cout<<count;