#include <stdio.h>
int y;
void gambar(int x){
    for(int i= 0; i < x;i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    gambar(5);
}