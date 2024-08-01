#include <cstdio>


int fib(int x){
    if(x == 1|| x == 0){
        return x;
    }else{
        return fib(x-1)+fib(x-2);
    }

}
int main(){
    int N;
    scanf("%d",&N);
    int hasil = fib(N); 
    printf("%d",hasil);
}