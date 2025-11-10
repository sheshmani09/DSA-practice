#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int beg, int mid, int end)
{
    vector<int> temp;
    int left = beg;
    int right = mid + 1;
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
}
void merge_sort(int arr[], int beg, int end)
{
    if (beg >= end)
        return;

    int mid = (beg + end) / 2;
    merge_sort(arr, beg, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, beg, mid, end);
}
int main()
{
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    cout << "sorted array: " << endl;
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}