#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// method -> bounding boxes

bool collision_check(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
    if(ax1 > bx2) return false;
    if(ax2 < bx1) return false;
    if(ay1 > by2) return false;
    if(ay2 < by1) return false;

    return true;
}