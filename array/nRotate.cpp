#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int n, int k)
{
    k = k % n;
    reverse(arr.begin(), arr.begin() + k); 
    reverse(arr.begin() + k, arr.end());   
    reverse(arr.begin(), arr.end());
    cout << "rotated array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    rotate(arr, n, k);
    return 0;
}

// brute force ********** vector<int> temp(k);
//  for (int i = 0; i < k; i++)
//  {
//      temp[i] = arr[i]; //temp.push_back(arr[i])
//  }
//  for (int i = k; i < n; i++)
//  {
//      arr[i - k] = arr[i];
//  }
//  for (int i = 0; i < k; i++)
//  {
//      arr[n-k+i]=temp[i];
//  }