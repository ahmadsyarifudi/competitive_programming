#include <iostream>

using namespace std;

void binarysearch(int h[],int X){
    int hasil = 0;
    int kiri = 1;
    int kanan = sizeof(h)/(sizeof(h[0]) - 1);

    while((kiri<kanan)&&(hasil = 0)){
        int tengah = (kiri+kanan)/2;
        if(X < h[tengah] ){
            kanan = tengah - 1;
        }else if(X > h[tengah]){
            kiri = tengah + 1;
        }else{
            hasil = tengah;
        }
    }
    if(hasil=0){
        cout << "beri hadiah lain" << endl;

    }else{
        cout << hasil << endl;
    }
}

int main(){
    int N;
    cin >> N;
    int h[101];
    for(int i = 0 ; i < N ; i++){
        cin >> h[i];
    }
    int X;
    cin >> X;
    binarysearch(h,X);
}