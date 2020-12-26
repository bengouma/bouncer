#include <stdio.h>

char * encryptPass(char *pass) {
  return pass;
}

int main(void) {
  FILE *fp;
  fp = fopen("/Users/ben/Desktop/myfile.txt", "w");

  char password[100];
  printf("\nEnter password: ");
  scanf("%s", password);  
  printf("\nYour password: %s\n", encryptPass(password));

  return 0;
}
