#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i <t; i++){
        string s;
        cin >> s;
        int n = s.length();
        string result = "";
        if(n > 10){
            result += s[0];
            result += to_string(n - 2);
            result += s[n-1];
 
        }else{
            result = s;
        }
        cout << result << endl;
        }
    return 0;
}