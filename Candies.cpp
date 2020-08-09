#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    // sum = x*(2^(k-1) - 1)
    // given k>1
    // so x = n/(2^(k-1) - 1)   if n%(2^(k-1) - 1) == 0
    int temp;
    int x;
    for(int k=2;;k++){  
      temp = static_cast<int>(pow(2,(k)));   
      temp--;
      if(n%temp == 0){
        x = n/temp;
        break;
      }
    }
    cout<<x<<endl;
    
  }
  
  return 0;
} 
