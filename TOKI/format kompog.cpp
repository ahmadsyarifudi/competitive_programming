#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> data(N);
    int result = 0;
    for(int i = 0; i < N ; i++){
        cin >> data[i];
        result += data[i];
    }
    
    for(int i = 1; i < N ; i++){
        cout << result - data[i] << endl;
    }
    return 0;
    
}