#include <stdio.h>

int pangkat(int a,int b){
    int hasil = 1;
    for(int i = 0; i < b; i++){
        hasil *= a;
    }
    return hasil;
}

int main(){
    pangkat(2,3);
}