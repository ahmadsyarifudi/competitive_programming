#include <iostream>
#include <string>

using namespace std;


int main(){
    string S,T;
    cin >> S >> T;
    size_t index;
    while((index = S.find(T))!= string ::npos){
        S.erase(index,T.length());
    }
    cout<< S << endl;
}