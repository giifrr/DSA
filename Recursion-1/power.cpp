#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
  // karena  x^0 adalah 1
  if (n == 0)
    return 1;
  return x * power(x, n - 1);
}

int main()
{
  int n, x;
  cin >> x >> n;
  cout << power(x, n);
}
