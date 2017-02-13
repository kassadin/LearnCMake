//
// Created by Kassadin on 14/02/2017.
//

#include <stdio.h>
#include "TestLib.h"
#include "TestLib2.h"

int main(){
    printf("Hello CMake Demo2\n");
    printf("%d + %d = %d\n", 1, 2, add(1, 2));
    printf("get:%s\n", getString());
    return 0;
}
