#include<bits/stdc++.h>
using namespace std;
 int main(){
     int v[5] = {1,2,3,4,5};
     int n =5;
     int sum=0;
     for(int i=0;i<n;i++)sum+=v[i];
     cout<<"AVERAGE is "<<(sum)/(n);
 }
