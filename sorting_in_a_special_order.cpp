// Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s last //

#include <iostream>
using namespace std;

int main() {
  int n = 9;
  int arr[n] = {0, 1, 2, 2, 1, 1, 0, 0, 1};

  int i = 0, j = n - 1;
  int mid = 0;

  while (mid <= j) {
    switch (arr[mid]) {
      case 0:
        swap(arr[i++], arr[mid++]);
        break;
      case 1:
        mid++;
        break;
      case 2:
        swap(arr[mid], arr[j--]);
        break;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
