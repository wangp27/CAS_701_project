#include<stdio.h>
#include<gmp.h>
int main (int argc, char** argv){
    mpf_t x,result,y,zero,temp;
    int i = 3;
    mpf_init(x);
    mpf_init_set_d(zero,0);
    mpf_init_set_d(y,10.0);
    mpf_init(result);
    mpf_set_d(x,10);
    mpf_init(temp);
    while(1){
        mpf_div(x,x,y);
//        gmp_printf("current result is %.20Ff\n",temp);
//        gmp_printf("current x is %.20Ff\n",x);
//        gmp_printf("current y is %.20Ff\n",y);
 
        if(mpf_cmp(x,zero)>0){
                mpf_set(result,x);
       }
        else
            break;
    }
    gmp_printf("fixed point percesion computation err is %.100Ff\n",result);
}

