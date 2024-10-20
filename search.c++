// search element in arry linear or binary 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int index = 0;
    int arr[n] = {1,2,3,4,5};
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 3){
    //         index = i;
    //     }
    // }
    
    // cout<<index;
    int target = 2;
    int s = 0, e = n-1;
    // Binary search loop
    while(s <= e) {
        int mid = s + (e - s) / 2;  

        if(arr[mid] > target) {
            e = mid - 1;  
        } else if(arr[mid] < target) {
            s = mid + 1; 
        } else {
            index = mid; 
            break; 
        }
    }
    cout<<index;
    
    return 0;
}