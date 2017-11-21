#include <stdio.h>
int main (int argc, char** argv){
    float i = 10, result;
    while(1){
        i = i/10;
        if(i !=0 )
            result = i;
        else
            break;
    }
    printf("the computation err is %.100f\n",result);
}
