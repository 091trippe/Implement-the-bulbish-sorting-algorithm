#include <iostream>
#include <cstdlib>  

using namespace std;


// Тут проблема в тому що чомусь не считує кирилицю але код робочий
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand(time(nullptr)); 

    int n;
    cout << "Введіть розмір масиву: "; 
    cin >> n;

    if (n <= 0) {
        cout << "Розмір масиву має бути більше нуля!" << endl;
        return 1;
    }

    int* arr = new int[n]; 

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Згенерований масив: ";
    printArray(arr, n);

    
    bubbleSort(arr, n);

    cout << "Відсортований масив: ";
    printArray(arr, n);

    delete[] arr;

    return 0;
}
