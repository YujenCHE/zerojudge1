#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;
    int i,s = str.size();
    
    for(i=0;i<s-1;i++){//要s-1，因為有\0
        int ans = str[i+1] - str[i];//ASCII CODE的差
        if(ans>0){
            cout<<ans;
        }else{
            cout<<-ans;
        }
    }
    
    return 0;
}
