#include <bits/stdc++.h>
using namespace std;
#define mp             make_pair
#define se             second
#define pb             push_back
#define pp             pop_back
typedef long long      ll;

void tr(){
    ll hu, ei=0,ei1=0,ei2=0,su,ju;
    vector<ll> st;
    vector<ll>st1;
    scanf("%lld",&hu);

    ll tm[hu];
    ll tm1[hu];
    ll tm2[hu];
    ll tm4[hu];
    
    for(ll i=0;i<hu;i++){
        cin>>tm[i];
        tm[i]--;
        tm2[i]=0;
    }
    
    for(ll i=0;i<hu;i++){
        if(tm2[tm[i]]==0){
            tm1[i]=tm[i];
            tm2[tm[i]]=1;
            ei++;
        }
        else{
            tm1[i]=-1;
            st.pb(i);
        }
    }


    //cout<<ei<<endl;
    printf("%lld\n",ei);
   
    
    for(ll i=0;i<hu;i++){
        if(tm2[i]==0){
            ei1++;
            st1.pb(i);
        }
    }


    ll kl=st1.size()-1;

     
    ll gl=st1.size();

    reverse(st1.begin(),st1.end());
    
    if(ei1==1){
        ll tt=st[0];
        ll tt2=st1[0];
        if(tt==tt2){

            for(ll i=0;i<hu;i++){
                if(tm1[i]==tm[tt]){
                    tm1[i]=tt2;
                }
            }
            tm1[tt]=tm[tt];
            ei2++;
        }
        else{
            ei2--;
            tm1[tt]=tt2;
        }
            for(ll i=0;i<hu;i++){
                cout<<tm1[i]+1<<" ";
            }
        cout<<endl;
        return;
    }

    else if(ei1==0){
        for(ll i=0;i<hu;i++){
            cout<<tm1[i]+1<<" ";
        }
        cout<<endl;
        return;
    }
    while(gl>3){

        if(kl%2==0){
            if(st1[kl]==st[kl] || st1[kl-1]==st[kl-1]){
                tm1[st[kl]]=st1[kl-1];
                tm1[st[kl-1]]=st1[kl];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
            else{
                tm1[st[kl]]=st1[kl];
                tm1[st[kl-1]]=st1[kl-1];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
            kl=kl-2;
        }
        else{
            if(st1[kl]==st[kl] || st[kl-1]==st1[kl-1]){
                tm1[st[kl]]=st1[kl-1];
                tm1[st[kl-1]]=st1[kl];
                kl=kl-2;
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
                
            }
            else{

                tm1[st[kl]]=st1[kl];
                kl=kl-1;
                st1.pp();
                st.pp();
                
            }
        }
    }

    ll strrr=st.size();

    if(strrr==2){
        if(st1[kl]==st[kl] || st1[kl-1]==st[kl-1]){
                tm1[st[kl]]=st1[kl-1];
                tm1[st[kl-1]]=st1[kl];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
        else{
                ll q=kl-1;
                tm1[st[kl]]=st1[kl];
                tm1[st[q]]=st1[q];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
    }
    else if(strrr==3){
        if(st[2]!=st1[2]){
            tm1[st[kl]]=st1[kl];
                kl=kl-1;
                st1.pp();
                st.pp();
                
        }
    }

ll strr1=st.size();

    if(strr1==2){
        if( st1[kl-1]==st[kl-1] ||st1[kl]==st[kl] ){
                tm1[st[kl]]=st1[kl-1];
                tm1[st[kl-1]]=st1[kl];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
        else{
                tm1[st[kl]]=st1[kl];
                tm1[st[kl-1]]=st1[kl-1];
                st1.pp();
                st1.pp();
                st.pp();
                st.pp();
            }
    }
    else{
        tm1[st[kl]]=st1[kl-1];
        tm1[st[kl-1]]=st1[kl];
        tm1[st[kl]]=st1[kl];
        kl-=2;
        st1.pp();
        st1.pp();
        st.pp();
        st.pp();
        
        
    }
    for(ll i=0;i<hu;i++){
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