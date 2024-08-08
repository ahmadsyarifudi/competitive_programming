#include <iostream>
#include <vector>

using namespace std;

void gambarPegunungan(int N, vector<string>& hasil) {
    if (N == 0) return;
    gambarPegunungan(N - 1, hasil);
    string bintang(N, '*');
    hasil.push_back(bintang);   
    gambarPegunungan(N - 1, hasil);
}

int main() {
    int N;
    cin >> N;  
    vector<string> hasil;  
    gambarPegunungan(N, hasil);
    
    for (const string& baris : hasil) {
        cout << baris << endl;
    }
    
    return 0;
}
