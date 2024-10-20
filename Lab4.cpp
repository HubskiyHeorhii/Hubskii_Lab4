#include <iostream>
using namespace std;

int main() {
    const int numbers = 15;
    int arr[numbers] = {15, 14, 13, 12, 1, 2, 3, 4, -18, 5, 9, -1, 6, 7, 0};

    for (int i = 0; i < numbers; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = arr[i] * arr[i];
        }
    }

    cout << "New array, but odd numbers become 2nd power: " << endl;
    for (int i = 0; i < numbers; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
