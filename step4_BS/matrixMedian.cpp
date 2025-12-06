//median of a row wise sorted matrix n x m
#include <bits/stdc++.h>
using namespace std;
int findMedian(vector<vector<int>> & mat){
    int rows = mat.size(), cols = mat[0].size();
    int low = INT_MAX, high = INT_MIN;
    for(int i=0;i<rows;i++){
        low = min(low,mat[i][0]);
        high = max(high, mat[i][cols-1]);
    }
     int required = (rows*cols+1)/2;
    while (low<=high)
    {
        int mid = (low+high)/2;
        int cnt = 0;  
        for(int i=0;i<rows;i++){
            cnt += upper_bound(mat[i].begin(),mat[i].end(), mid)-mat[i].begin(); //as the ub returns iterator
        }
        if(cnt < required) low = mid+1;
        else high = mid-1; 
    }
    return low;
    
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
    cout<<findMedian(mat);
    return 0;
}