/* This may look like nonsense, but really is -*- mode: C -*- */
#include <stdlib.h>                                    /*@\label{include-stdlib}*/
#include <stdio.h>                                     /*@\label{include-stdio}*/

/* The main thing that this program does. */           /*@\label{C-comment}*/
int main(int argc, [[maybe_unused]] char* argv[argc+1]) { /*@\label{main-start}*/
  // Declarations
  double A[5] = {                                      /*@\label{array-declaration}*/
    [0] = 9.0,                                         /*@\label{designated-init}*/
    [1] = 2.9,
    [4] = 3.E+25,                                      /*@\label{scientific-notation}*/
    [3] = .00007,                                      /*@\label{comma-terminate}*/
  };

  // Doing some work                                   /*@\label{CPP-comment}*/
  size_t i, j;

  for ( i = 4; i <= 4; --i) {                     /*@\label{for-loop}*/
     printf("element %zu is %g, \tits square is %g\n", /*@\label{printf-start}*/
            i,
            A[i],
            A[i]*A[i]);                                /*@\label{printf-end}*/
  }                                                    /*@\label{for-end}*/

    j = __SIZE_MAX__;

    printf("\n");
    printf("value of i is %zu\n", i);
    printf("value of j is %zu\n", j);

  return EXIT_SUCCESS;                                 /*@\label{main-return}*/
}                                                      /*@\label{main-end}*/
