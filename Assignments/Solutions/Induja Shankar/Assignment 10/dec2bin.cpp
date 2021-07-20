#include <bits/stdc++.h>
using namespace std;

int dec2bin(int dec_no)
{
  if (dec_no == 0)
    return 0;
  else
    return (dec_no % 2 + 10 * dec2bin(dec_no / 2));
}

int main()
{
  int n = 10;
  cout << dec2bin(n) << endl;
  return 0;
}

