#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;


    if (a == b)
        return a;


    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main() {

	int T; scanf("%d", &T);
	


	for (int case_num = 1; case_num <= T; case_num ++) {
      int a,b,m;
      int count=0;
      scanf("%d %d %d", &a,&b,&m);

	if(a>=1 && a<=1000000000000 && b>=1 && b<=1000000000000 && m>=0 && m<=1000000000000){

		for (int j = 0; j <= m; ++j)
       {
            if(__gcd(a+j, b+j)==1){
                count++;
            }

            else
                continue;
       }
         printf("Case %d: %d\n", case_num,count);

	}
       
	}


	return 0;
}