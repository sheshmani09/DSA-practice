// return row with max number of 1s in a matrix

#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr,int k){ 
    int low=0, high = arr.size()-1,ans = arr.size();
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }else low=mid+1;
    }
    return ans;
} //or just use the inbuilt fucntion of lowerbound/upperbound
int maxOnesRow(vector<vector<int>>& mat){
    int n = mat.size(), m = mat[0].size();
    int cntmax =0, index =-1;
    for(int i=0;i<n;i++){
        int cnt_ones = m - lowerBound(mat[i],1);
        if(cnt_ones>cntmax){
            cntmax = cnt_ones;
            index =i;
        }
    }
    return index;
}
int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int>> mat(r,vector<int> (c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    cout<< maxOnesRow(mat)<<" has maximum 1s"<<endl;
    return 0;
}


//optimal O(r+c)
// int maxOnesRow(vector<vector<int>>& mat){
//      int n = mat.size(), m = mat[0].size();
//     int row = 0, col = m - 1;
//     int ans = -1;
//     while (row < n && col >= 0) {
//         if (mat[row][col] == 1) {
//             ans = row;       // this row has more 1s
//             col--;           // move left
//         } else {
//             row++;           // move down
//         }
//     }
//     return ans;
// }