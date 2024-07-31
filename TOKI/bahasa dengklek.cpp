#include <cstdio>
#include <cstring>

char S[101];
int main(){
    scanf("%s",S);
    int len = strlen(S);
    for(int i = 0 ; i < len;i++){
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] -= ('a' - 'A');
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] += ('a' - 'A');
        }
    }
    printf("%s",S);
}