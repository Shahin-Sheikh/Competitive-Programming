#include <bits/stdc++.h>

#define ll          long long int
#define mod         1000000007
#define endl        "\n"
#define pb          push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)



using namespace std;
//start
bool display(int a[], int n,int l,int r,int s)
{        int sum=0,t=0;
   // for (int i = 0; i < n; i++) {
        for (int j = l-1; j<= r-1; ++j)
        {
            sum=sum+a[j];

        }


   // }


            if(sum==s){
        return true;

        }

        else{
            return false;
        }


}

void findPermutations(int a[], int n,int l,int r,int s)
{


    sort(a, a + n);



    do {
       if( display(a, n,l,r,s)==true){

           cout<<"Good"<<endl;
           break;
       }

       else if( display(a, n,l,r,s)== false){
           if(display(a, n,l,r,s)==next_permutation(a, a + n)){
                cout<<-1<<endl;
                break;
           }
       }

      // break;
    } while (next_permutation(a, a + n));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

   ll t;
   cin>>t;
    for(ll i=0;i<t;i++){
      int n,l,r,s;

      cin>>n>>l>>r>>s;

         int arr[n] ;

        for (int j = 0; j < n; ++j)
        {
             arr[j]=j+1;
        }

      int z = sizeof(arr) / sizeof(arr[0]);

        findPermutations(arr, z,l,r,s);

  }

    return 0;
}
