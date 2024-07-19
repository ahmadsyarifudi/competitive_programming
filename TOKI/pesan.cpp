#include <cstdio>
#include <string>
using namespace std;

char buff[1001];
string pesan;

void bacaPesan(){
    printf("masukkan pesan: \n");
    scanf("%s",buff);
    pesan = buff;
}

int main(){
    bacaPesan();
    printf("pesan= %s\n",pesan.c_str());

    bacaPesan();
    printf("pesan2= %s\n",pesan.c_str());
}