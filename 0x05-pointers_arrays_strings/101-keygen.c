#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void) {
  int i, j, s;
  char ch, charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char pw[58];

  srand(time(NULL));
  s = 0;
  while (s != 2772) {
    i = 0;
    s = 0;
    while (s < (2772 - 122)) {
      j = rand() % 62;
      ch = charset[j];
      pw[i] = ch;
      s += ch;
      i++;
    }
    j = 0;
    while (charset[j]) {
      if (charset[j] == (2772 - s)) {
        pw[i] = charset[j];
        s += charset[j];
        i++;
        break;
      }
      j++;
    }
  }
  pw[i] = '\0';
  printf("%s", pw);
  return (0);
}
