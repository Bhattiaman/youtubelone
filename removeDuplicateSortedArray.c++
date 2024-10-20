#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // remove duplicate element in sorted array
    std::vector<int> arr = {1,1,2,2,3,3,4,5,6,6,7};
    int n = arr.size();
    cout<<n<<endl;
    int count = 0;
    for(int i = 0; i < n; i++){   
        if(i < n-1 && arr[i] == arr[i+1]){
            //continue
            continue;
        }else{
            arr[count] = arr[i];
            count++;
        }
    }
  
    for(int i = 0; i <count; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
    
    return 0;
}