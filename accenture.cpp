#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int smallLargeSum(int *arr,int n){
    if(n<=3) return 0;
    
   
    
    vector<int>odd,even;
    for(int i=0;i<n;i++){
        if(i%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    return even[n-2]+odd[n-2];
}


int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"start entering the numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"output is : "<<endl;
    cout<<smallLargeSum(arr,n);
    
    return 0;
}
