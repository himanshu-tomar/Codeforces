#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPrime(int n){
    int count = 0;
    int limit = static_cast<int>(sqrt(n));
    bool flag = true;
    for(int i=2;i<=limit;i++){
        if( n%i == 0 ){
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
  int n;
  cin>>n;
  // m = (p-1)/n  if((p-1)%n==0)
  int m;
  if(n==1){
    cout<<3<<endl;      
  } 

  else if(n&1){ //if n is odd
    for(int p = (n+1); ; p+=2){
        if((p-1)%n == 0){
            m = (p-1)/n;
            break;
        }
    }
    cout<<m<<endl;
  }
  else{ // else n is even
    for(int p = (n+1); ; p+=2){
        if(!isPrime(p)){
            if((p-1)%n == 0){
                m = (p-1)/n;
                break;
            }   
        }
    }
    cout<<m<<endl;
  }
  return 0;
} 
