#include <cstdio>

int biner(int x){
    if(x == 1||x == 0){
        return x;
    }else{
        return x % 2 + 10 * biner(x/2);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    int hasil = biner(N);
    printf("%d",hasil);

}