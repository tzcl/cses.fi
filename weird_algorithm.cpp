#include <bits/stdc++.h>

auto collatz(long long n) {
  std::cout << n << " ";
  if (n == 1) return;
  else if (n%2 == 0) collatz(n/2);
  else collatz(3*n + 1);
}

int main() {
  int n;
  std::cin >> n;
  collatz(n);
}
