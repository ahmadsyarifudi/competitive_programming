#include <iostream>

using namespace std;

int main(){
    int N,k;
    cin >> N >> k;
    int hasil = 1;
    for(int i = 0 ; i < N ;i++){
        hasil = (hasil*i) % k;
    }
    cout << hasil << endl;
    return 0;
}