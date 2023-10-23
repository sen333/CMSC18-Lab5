#include <stdio.h>
    // Program to Count the Number of Numbers from L to M that are divisible by N

int main() {
    // variables
  int i, l, m, n, count = 0;

  printf("Enter L (>1): ");
  scanf("%d", &l);

  printf("Enter M (>1): ");
  scanf("%d", &m);

    // terminates if inputted l is greater than m
  if (l > m) {
    printf("You have entered an invalid input. Program will now terminate.\n");
    return 1;
  }

  printf("Enter N (>1): ");
  scanf("%d", &n);

    // terminates if inputted n is less than or equal to 1
  if (n <= 1) {
    printf("You have entered an invalid input. Program will now terminate.\n");
    return 1;
  }

  // Loop from l to m and count numbers divisible by n
  for (i = l; i <= m; i++) {
    if (i % n == 0) {
      count++;
    }
  }

  // Print the count of numbers divisible by n in the range [l, m]
  printf("There are %d numbers from %d to %d that are divisible by %d\n", count, l, m, n);

  return 0;
}

