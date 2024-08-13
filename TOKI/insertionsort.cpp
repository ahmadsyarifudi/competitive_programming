#include <iostream>

using namespace std;

void insertionSort(int A[], int N){
    for(int i = 0 ; i < N ; i++){
        int j = i;
        cout << "ini i" << i << endl;
        while(j > 0 && A[j] < A[j-1]){
            int temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            cout << "ini j" << j << endl; 
            j--;
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

    insertionSort(arr, N);

    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
