#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 50;
    int a = 0;
    int b = 1;
    int c = 0;
    while(c <= n){
        c = a + b;
        if(c > n) break;
        cout<<c<<" ";
        a = b;
        b = c;
    }

    return 0;
}