#include <iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N =0;
    cin >> N;
    if(N>=1 && N<=10000){
        printf("%d \n", (N/6)+1);
    }
    return 0;
}