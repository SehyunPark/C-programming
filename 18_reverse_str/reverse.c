#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pntrSwap(char * pntr1, char * pntr2){
    char temp = * pntr1;
    *pntr1 = *pntr2;
    *pntr2 = temp;
}

void reverse(char * str) {
  size_t len = strlen(str);
  size_t half_len = len/2;
  char * pntr1 = str;
  char * pntr2 = str + len - 1;
  for (int i = 0; i < half_len; i++){
      if (str == NULL){
          break;
      }
      pntrSwap(pntr1, pntr2);
      pntr1++;
      pntr2--;
  }
}

int main(void) {
  char str0[] = "";
  char str1[] = "123";
  char str2[] = "abcd";
  char str3[] = "Captain's log, Stardate 42523.7";
  char str4[] = "Hello, my name is Inigo Montoya.";
  char str5[] = "You can be my wingman anyday!";
  char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
  char * array[] = {str0, str1, str2, str3, str4, str5, str6};
  for (int i = 0; i < 7; i++) {
    reverse(array[i]);
    printf("%s\n", array[i]);
  }
  return EXIT_SUCCESS;
}