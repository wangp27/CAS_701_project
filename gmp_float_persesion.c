#include<stdio.h>
#include<gmp.h>
int main (int argc, char** argv){
    mpf_t x,result,y,zero,temp;
    mpf_init(x);
    mpf_init_set_str(zero,"0.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000009",10);
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
    gmp_printf("the computation  err is \n%.1000Ff\n",result);
}

