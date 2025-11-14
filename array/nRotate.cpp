#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int> &arr, int n, int k)
{
    k =k%n;
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[n-k+i]=temp[i];
    }
    

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