#include <iostream>
using namespace std;
int main()
{
  int k,n;
  cin>>n>>k;
  //int q=0;
  int i=0;
  int t=240;
  for(i=1;i<=n;i++){
      t-=(5*i);
      if(t<k) break;
  }
  cout<<i-1<<endl;
  return 0;
}
