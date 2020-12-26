#include <stdio.h>

int main(void) {
  FILE *fp;
  fp = fopen("/Users/ben/Desktop/myfile.txt", "w");

  char password[100];
  printf("\nEnter password: ");
  scanf("%s", password);  

  printf("\nYou entered: %s\n", password);

  return 0;
}
