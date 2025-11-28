//pairs where left element is greater than right element return the count of those pairs

#include <bits/stdc++.h>
using namespace std;
int merge(vector<int>&arr, int beg, int mid, int end)
{
    vector<int> temp;
    int left = beg;
    int right = mid + 1;
    int cnt=0;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            cnt+= mid-left+1;
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = beg; i <= end; i++)
    {
        arr[i] = temp[i - beg];
    }
    return cnt;
}
int merge_sort(vector<int> &arr, int beg, int end)
{
    int cnt=0;
    if (beg >= end)
        return cnt;

    int mid = (beg + end) / 2;
    cnt += merge_sort(arr, beg, mid);
    cnt += merge_sort(arr, mid + 1, end);
    cnt += merge(arr, beg, mid, end);
    return cnt;
}
int count_inversion(vector<int> &arr, int n){
    return merge_sort(arr,0,n-1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    cout<<count_inversion(arr,n);
    return 0;
}


//brute force
// int count_inversion(vector<int> &arr, int n){
//     int cnt=0;
//     for(int i =0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]) cnt++;
//         }
//     }
//     return cnt;
// }