#include <iostream>

int main()
{
    int fib_num = 1;
    int fib_num_next = 1;
    int tmp;
    int count = 5;
    while (count > 0)
    {
      std::cout << fib_num << ' ';
      tmp = fib_num;
      fib_num = fib_num_next;
      fib_num_next = tmp + fib_num_next;
      count--;
    }
    std::cout << std::endl;
}
