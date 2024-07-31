#include <cstdio>
#include <cstring>

char S[101];
bool toUpper = false;
int main(){
    int Index = 0;
    scanf("%s",S);
    int len = strlen(S);
    for(int i = 0 ; i < len;i++){
        if (S[i] == '_') {
            toUpper = true;
        } else{
            if(toUpper){
                S[Index++] = S[i] - ('a'-'A') ;  
                toUpper = false; 
            }else{
                S[Index++] = S[i];
            }
        }
    }
    S[Index]='\0';
    printf("%s",S);
}