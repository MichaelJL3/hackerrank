/*
	SOLVED: May 2016

	Modified 12/21/16
	switched to scanf and printf for faster execution
	and smaller executable size
*/

#include <cstdio>

int solveMeFirst(int a, int b) {
  return a+b;
}

int main() {
  int num1, num2, sum;
  scanf("%d %d", &num1, &num2);
  sum = solveMeFirst(num1,num2);
  printf("%d\n", sum);
  return 0;
}
