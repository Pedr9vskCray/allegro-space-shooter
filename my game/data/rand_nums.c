#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randint(int min, int max){
    //srand((unsigned)time(NULL));
    int random = rand() % (max - min + 1) + min;
    return random;
}

float randfloat(float min, float max){
    //srand((unsigned)time(NULL));
    float random = ((float)rand()) / ((float)RAND_MAX) * (max - min) + min;
    return random;
}