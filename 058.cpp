#include <iostream>

using namespace std;

int main(){
    int n,i;
    int m=0,p=0,k=0;
    scanf("%d", &n);
    if(n>0 && n<=50000){
        for(i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(a%3==0){
                m++;
            }
            if(a%3==1){
                p++;
            }
            if(a%3==2){
                k++;
            }
        }
        printf("%d %d %d",m,p,k);
    }else{
        printf("Failed\n");
    }
}
