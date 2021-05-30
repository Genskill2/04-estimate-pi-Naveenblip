#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int c)
{
  float pitotal=1;
  float term=0;
    for(int i=1;i<=c;i++)
    {
        term=(4*pow(i,2));
        prod*=(term/(term-1));
    }
    return 2*pitotal;
}
int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}

