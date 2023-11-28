#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    if(m == 1 && n == 1){
        cout << 0;
    }else{
        cout << floor((m*n)/2);
    }
    return 0;
}