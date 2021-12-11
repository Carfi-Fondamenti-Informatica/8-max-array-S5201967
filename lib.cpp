#include <cmath>
#include <limits>
#include "lib.h"

float max(int a,float numeri[]){
    float m=-INFINITY;
    for(int i=0; i<a;i++){
        if(numeri[i]>m){
            m=numeri[i];
        }
    }
    return m;
}
