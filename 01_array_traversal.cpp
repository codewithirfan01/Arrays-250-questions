#include <iostream>
using namespace std;

int main() {
    int arrSize = 10;
    int arr[arrSize] = {1,2,3,4,5,6,7,8,9,10};

    // Traversing the array
    for ( int i = 0; i < arrSize; i++ ) {
        cout << arr[i] << " ";
    }
    return 0;
}