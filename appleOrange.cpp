//https://www.hackerrank.com/challenges/apple-and-orange/problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s=7, t=11, a=5, b=15;
    int apples[3]={-2,2,1};
    int oranges[2]={5,-6};
    int counta=0,countb=0;
    
    for(int i=0; i<3; i++){
     apples[i]=apples[i]+a;
     cout<<apples[i]<<endl;
     if(apples[i]>=s && apples[i]<=t){
         counta++;
     }
    }
     
    for(int i=0; i<2; i++){
     oranges[i]=oranges[i]+b;
     cout<<oranges[i]<<endl;
     if(oranges[i]>=s && oranges[i]<=t){
         countb++;
     }
   }
   
   cout<<counta<<endl<<countb;

    return 0;
}
