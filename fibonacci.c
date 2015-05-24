/* page 70
fibonacci.c
*/
#include <stdio.h>

int main(void)
{
  int i;
  for (i=0; i<10; ++i)
    printf("Fibonacci(3) is %d.\n", fibonacci(3));
  
  return 0;
}

int fibonacci(int n)
{
  if ( n <= 0 || n == 1)
    return 1;
  else
    return fibonacci(n-1) + fibonacci(n - 2);
}

