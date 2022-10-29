#include <stdio.h>
int fib(int);
int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d %d ", t1, t2);
  for(i=2;i<=n;++i)
  {
  	printf("%d ",fib(i));
  }

  return 0;
}
int fib(int n){
	if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fib(n-1) + fib(n-2) );
}
