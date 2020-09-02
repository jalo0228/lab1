#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  float celsius,fahrenheit;
  char* temperature = readline("Enter a temperature in celsius: ");
  celsius = atof(temperature);
  fahrenheit= (celsius* 9/5) + 32;
  printf("%f in Celsius is equivalent to %f Fahrenheit \n", celsius,fahrenheit);
  return 0;

}