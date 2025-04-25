#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
using namespace std;

int main() {
    int x;
    cout << "введіть кількість чисел: ";
    cin >> x;

   vector<int> masiv(x);
    srand(time(0));

    cout << "масив: ";
    for (int i = 0; i < x; i++) {
        masiv[i] = rand() % 100 + 1; 
        cout << masiv[i] << " ";
    }
    sort(masiv.begin(), masiv.end());
    cout << endl;
    cout << "sort: ";
    for (int i = 0; i < x; i++){
    cout << masiv[i] << " ";
    }
    return 0;
}
