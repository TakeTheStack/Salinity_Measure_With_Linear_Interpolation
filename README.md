1. Probleme statement

Using linear interpolation to determine the freezing temperature of wate water for which we have measured the salinity.

2. Input/Output Description

P1(salinity + temperature (°F)) AND p2(salinity + temperature (°F)) AND salinity->Give: new temperature (°F)

4. Hand Example

Formula of linear interpolation: f(b) = f(a) + ((b - a) / (c - a)) * (f(c) - f(a))
Formula for conversion between °F -> °C: T°C = (T°F - 32) / 1.8

salinity could be a, b or c
temperature could be f(a), f(b) or f(c)

salinity (ppt) -> temperature (°F)
|0 ppt -> 32 °F||10 ppt -> 31.1 °F||20 ppt -> 30.1 °F||24.7 ppt -> 29.6 °F||30 ppt -> 29.1 °F||35 ppt -> 28.6 °F|

example 1-> I choose the value 05 ppt for the salinity levels of water
f(b) = 32 + ((5 - 0) / (10 - 0)) * (31.1 - 32) = 31.55 °F
I found 31.55 °F

example 2-> I choose the value 05 ppt for the salinity levels of water
f(b) = 30.1 + ((22.3 - 20) / (24.7 - 20)) * (29.6 - 30.1) = 29.8 °F
I found 29.8 °F

4. My Algorithm (draft testing with structure)

#include <stdio.h>

typedef struct {salt1, freez1}p1;
typedef struct {salt2, freez2}p2

int main() {
  int salt3, int freez3;
  
  printf("salt3 - user\n");
  scanf("%d", &salt3);

  //p1
  printf("p1.\n");
  scanf("%d", &p1.salt1);
  scanf("%d", &p1.freez1);

  //p2
  printf("p2.\n");
  scanf("%d", &p2.salt2);
  scanf("%d", &p2.freez2);

  /* Linear Interpolation */
  freez3 = p1.freez1 + ((salt3 - p1.salt1) / (p2.salt2 - p1.salt1)) * (p2.freez2 - p1.freez1);
  printf("Freez3 = %d", freez3);

  return 0;
}

5. Testing

warning: this algorithm is actually wrong (used for representation), you can use the right c code here: 
https://github.com/TakeTheStack/Salinity_Measure_With_Linear_Interpolation/blob/main/Salinity_M.c
