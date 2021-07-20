#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n, int i = 2)
{
  if (n <= 2)
    return (n == 2) ? true : false;
  if (n % i == 0)
    return false;
  if (i * i > n)
    return true;
  
  return is_prime(n, i + 1);
}

int main()
{
  int n;
  cout << "Enter number: " << endl;
  cin >> n;
  
  if (is_prime(n))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
