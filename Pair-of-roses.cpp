#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int total;
        cin >> total;

        int i = 0, j = n - 1;
        int x, y;

        // Sort the array
        sort(arr, arr + n);

        // Find the pair of roses
        while (i < j) {
            if (arr[i] + arr[j] == total) {
                x = arr[i];
                y = arr[j];
                i++;
                j--;


            } else if (arr[i] + arr[j] > total) {
                j--;
            } else {
                i++;
            }
        }

        // Print the result
        cout << "Deepak should buy roses whose prices are " << x << " and " << y << "." << endl;
        cout << endl;
    }

    return 0;
}
