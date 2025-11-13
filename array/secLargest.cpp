#include <bits/stdc++.h>
using namespace std;
int second_max(vector <int> &arr, int n){
    int max = arr[0], smax = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>max) {
            smax = max;
            max= arr[i];
        }else if(smax< arr[i]&& arr[i]!=max){
            smax =arr[i];
        }
    }
    return smax;
}
int main() {
    int n;
    cin>>n;
    vector <int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"second largest element: ";
    cout<<second_max(arr,n);
    return 0;
}