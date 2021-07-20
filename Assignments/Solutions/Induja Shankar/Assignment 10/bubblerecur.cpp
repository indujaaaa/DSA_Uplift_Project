#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
  
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
  
    bubbleSort(arr, n-1);
}

int main()
{
    int arr[] = {34, 11, 90, 12, 22, 64, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    bubbleSort(arr, n);
  
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
