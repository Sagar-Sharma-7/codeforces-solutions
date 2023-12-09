#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string x = "";
    vector<int> nums;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            x+=s[i];
        }else{
            nums.push_back(stoi(x));
            x="";
        }
    }
    nums.push_back(stoi(x));
    x="";
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(i != nums.size() - 1){
            cout << nums[i] << "+";
        }else{
            cout << nums[i] << endl;
        }
    }
    return 0;
}