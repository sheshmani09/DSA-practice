#include <bits/stdc++.h>
using namespace std;
int linear_search (vector <int> &arr, int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return  i;
        }
    }
    return -1;
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
    cout << "enter key to search: " << endl;
    cin >> k;

    int i = linear_search(arr,n,k);
    if(i>=0) cout<<"found at location "<<i+1;
    else cout<<"not found";


    return 0;
}