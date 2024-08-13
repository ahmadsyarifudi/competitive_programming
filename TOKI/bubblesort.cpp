#include <iostream>

using namespace std;

void bubblesort(int h[],int N){
    for(int i = 0;i < N; i++){
        for(int j = 0 ; j < N - i - 1;j++){
            if(h[j]>h[j+1]){
                int temp = h[j];
                h[j] = h[j+1];
                h[j+1] = temp;
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    int arr[101];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    bubblesort(arr,N);
    
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0 ;
}
