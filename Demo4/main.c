//
// Created by Kassadin on 14/02/2017.
//

#include <stdio.h>
#include "config.h"

#ifdef USE_MYMATH
#include "math/MathFunctions.h"
#else
#include <stdlib.h>
#endif

int main() {
#ifdef USE_MYMATH
    printf("use my math");
#else
    printf("use stdlib");
#endif
    printf("abs(1) = %d\n", abs(1));
    printf("abs(-1) =  %d\n", abs(-1));
    return 0;
}