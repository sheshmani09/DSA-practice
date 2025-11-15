//intersection  of sorted arrays
#include <bits/stdc++.h>
using namespace std;
void arr_intersection(vector<int> &a, vector<int> &b){
    int s1= a.size();
    int s2 =b.size();
    int i=0,j=0;
    vector <int> c;
    while(i<s1 && j<s2){
        if(a[i]==b[j]) {
            c.push_back(a[i]);
            i++;j++;
        }else if(a[i]>b[j]){
            j++;
        }else{
            i++;
        }
    }

    cout<<"intersection array:"<<endl;
    for(int x:c) cout<<x<<" ";
    cout<<endl;
}
int main() {
       int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1),arr2(n2);
    cout<<"enter array 1"<<endl;
    for(int &n:arr1) cin>>n;
    cout<<"enter array 2"<<endl;
    for(int &n:arr2) cin>>n;

    arr_intersection(arr1,arr2);
    return 0;
}