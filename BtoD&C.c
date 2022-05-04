#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int convert(long num);
long get_bin(char *text, int start, int end);

int main() {
  char text[1000];
  int start = 0;
  int end = 0;
  long bin = 0;
  int num = 0;
  printf("Enter any binary number:\n");
  scanf("\n");
    scanf("%[^\n]%*c", text);
  for(int i = 0,l = strlen(text); i < l+1; i++){
      if(isspace(text[i]) != 0 || text[i] == '\0'){
          end = i;
          bin = get_bin(text, start, end);
          num = convert(bin);
          printf("%c", num);
          start = end + 1;
      }
  }
  printf("\n");

  return 0;
}

int convert(long num) {
  int decimal = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }
  return decimal;
}

long get_bin(char *text, int start, int end){
    int i = 0;
    char s[8];
    while (start < end){
      s[i] = text[start];
      start++;
      i++;
    }
    long bin = atol(s);
    return bin;
}