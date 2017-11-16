#include <stdio.h>
#include "omp.h"

// hi
//example
//hai
int main() {
    omp_set_num_threads(1000);

#pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("Hello, World! Thread Number: (%d)\n", id);
    }
    return 0;
}