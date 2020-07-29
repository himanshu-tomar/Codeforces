#include <iostream>
using namespace std;
 
 
int main()
{
  int n;
  cin>>n;
  if(n%2==0){
    int temp = n/2;
    if(temp&1){
        cout<<(n/2)-2<<" "<<(n/2)+2<<endl;
    } 
    else
        cout<<(n/2)-1<<" "<<(n/2)+1<<endl;
  }
  else{
    cout<<n/2<<" "<<(n/2)+1<<endl;
  }
  return 0;
}