#include <iostream>

using namespace std;

void mergesort(int arr[],int l,int r){
    if(l == r){
        return ;
    }else{
        int c = (l + r)/2;
        mergesort(arr, l, c);
        mergesort(arr, c + 1,r);
    }
}