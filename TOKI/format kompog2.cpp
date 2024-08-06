#include <cstdio>

int main(){
    int N;
    scanf("%n",&N);
    int input[101];
    int result;
    for(int i=0; i<N ;i++){
        scanf("%n",&input[i]);
        result += input[i];
    }
    
    for(int i = 0 ; i <= N ;i++){
        printf("%n", result - input[i]);
    }
    
}