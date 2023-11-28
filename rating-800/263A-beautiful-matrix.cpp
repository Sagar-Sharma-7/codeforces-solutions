#include <bits/stdc++.h>
using namespace std;

int main(){
    int r;
    int c;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <=5; j++){
            int x;
            cin >> x;
            if(x == 1){
                c = j;
                r = i;
                break;
            }
        }
    }
    cout << abs(3-r) + abs(3-c);
    return 0;
}