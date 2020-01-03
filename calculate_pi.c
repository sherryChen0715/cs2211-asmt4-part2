#include <stdio.h>
/**
 * author : sherry ,yuying chen
 * @return
 */
int main(){// this program calculate the pi
    double c;
    printf("please enter a double precision\n");
    scanf("%lf",&c);// use the input number to implement the algorithm ,
    double pi=0;
    int i;
    for(i=1;4.0/(2*(i+1)-1)>=c;i++){// sum up the pi with the algorithm , and print its value
        pi+=4/(4.0*i-3)-4/(4.0*i-1);
    }
    printf("pi=%lf",pi);
}
