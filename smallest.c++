#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int n = arr.size();
    int min = arr[0];
    int index = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    cout<<min<<" "<<index;

    

    return 0;
}
