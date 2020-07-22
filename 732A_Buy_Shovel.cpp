#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i=0;
    int cost=0;
    for(i=1;;i++){
        cost=(i*k);
        //cout<<"--"<<cost<<endl;
        if(cost % 10==0) break;
        if((cost-r)%10 == 0) break;
    }
    cout<<i<<endl;
    return 0;
}
