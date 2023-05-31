#include <iostream>

using namespace std;

int main(){
    int n,k=0;
    cin>>n;
    
    while (n>0){
        k=k*10+(n%10);
        n/=10;
        /***
        ex. 123
        
        123%10==>3
        k=0+3
        123/10==>12
        
        12%10==>2
        k=3*10+2
        12/10==>1
        
        1%10==>10
        k=32*10+1
        
        ***/
    }
    cout<<k;
    return 0;
}
