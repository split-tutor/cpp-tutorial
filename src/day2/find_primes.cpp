#include <iostream>

int main()
{
  /* Fill in your code */

  /* Hint: This will determine whether 37 is a prime number or not. */
  int p = 37;
  bool is_prime = true;

  for (int i = 2; i < p; i++) {
    if (p % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    std::cout << p << " is a prime number!\n";
}
