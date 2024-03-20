#include <iostream>

int main()
{
    int fib_num_prev = 0;
    int fib_num = 1;
    int tmp;
    int count = 5;
    while (count > 0)
    {
      std::cout << fib_num << ' ';
      tmp = fib_num_prev;
      fib_num_prev = fib_num;
      fib_num += tmp;
      count--;
    }
    std::cout << std::endl;
}
