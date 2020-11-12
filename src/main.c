#include <stdio.h>

void other(void) {
  printf("Wake up, Neo...\n");
  printf("The Matrix has you...\n");
  printf("Follow the white rabbit.\n");
  printf("Knock, knock, Neo.\n");
  fflush(stdout);
}

void input(void) {
  char buf[10];
  scanf("%s", buf);
  printf("Hello, %s!\n", buf);
  fflush(stdout);
}

int main(void) {
  input();
  return 0;
}
