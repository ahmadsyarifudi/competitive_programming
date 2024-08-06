#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int result;
    vector<int> data;
    for(int i =0; i<N ; i++){
        int x;
        cin >> x;
        result += data[i];
    }
    
    for(int i = 1; i<=N ; i++){
        
        cout<< result-data[i] << endl;
    }
    
}