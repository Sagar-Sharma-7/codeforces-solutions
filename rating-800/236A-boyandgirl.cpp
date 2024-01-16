#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    map<char, int> freq;
    for(int i = 0; i < n; i++){
        freq[s[i]]++;
    }
    int result = freq.size();
    if(result%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }

    return 0;
}