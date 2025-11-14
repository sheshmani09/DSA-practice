#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr, int n)
{   
    int j= 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    

    cout << "new array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZeroes(arr, n);
    return 0;
}



//  ******brute force**********
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }
//     int k = temp.size();
//     for (int i = 0; i < k; i++)
//     {
//         arr[i] = temp[i];
//     }
//     for (int i = k; i < n; i++)
//     {
//         arr[i] = 0;
//     }