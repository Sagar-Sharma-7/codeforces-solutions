#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int result = 0;
    for(int i = 0; i <t; i++){
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        int sum = n1 + n2 + n3;
        if(sum >= 2){
            result += 1;
        }
    }
 
    cout << result << endl;
    return 0;
}