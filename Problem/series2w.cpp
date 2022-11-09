#include<iostream>
using namespace std;

int main(){
    int n, fact=1, count, num=1, sum = 0;
    cin>>n;
    while(num<=n){
        for(count=1;count<=num;count++){
            fact = fact * count;
        }
        sum = sum + (num/fact);
        num++;
    }
    cout<<sum;
    return 0;
}