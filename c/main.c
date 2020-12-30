#include <stdio.h>

char * encryptPass(char *pass) {
  for (int i = 0; i < 11; i++) {
    pass[i]++;
  } 
  return pass;
}

int main(void) {
  FILE *fp;
  fp = fopen("/home/ben/Desktop/myfile.txt", "w");

  char key[30];
  char site[30];
  char password[30];
  char option[1];

  printf("\nChoose option (l,n,d,c): ");
  scanf("%s", option);

  if(*option == 'l') {
    printf("\nEnter key: ");
    scanf("%s", key);

    if(key == "abc") {
      printf("hi\n");
    }

  } else if (*option == 'n') {

    printf("\nEnter site: ");
    scanf("%s", site);
    fprintf(fp, "%s\n", site);

    printf("\nEnter password: ");
    scanf("%s", password);
    fprintf(fp, "%s\n", encryptPass(password));

  } else if (*option == 'd') {
    printf("delete\n");
  } else if (*option == 'c') {
    printf("change\n");
  } else {
    printf("select valid option\n");
  }

  fclose(fp);

  return 0;
}
