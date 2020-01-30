#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=x[i];
        sum2+=y[i];
    }
    if(sum2>sum1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}