#include <bits/stdc++.h>
using namespace std;
void arr_union( vector<int> &arr1, vector<int> &arr2){
  vector<int> arr3;
  int s1 = arr1.size();
  int s2 = arr2.size();
  int i=0,j=0;
  while(i<s1 && j<s2){
    if(arr1[i]<=arr2[j] ){
        if(arr3.size()==0||arr3.back()!= arr1[i]){
            arr3.push_back(arr1[i]);     
        }i++;
    }else{
         if(arr3.size()==0||arr3.back()!= arr2[j]){
            arr3.push_back(arr2[j]);    
        }
        j++;
    }
  }
  while (i<s1)
  {
     if(arr3.size()==0||arr3.back()!= arr1[i]){
            arr3.push_back(arr1[i]);     
        }i++;
  }
  while (j<s2)
  {
      if(arr3.size()==0||arr3.back()!= arr2[j]){
            arr3.push_back(arr2[j]);    
        }
        j++;
  }
  
  cout<<"new array: "<<endl;
  for (int k = 0; k < arr3.size(); k++)
  {
        cout<<arr3[k]<<" ";
  }
  
}
int main() {
    int n1,n2;
    cin>>n1>>n2;
    vector<int> arr1(n1),arr2(n2);
    cout<<"enter array 1"<<endl;
    for(int &n:arr1) cin>>n;
    cout<<"enter array 2"<<endl;
    for(int &n:arr2) cin>>n;

    arr_union(arr1,arr2);
    return 0;
}