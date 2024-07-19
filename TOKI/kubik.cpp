#include <stdio.h>

int side(int s){
    return s*s*s;
}

int main(){
    int volume=side(4);
    int selisih = volume - side(3);
    printf("%d\n",side(5));
    printf("%d",selisih);
}

