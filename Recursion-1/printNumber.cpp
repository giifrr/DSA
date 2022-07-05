#include <bits/stdc++.h>
using namespace std;

// print number from 1 - n

void printNumber(int n)
{
  if (n == 0)
    return;
  printNumber(n - 1);
  cout << n << " ";
}

int main()
{
  int n;
  cin >> n;
  printNumber(n);
}
