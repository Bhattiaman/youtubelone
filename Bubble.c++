
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    int index = 0;
    int arr[n] = {1,6,3,4,5};
    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                index++;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<index;
    return 0;
}