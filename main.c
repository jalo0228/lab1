#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  float celcius,fahrenheit;
  char* temperature = readline("Enter a temperature in celcius: ");
  double celcius = atof(temperature);
  fahrenheit= (celcius* 9/5) + 32;
  printf("%f in Celsius is equivalent to %f Fahrenheit \n", celcius,fahrenheit);
  return 0;

}