#include<iostream>
using namespace std;

bool is_sparse(int n)
{
  if (n & (n >> 1))
    return false;
  
  return true;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  
  if (is_sparse(n))
    cout << "Yes it is sparse" << endl;
  else
    cout << "No it is not sparse" << endl;
  
  return 0;
}
