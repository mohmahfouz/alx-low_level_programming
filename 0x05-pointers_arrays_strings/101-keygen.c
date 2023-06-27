#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme program
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  /* Initialize the random number generator. */
  time_t t;
  srand((unsigned) time(&t));

  /* Create a list of valid characters. */
  char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  int len = strlen(valid_characters);

  /* Generate a random password of length 5. */
  char password[5];
  for (int i = 0; i < 5; i++) {
    password[i] = valid_characters[rand() % len];
  }

  /* Print the random password. */
  printf("%s\n", password);

  return 0;
}
