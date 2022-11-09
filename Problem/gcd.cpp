#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    for(int i=1;i<100;i++){
        for(int j=1;j=i/2;j++){
            if(i%j==0){
                sum = sum + j;
            }
        }
        if(sum>i){
            cout<<sum<<endl;
        }
    }
    return 0;
}