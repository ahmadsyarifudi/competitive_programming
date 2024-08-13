#include <iostream>

using namespace std;

int main(){
    int n,p,v,t;
    cin >> n;
    int result = 0;
    while(n--){
        cin >> p >> v >> t;
        if(p + v + t >= 2){
            result += 1;
        }
    }
    cout << result << endl;
    
    return 0;
}