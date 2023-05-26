#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int D=(b*b)-(4*a*c);
    if(D>0){
        printf("Two different roots x1= %0.1f , x2=%0.1f \n",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    }else if(D==0){
        printf("Two same roots x=%d",-b/(2*a));
    }else{
        printf("NO real root");
    }
    return 0;
}
