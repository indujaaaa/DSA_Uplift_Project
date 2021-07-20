#include <bits/stdc++.h>
using namespace std;

void row_pattern(int n)
{
  if (n < 1)
    return;
  
  cout << "* ";
  row_pattern(n-1);
}

void pattern(int n)
{
  if (n < 1)
    return;
  
  row_pattern(n);
  cout << endl;
  pattern(n-1);	
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  pattern(n);
  return 0;
}
