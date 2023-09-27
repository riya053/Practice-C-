#include <iostream>
#include <algorithm>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum) {
    int l, r;

    sort(A, A + arr_size);

  
    for (int i = 0; i < arr_size - 2; i++) {
        l = i + 1; 
        r = arr_size - 1; 
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                cout << "Triplet is " << A[i] << ", " << A[l] << ", " << A[r] << endl;
                return true;
            } else if (A[i] + A[l] + A[r] < sum)
                l++;
            else
                r--;
        }
    }

    return false;
}

int main() {
    int arr_size, sum;

    cout << "Enter the number of elements in the array: ";
    cin >> arr_size;
    int A[arr_size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < arr_size; i++) {
        cin >> A[i];
    }

    cout << "Enter the sum to find a triplet for: ";
    cin >> sum;

    if (find3Numbers(A, arr_size, sum)) {
    } else {
        cout << "No triplet with the given sum was found." << endl;
    }

    return 0;
}

output:

Enter the number of elements in the array: 5
Enter the elements of the array:
23
5
10
9
7
Enter the sum to find a triplet for: 22
Triplet is 5, 7, 10
