#include <bits/stdc++.h>
using namespace std;

bool canPlace(vector<int>& stalls, int cows , int pos){
    int cnt=1, lastPos = stalls[0];
    for(int i=1;i< stalls.size();i++){
        if(stalls[i]-lastPos >=pos){
            cnt++;
            lastPos = stalls[i];
        }
        if(cnt==cows) return true;
    }
    return false;
}

int aggresiveCows(vector<int>& stalls, int cows){
    int n= stalls.size();
    sort(stalls.begin(),stalls.end());
    int low =1, high = stalls[n-1]-stalls[0];
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(canPlace(stalls,cows,mid)){
            low = mid+1;
        }else high = mid-1;
    }
    return high;
    
}
int main() {
    int n,cows;
    cin>>n>>cows;
    vector<int> stalls(n);
    for(int &x : stalls) cin>>x;
    cout<<"min distance "<<aggresiveCows(stalls,cows);
    return 0;
}