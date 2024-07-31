#include <cstdio>

int banyak(int x) {
  if (x < 0) {
    return 0;
  } else {
    return x + banyak(x - 2);
  }
}

int main(){
    int N;
    scanf("%d",&N);
    int hasil = banyak(N);
    printf("%d",&hasil);
}