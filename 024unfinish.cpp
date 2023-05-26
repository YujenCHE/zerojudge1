#include <iostream>

using namespace std;

int main(){
    int a,b,i;
    scanf("%d %d", &a, &b);
    int L=a;
    if(a<b){
        L=b;
    }
    for(i=1;i<=L;i++){
        if(a%i==0 && b%i==0 && i!=1){
            int x=i;//here
        }
        
    }
    printf("%d \n",x);
}
