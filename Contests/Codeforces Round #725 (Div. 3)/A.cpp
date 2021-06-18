#include <bits/stdc++.h>
using namespace std;

void run_case(){
    int n,res=0,pos=0,pos1=0,first=0,second=0,min=0,firstm=0,secondm=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        pos = max_element(ara, ara + n) - ara;
        min = min_element(ara, ara + n) - ara;
    }
    pos1 = n;
    first = (pos + 1) - 0;
    if(min>0){
        firstm = (min+1) - 0;
    }
    else{
        firstm = min+ - 0;
    }
    secondm = pos1 - min;
    second = pos1 - pos;
    if(first<second){
        if(firstm<secondm){
            res = first + firstm;
            cout<<res<<"\n";
        }
        else if(secondm<firstm){
            res = first + secondm;
            cout<<res<<"\n";
        }
    }
    else if(second<first){
        if(secondm<firstm){
            res = second + secondm;
            cout<<res<<"\n";
        }
        else if(firstm<secondm){
            res = second + firstm;
            cout<<res<<"\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int tests;
    cin>>tests;
    while (tests--){
        run_case();
    }
    return 0;
}