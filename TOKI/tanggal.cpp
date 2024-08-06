#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while (betina < jantan) {
        if(betina<= 10*jantan){
            tanggal+=betina;
            betina++;
        }
        jantan++;
    }

    cout << tanggal << endl;
}
 