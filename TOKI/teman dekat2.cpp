#include <iostream>
#include <cmath>    
#include <cfloat>   

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int X[N], Y[N];
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    double min_terdekat = DBL_MAX;
    double max_terdekat = -DBL_MAX;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) { 
            double distance = pow(abs(X[j] - X[i]), D) + pow(abs(Y[j] - Y[i]), D);
            if (distance < min_terdekat) {
                min_terdekat = distance;
            }
            if (distance > max_terdekat) {
                max_terdekat = distance;
            }
        }
    }

    cout << static_cast<int>(min_terdekat) << " " << static_cast<int>(max_terdekat) << endl;

    return 0;
}
