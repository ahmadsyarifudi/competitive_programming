#include <cstdio>
#include <cstdlib> 

int f(int A, int B, int K, int x) {
    if (K == 0) {
        return x;
    }
    int result = abs(A * f(A, B, K - 1, x) + B);
    return result;
}

int main() {
    int A, B, K, x;
    scanf("%d %d %d %d", &A, &B, &K, &x);
    int result = f(A, B, K, x);
    printf("%d\n", result);
    
    return 0;
}
