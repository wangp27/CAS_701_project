#include <stdio.h>

int main (int argc, char** argv) {
    long int x_long, y_long, z_long;
//    x = 7612058254738945000000;
    x_long = 7612058254738945000;
//    y = 9263591128439081000000;
    y_long = 9263591128439081000;
//    z = x*y;
    z_long = x_long*y_long;
//    printf("result is %lld\n",z);
    printf("long print result is %ld",z_long);
}
