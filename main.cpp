#include <iostream>
#include <string>

int foo(int x) {
  if (x == 1 || x == 2) {
    return 1;
  }
  return foo(x - 1) + foo(x - 2);
}

int main() {
  int x;
  std::cin >> x;
  std::cout << foo(x) + 2;
}