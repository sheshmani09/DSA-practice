#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j)
    {
        while(arr[i]<=pivot && i<high) i++;
        while(arr[j]>pivot&& j>low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}
void quick_sort(vector <int> &arr,int low, int high ){
    if(low>=high) return;
    int pIndex = partition(arr,low, high);
    quick_sort(arr, low, pIndex-1);
    quick_sort(arr, pIndex+1, high);
}
int main() {
    int n;
    cout<<"enter number of elements: "<<endl;
    cin>>n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout << "sorted array: " << endl;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}