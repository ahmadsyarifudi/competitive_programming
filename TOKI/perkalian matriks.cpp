#include <iostream>

using namespace std;


int main(){
    int N,M,P;
    cin >> N >> M >> P;

    int A[N][M];
    int B[M][P];
    int C[N][P];
    
    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < M; j++ ){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0 ; j < P; j++ ){
            cin >> B[i][j];
        }
    }
    
    for(int i = 0; i < N ; i++){
        for(int j = 0; j < P; j++){
            int sum = 0;
            for(int k = 0; k < M; k++){
                sum += A[i][k] * B[k][j];   
            }
            C[i][j] = sum; 
        }     
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

