#include <bits/stdc++.h>
using namespace std;
int longest_subArray(vector<int> &arr, int n)
{
    int maxl = 0, presum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (presum == 0) maxl = i + 1;
        else if (mp.find(presum) != mp.end())
        {
            maxl = max(maxl, i - mp[presum]);
        }
        else
        {
            mp[presum] = i;
        }
    }
    return maxl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;
    cout << longest_subArray(arr, n);
    return 0;
}

// prefix sum  + hashmap approach