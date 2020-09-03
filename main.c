#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double fahrenheit;
  char* temperature = readline("Enter temperature in celsius: ");
  double celsius = atof(temperature);
  fahrenheit =(celsius*9/5) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", celsius,fahrenheit);
  return 0;
}