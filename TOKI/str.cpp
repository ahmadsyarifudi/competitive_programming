#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        c = c - 'a' + 'A';
        
        if (c == 'Z') {
            c = 'A'; 
        } else {
            c = c + 1;  
        }
        
        cout << c;
    }
    cout << endl;
    return 0;
}
