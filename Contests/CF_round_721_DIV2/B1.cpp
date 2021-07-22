#include <bits/stdc++.h>
using namespace std;
#define mp             make_pair
#define se             second
#define pb             push_back
#define pp             pop_back
typedef long long      ll;

void tr(){
    ll aqw, etw=0,wew=0,ewr=0;
    vector<ll> str;
    vector<ll>str1;
    scanf("%lld", &aqw);

    ll tw1[aqw];
    ll tw2[aqw];
    ll tw3[aqw];

    ll tw5[aqw];
    
    for(ll i=0;i<aqw;i++){
        cin>>tw1[i];
        tw1[i]--;
        tw3[i]=0;
    }
    
    for(ll i=0;i<aqw;i++){
        if(tw3[tw1[i]]==0){
            tw2[i]=tw1[i];
            tw3[tw1[i]]=1;
            etw++;
        }
        else{
            tw2[i]=-1;
            str.pb(i);
        }
    }


    //cout<<count<<endl;
    printf("%lld\n", etw);
   
    
    for(ll i=0;i<aqw;i++){
        if(tw3[i]==0){
            wew++;
            str1.pb(i);
        }
    }


    ll ss=str1.size()-1;

     
    ll s=str1.size();

    reverse(str1.begin(),str1.end());
    


    
    if(wew==1){
        ll tt=str[0];
        ll tt2=str1[0];
        if(tt==tt2){

            for(ll i=0;i<aqw;i++){
                if(tw2[i]==tw1[tt]){
                    tw2[i]=tt2;
                }
            }
            tw2[tt]=tw1[tt];
            ewr++;
        }
        else{
            ewr--;
            tw2[tt]=tt2;
        }
            for(ll i=0;i<aqw;i++){
                cout<<tw2[i]+1<<" ";
            }
        //cout<<endl;
        printf("\n"); 

        return;
    }

    else if(wew==0){
        for(ll i=0;i<aqw;i++){
            cout<<tw2[i]+1<<" ";
        }
        cout<<endl;
        return;
    }

   
    

    while(s>3){

        if(ss%2==0){
            if(str1[ss]==str[ss] || str1[ss-1]==str[ss-1]){
                tw2[str[ss]]=str1[ss-1];
                tw2[str[ss-1]]=str1[ss];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
            else{
                tw2[str[ss]]=str1[ss];
                tw2[str[ss-1]]=str1[ss-1];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
            ss=ss-2;
        }
        else{
            if(str1[ss]==str[ss] || str[ss-1]==str1[ss-1]){
                tw2[str[ss]]=str1[ss-1];
                tw2[str[ss-1]]=str1[ss];
                ss=ss-2;
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
                
            }
            else{

                tw2[str[ss]]=str1[ss];
                ss=ss-1;
                str1.pp();
                str.pp();
                
            }
        }
    }

    ll strs=str.size();

    if(strs==2){
        if(str1[ss]==str[ss] || str1[ss-1]==str[ss-1]){
                tw2[str[ss]]=str1[ss-1];
                tw2[str[ss-1]]=str1[ss];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
        else{
                ll q=ss-1;
                tw2[str[ss]]=str1[ss];
                tw2[str[q]]=str1[q];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
    }


    else if(strs==3){
        if(str[2]!=str1[2]){
            tw2[str[ss]]=str1[ss];
                ss=ss-1;
                str1.pp();
                str.pp();
                
        }
    }

ll strs1=str.size();

    if(strs1==2){
        if( str1[ss-1]==str[ss-1] ||str1[ss]==str[ss] ){
                tw2[str[ss]]=str1[ss-1];
                tw2[str[ss-1]]=str1[ss];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
        else{
                tw2[str[ss]]=str1[ss];
                tw2[str[ss-1]]=str1[ss-1];
                str1.pp();
                str1.pp();
                str.pp();
                str.pp();
            }
    }
    else{
        tw2[str[ss]]=str1[ss-1];
        tw2[str[ss-1]]=str1[ss];
        tw2[str[ss]]=str1[ss];
        ss-=2;
        str1.pp();
        str1.pp();
        str.pp();
        str.pp();
        
        
    }
    for(ll i=0;i<aqw;i++){
        cout<<tw2[i]+1<<" ";
    }   
    //cout<<endl;
     printf("\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int ty;
    cin>>ty;
    while(ty--){
        tr();
    }
	return 0;
}