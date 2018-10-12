#include <iostream>

int main()
{
  int n[10];
  char c[10];

  std::cout << "Enter 10 numbers!\n";

  for (int i = 0; i < 10; i++) {
    std::cin >> n[i];
  }

  for (int i = 0; i < 10; i++) {
    if (n[i] % 2 != 0)
      c[i] = 'x';
    else
      c[i] = 'o';
  }

  for (int i = 0; i < 10; i++) {
    std::cout << c[i];
  }

  std::cout << "\n";
}
