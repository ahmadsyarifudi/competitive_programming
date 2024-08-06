#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int best_r = 1;
    long long best_c = N;
    long long min_diff = N - 1; 

    for (int r = 1; r <= sqrt(N); ++r) {
        if (N % r == 0) {
            int c = N / r;
            if (r <= c) {
                int diff = c - r;
                if (diff < min_diff) {
                    best_r = r;
                    best_c = c;
                    min_diff = diff;
                }
            }
        }
    }

    cout << best_r << ' ' << best_c << endl;

    return 0;
}