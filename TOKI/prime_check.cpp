#include <stdio.h>
#include <stdbool.h>

bool prima(int x){
    if( x < 2 ){
        return false;
    } 
    for(int i = 2; i*i <= x;i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    //prima(2);
    printf("%s", prima(2) ? "true" : "false");
}