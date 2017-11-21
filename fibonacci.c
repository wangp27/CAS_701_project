#include <stdio.h>

int main(int argc, char** argv){
    int cnt = 20;
    volatile long int next, current, previous,result;
    for(cnt = 10000000;cnt>0;cnt--){
        current = 1;
        previous = 0;
        next = 0;
        while(1){
            next = current + previous;
            previous = current;
            current = next;
            if(next > 0)
                result = next;
            else
                break;
        }
    }
    printf("the largest fibonacci number int can represent is %ld\n",result);
}
