#include <time.h> 
#include <stdio.h>

int main()
{
    register int counter = 0;
    clock_t tStart = clock();
    
    while(counter < 1000000000)
    {
        counter++;
    }
    
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}

/* This take 0.71 seconds to run, while if the counter was not a register, i.e: was from RAM, it would take 3.07 seconds. Huge performance difference*/
