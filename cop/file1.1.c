// Table of a no.

#include <stdio.h>
void printTable(int num) {
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num*i);
  }
}

int main(void) {

int num;
printf("Program to print the table of a number\n");
printf("Input an integer!\n>> ");
scanf("%d", &num);

printTable(num);

return 0;

}