#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n ; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int arr[], int n){
    if(n > 1){
        const int tamArrIzq = n/2;
        const int tamArrDer = n - n/2;

        int arrIzq[tamArrIzq];
        int arrDer[tamArrDer];

        for (int i  = 0 ; i < tamArrIzq; ++i){
            arrIzq[i] = arr[i];
        }

        for (int i  = 0 ; i < tamArrDer; ++i){
            arrDer[i] = arr[i + tamArrIzq];
        }

        mergeSort(arrIzq, tamArrIzq);
        mergeSort(arrDer, tamArrDer);

        int k = 0;
        int i = 0;
        int j = 0;

        //swapping values
        while(i < tamArrIzq && j < tamArrDer){
            if(arrIzq[i] < arrDer[j]){
                arr[k] = arrIzq[i];
                i++;
                k++;
            }else{
                arr[k] = arrDer[j];
                j++;
                k++;
            }
        }
        while(i < tamArrIzq){
            arr[k] = arrIzq[i];
            i++;
            k++;
        }

        while(j < tamArrDer){
            arr[k] = arrDer[j];
            j++;
            k++;
        }
    }
}


int main(){

    int arr[] = {6,8,23,0,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Arreglo original: " << endl;
    printArray(arr, n);

    cout << "Ordenando con mergeSort ..." << endl;
    mergeSort(arr, n);
    printArray(arr, n);


    return 0;
}
