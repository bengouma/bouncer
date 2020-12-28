#include <stdio.h>

char * encryptPass(char *pass) {
  for (int i = 0; i < 4; i++) {
    pass[i]++;
  } 
  return pass;
}

int main(void) {
  FILE *fp;
  fp = fopen("/Users/ben/Desktop/myfile.txt", "w");

  char password[4];
  printf("\nEnter password: ");
  scanf("%s", password);
  printf("Your encrypted pass: %s\n", encryptPass(password));

  return 0;
}
