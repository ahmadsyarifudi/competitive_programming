#include <cstdio>

int reverse(int x){
    int temp = x;
    int ret  = 0;

    while (temp > 0){
        ret = (ret*10)+(temp%10);
        temp = temp/10;
    }
    return ret;
}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    a = reverse(a);
    b = reverse(b);
    c = a+b;
    printf("%d\n",reverse(c));
}