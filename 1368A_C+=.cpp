#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int64_t a,b,n;
        cin>>a>>b>>n;
        int count = 0;
        while(true){
            if(a>b){
                b+=a;
                count++;
                if(b>n) break;
            }
            else{
                a+=b;
                count++;
                if(a>n) break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
