#include <cstdio>

int a;

void tugas1(int x) {
    a = x;
}

void tugas2(int x) {
  int a = x;
}

int main() {
    a = 2;
    tugas1(3);
    tugas2(4);
    printf("%d", a);
}