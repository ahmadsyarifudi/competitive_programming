#include <cstdio>
#include <cstring>

void removestring(char* x,const char* y){
    char* pos;
    size_t leny = strlen(y);
    while ((pos = strstr(x, y)) != nullptr) {
        size_t lenyy = strlen(pos + leny);
        memmove(pos, pos + leny, lenyy + 1);  
    }
}
void insertstring(char* x, const char* y, const char* z) {
    char* pos = strstr(x, y);

    if (pos != nullptr) {
        size_t leny = strlen(y);
        size_t lenz = strlen(z);
        size_t lenyy = strlen(pos + leny);
        memmove(pos + leny + lenz, pos + leny, lenyy + 1);
        memcpy(pos + leny, z, lenz);
    }
}
int main(){
    char S1[101],S2[101],S3[101],S4[101];
    scanf("%s",S1);
    scanf("%s",S2);
    scanf("%s",S3);
    scanf("%s",S4);

    removestring(S1,S2);
    insertstring(S1,S3,S4);

    printf("%s\n",S1);
    return 0;
}