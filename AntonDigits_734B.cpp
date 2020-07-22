#include<iostream>
using namespace std;
int main(){
    int k2, k3, k5, k6;
    cin>>k2>>k3>>k5>>k6;
    int64_t sum = 0;
    int min = 0;
    if(k2>0 && k5>0 && k6>0){
        if(k2<k5){
            min = k2;
            if(k2>k6) min = k6;
        }
        else if(k5<k2){
            min = k5;
            if(k6<k5) min = k6;
        }
        else if(k2 == k5){
            min = k2;
            if(k6<k2) min = k6;
        }
    }
    sum+=(256 * static_cast<int64_t>(min));
    //cout<<"sum="<<sum<<"--"<<k2<<" "<<k3<<" "<<k5<<" "<<k6<<" "<<min<<endl;
    k2-=min;
    k5-=min;
    k6-=min;
    if(k2>0 && k3>0){
        if(k2<k3) min = k2;
        else min = k3;
        sum+=(32*static_cast<int64_t>(min));
    }
    //cout<<"sum="<<sum<<"--"<<k2<<" "<<k3<<" "<<k5<<" "<<k6<<" "<<min<<endl;
    cout<<sum<<endl;

    return 0;
}
