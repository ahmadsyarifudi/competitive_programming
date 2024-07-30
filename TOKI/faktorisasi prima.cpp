#include <cstdio>

void primefactor(int x){
    int factors[100];  
    int counts[100];
    int num_factors = 0;

    while(x % 2 == 0){
        if(num_factors == 0 || factors[num_factors - 1] != 2){
            factors[num_factors] = 2;
            counts[num_factors] = 1;
            num_factors++;
        } else {
            counts[num_factors - 1]++;
        }
        x = x / 2;
    }

   
    for(int i = 3; i * i <= x; i += 2){
        while(x % i == 0){
            if(num_factors == 0 || factors[num_factors - 1] != i){
                factors[num_factors] = i;
                counts[num_factors] = 1;
                num_factors++;
            } else {
                counts[num_factors - 1]++;
            }
            x = x / i;
        }
    }

    if(x > 2){
        factors[num_factors] = x;
        counts[num_factors] = 1;
        num_factors++;
    }

    for (int i = 0; i < num_factors; i++) {
        if (i > 0) {
            printf(" x ");
        }
        if (counts[i] > 1) {
            printf("%d^%d", factors[i], counts[i]);
        } else {
            printf("%d", factors[i]);
        }
    }
    printf("\n");
}

int main(){
    int N;
    scanf("%d", &N);
    primefactor(N);
    return 0;
}
