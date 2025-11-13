#include <bits/stdc++.h>
using namespace std;
int largest_element(vector <int> &arr,int n){
    int key = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>key) key = arr[i];
    }
    return key;
}
int main() {
    int n;
    cin>>n;
    vector <int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"largest element: ";
    cout<<largest_element(arr,n);

    return 0;
}
//or we can just use max_element fucntion of stl
