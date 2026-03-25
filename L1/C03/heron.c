//#include "c23-fallback.h"
#include <stdlib.h>
#include <stdio.h>

/* lower and upper iteration limits centered around 1.0 */
constexpr double eps1m01 = 1.0 - 0x1P-01;
constexpr double eps1p01 = 1.0 + 0x1P-01;
constexpr double eps1m24 = 1.0 - 0x1P-24;
constexpr double eps1p24 = 1.0 + 0x1P-24;

int main(int argc, char* argv[argc+1]) {
  for (int i = 1; i < argc; ++i) {        // process args
    double const a = strtod(argv[i], nullptr);  // arg -> double
    double x = 1.0;
    printf("Powers of 2\n",x);
    printf("eps1m01 = %g\teps1p01 = %g\n",eps1m01,eps1p01);
    printf("value of x is %g\n",x);
    for (;;) {                    // by powers of 2
      double prod = a*x;
      printf("x = %g\tprod=%.60f\n",x,prod);
      if (prod < eps1m01) {
        x *= 2.0;
      } else if   (eps1p01 < prod) {
        x *= 0.5;
      } else {
        printf("\n");
        break;
      }
    }

    printf("Heron approximation\n",x);
    printf("eps1m24 = %.12f\teps1p24 = %.12f\n",eps1m24,eps1p24);
    printf("value of x is %g\n",x);
    for (;;) {                    // Heron approximation
      double prod = a*x;
      printf("x = %g\tprod=%.60f\n",x,prod);
      if ((prod < eps1m24) || (eps1p24 < prod)) {
        x *= (2.0 - prod);
      } else {
        printf("\n");
        break;
      }
    }


    printf("\n");
    printf("heron: a=%.5e,\tx=%.5e,\ta*x=%.12f\n",
           a, x, a*x);
    printf("\n\n");
  }
  return EXIT_SUCCESS;
}
