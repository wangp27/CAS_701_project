#include <stdio.h>
#include <gmp.h>

int main (int argc, char** argv) {
//    long long int z,x,y;
//    long int x_long, y_long, z_long;
//    x = 7612058254738945000000;
//    x_long = 7612058254738945000000;
//    y = 9263591128439081000000;
//    y_long = 9263591128439081000000;
//    z = x*y;
//    z_long = x_long*y_long;
//    printf("result is %lld\n",z);
//    printf("long print result is %ld",z_long);
    mpz_t x,y,result;
    mpz_init_set_str(x,"7612058254738945000000",10);
    mpz_init_set_str(y,"9263591128439081000000",10);
    mpz_init(result);
    mpz_mul(result,x,y);
    gmp_printf("x is    %Zd\n\
           y is     %Zd\n\
           result is    %Zd\n",x,y,result);
}

