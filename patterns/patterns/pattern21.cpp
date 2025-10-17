#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
   cin >> n;
   cout << endl;
   for (int i = 1; i <= n; i++)
   {
    if (i==1 || i==n)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        
    }
    else{
        cout<<"*";
        for(int j=2;j<n;j++){
            cout<<" ";
        }
        cout<<"*";
    }
    cout<<endl;
   }
   
    return 0;
}

//simple way
//    for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             // Print '*' on border, space otherwise
//             if (i == 1 || i == n || j == 1 || j == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }