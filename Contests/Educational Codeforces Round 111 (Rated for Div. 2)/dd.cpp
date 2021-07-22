#include <bits/stdc++.h>
using namespace std;
#define mp             make_pair
#define se             second
#define pb             push_back
#define pp             pop_back
typedef long long      ll;

void tr(){
    ll dgse, et=0,et1=0,et2=0,dhsg,dhuse;
    vector<ll> str;
    vector<ll>st1;
    scanf("%lld", &dgse);

    ll tm[dgse];
    ll tm1[dgse];
    ll tm2[dgse];

    ll tm3[dgse];
    
    for(ll i=0;i<dgse;i++){
        cin>>tm[i];
        tm[i]--;
        tm2[i]=0;
    }
    
    for(ll i=0;i<dgse;i++){
        if(tm2[tm[i]]==0){
            tm1[i]=tm[i];
            tm2[tm[i]]=1;
            et++;
        }
        else{
            tm1[i]=-1;
            str.pb(i);
        }
    }


    //cout<<count<<endl;
    printf("%lld\n", et);
   
    
    for(ll i=0;i<dgse;i++){
        if(tm2[i]==0){
            et1++;
            st1.pb(i);
        }
    }


    ll ss=st1.size()-1;

     
    ll s=st1.size();

    reverse(st1.begin(),st1.end());
    


    
    if(et1==1){
        ll ghi=str[0];
        ll dse=st1[0];
        if(ghi==dse){

            for(ll i=0;i<dgse;i++){
                if(tm1[i]==tm[ghi]){
                    tm1[i]=dse;
                }
            }
            tm1[ghi]=tm[ghi];
            et2++;
        }
        else{
            et2--;
            tm1[ghi]=dse;
        }
            for(ll i=0;i<dgse;i++){
                cout<<tm1[i]+1<<" ";
            }
        cout<<endl;
        //printf("\n"); 

        return;
    }

    else if(et1==0){
        for(ll i=0;i<dgse;i++){
            cout<<tm1[i]+1<<" ";
        }
        cout<<endl;
        return;
    }

   
    

    while(s>3){

        if(ss%2==0){
            if(st1[ss]==str[ss] || st1[ss-1]==str[ss-1]){
                tm1[str[ss]]=st1[ss-1];
                tm1[str[ss-1]]=st1[ss];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
            else{
                tm1[str[ss]]=st1[ss];
                tm1[str[ss-1]]=st1[ss-1];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
            ss=ss-2;
        }
        else{
            if(st1[ss]==str[ss] || str[ss-1]==st1[ss-1]){
                tm1[str[ss]]=st1[ss-1];
                tm1[str[ss-1]]=st1[ss];
                ss=ss-2;
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
                
            }
            else{

                tm1[str[ss]]=st1[ss];
                ss=ss-1;
                st1.pp();
                str.pp();
                
            }
        }
    }

    ll euye=str.size();

    if(euye==2){
        if(st1[ss]==str[ss] || st1[ss-1]==str[ss-1]){
                tm1[str[ss]]=st1[ss-1];
                tm1[str[ss-1]]=st1[ss];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
        else{
                ll q=ss-1;
                tm1[str[ss]]=st1[ss];
                tm1[str[q]]=st1[q];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
    }


    else if(euye==3){
        if(str[2]!=st1[2]){
            tm1[str[ss]]=st1[ss];
                ss=ss-1;
                st1.pp();
                str.pp();
                
        }
    }

ll str1=str.size();

    if(str1==2){
        if( st1[ss-1]==str[ss-1] ||st1[ss]==str[ss] ){
                tm1[str[ss]]=st1[ss-1];
                tm1[str[ss-1]]=st1[ss];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
        else{
                tm1[str[ss]]=st1[ss];
                tm1[str[ss-1]]=st1[ss-1];
                st1.pp();
                st1.pp();
                str.pp();
                str.pp();
            }
    }
    else{
        tm1[str[ss]]=st1[ss-1];
        tm1[str[ss-1]]=st1[ss];
        tm1[str[ss]]=st1[ss];
        ss-=2;
        st1.pp();
        st1.pp();
        str.pp();
        str.pp();
        
        
    }
    for(ll i=0;i<dgse;i++){
        cout<<tm1[i]+1<<" ";
    }   
    cout<<endl;
     //printf("\n");
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