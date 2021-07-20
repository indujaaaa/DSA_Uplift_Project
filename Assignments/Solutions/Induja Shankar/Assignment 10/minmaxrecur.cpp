#include <iostream>
using namespace std;

int find_min(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], find_min(A, n-1));
}

int find_max(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], find_max(A, n-1));
}

int main() {
  
  int A[] = {12, 34, 45, 6, -50, 0, 29};
  int n = sizeof(A)/sizeof(A[0]);
  cout << "Maximum of array: " << find_max(A, n) << endl;
  cout << "Minimum of array: " << find_min(A, n) << endl;
  
  return 0;
}
