#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = arr.size();
    int largest = INT_MIN;
    int second_Largest = INT_MIN;
    for(int i = 0; i < n; i++){
        
        if(arr[i] > largest){
            second_Largest= largest;
            largest = arr[i];
        }else{
            if(arr[i]>second_Largest && largest > arr[i]){
                second_Largest = arr[i];
            }
        }

    }
    cout<<second_Largest;
    return 0;
}