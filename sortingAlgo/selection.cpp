#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
                mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout<<"sorted array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter number of elements: ";
    cin >> n;
    int arr[n];
    cout<<"enter elements: "<<endl;
    for (int i = 0; i < n; i++)
    { 
        cin >> arr[i];
    }

    selection_sort(arr, n);

    return 0;
}

//notes
// for i = 0 to n-2
//     minIndex = i
//     for j = i+1 to n-1
//         if arr[j] < arr[minIndex] → minIndex = j
//     swap(arr[i], arr[minIndex])