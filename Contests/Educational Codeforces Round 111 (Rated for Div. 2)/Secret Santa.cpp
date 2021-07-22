ll n, count=0,count2=0,count3=0;
    vector<ll> store;
    vector<ll>store2;
    cin>>n;

    ll temp1[n];
    ll temp2[n];
    ll temp3[n];

    ll temp4[n];
    
    for(ll i=0;i<n;i++){
        cin>>temp1[i];
        temp1[i]--;
        temp3[i]=0;
    }
    
    for(ll i=0;i<n;i++){
        if(temp3[temp1[i]]==0){
            temp2[i]=temp1[i];
            temp3[temp1[i]]=1;
            count++;
        }
        else{
            temp2[i]=-1;
            store.pb(i);
        }
    }


    cout<<count<<endl;
   
    
    for(ll i=0;i<n;i++){
        if(temp3[i]==0){
            count2++;
            store2.pb(i);
        }
    }


    ll ss=store2.size()-1;

     
    ll s=store2.size();

    reverse(store2.begin(),store2.end());
    


    
    if(count2==1){
        ll tt=store[0];
        ll tt2=store2[0];
        if(tt==tt2){

            for(ll i=0;i<n;i++){
                if(temp2[i]==temp1[tt]){
                    temp2[i]=tt2;
                }
            }
            temp2[tt]=temp1[tt];
            count3++;
        }
        else{
            count3--;
            temp2[tt]=tt2;
        }
            for(ll i=0;i<n;i++){
                cout<<temp2[i]+1<<" ";
            }
        cout<<endl;
        continue;
    }

    else if(count2==0){
        for(ll i=0;i<n;i++){
            cout<<temp2[i]+1<<" ";
        }
        cout<<endl;
        continue;
    }

   
    

    while(s>3){

        if(ss%2==0){
            if(store2[ss]==store[ss] || store2[ss-1]==store[ss-1]){
                temp2[store[ss]]=store2[ss-1];
                temp2[store[ss-1]]=store2[ss];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
            else{
                temp2[store[ss]]=store2[ss];
                temp2[store[ss-1]]=store2[ss-1];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
            ss=ss-2;
        }
        else{
            if(store2[ss]==store[ss] || store[ss-1]==store2[ss-1]){
                temp2[store[ss]]=store2[ss-1];
                temp2[store[ss-1]]=store2[ss];
                ss=ss-2;
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
                
            }
            else{

                temp2[store[ss]]=store2[ss];
                ss=ss-1;
                store2.pp();
                store.pp();
                
            }
        }
    }

    ll storeS=store.size();

    if(storeS==2){
        if(store2[ss]==store[ss] || store2[ss-1]==store[ss-1]){
                temp2[store[ss]]=store2[ss-1];
                temp2[store[ss-1]]=store2[ss];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
        else{
                ll q=ss-1;
                temp2[store[ss]]=store2[ss];
                temp2[store[q]]=store2[q];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
    }


    else if(storeS==3){
        if(store[2]!=store2[2]){
            temp2[store[ss]]=store2[ss];
                ss=ss-1;
                store2.pp();
                store.pp();
                
        }
    }

ll storeS2=store.size();

    if(storeS2==2){
        if( store2[ss-1]==store[ss-1] ||store2[ss]==store[ss] ){
                temp2[store[ss]]=store2[ss-1];
                temp2[store[ss-1]]=store2[ss];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
        else{
                temp2[store[ss]]=store2[ss];
                temp2[store[ss-1]]=store2[ss-1];
                store2.pp();
                store2.pp();
                store.pp();
                store.pp();
            }
    }
    else{
        temp2[store[ss]]=store2[ss-1];
        temp2[store[ss-1]]=store2[ss];
        temp2[store[ss]]=store2[ss];
        ss-=2;
        store2.pp();
        store2.pp();
        store.pp();
        store.pp();
        
        
    }


    for(ll i=0;i<n;i++){
        cout<<temp2[i]+1<<" ";
    }

    
            
    cout<<endl;
      
