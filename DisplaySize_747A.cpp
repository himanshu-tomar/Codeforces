#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=floor(sqrt(n));
    while(t>0){
        if(n%t!=0){
            t--;
            continue;
        }
        else{
            cout<<t<<" "<<n/t;
            break;
        }
    }
  return 0;
}
