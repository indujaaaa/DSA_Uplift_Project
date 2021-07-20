#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
  int i, j, lower, higher;
  
  for (i = 0; i < n; ++i) {	
    lower = 0;
    for (j = 0; j < i; j++)
      lower += arr[j];
    
    higher = 0;
    for (j = i + 1; j < n; j++)
      higher += arr[j];
    
    if (lower == higher)
      return i;
  }
  return -1;
}

int main()
{
  int n;
  cout << "Enter array size: ";
  cin >> n;
  int arr[n];
  
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  
  int ans = equilibrium(arr, n);
  if (ans != -1)
    cout << "Equilibrium point: " << ans << endl;
  else
    cout << "No equilibrium point exists" << endl;
  return 0;
}
