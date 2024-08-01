#include <cstdio>
#include <cstring>


bool palindron(char* x, int left,int right){
    if(left >= right){
        return true;
    }
    if(x[left]!=x[right]){
        return false;
    }
    return palindron(x,left+1,right-1);
}

int main(){
    char N[101];
    scanf("%s",N);
    int len = strlen(N);
    if (palindron(N,0,len-1)){
        printf("YA\n");
    }else{
        printf("BUKAN\n");
    }

}
