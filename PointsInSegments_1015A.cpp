#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int l, r;
    int count[m + 2]={0};

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        count[l]++;
        count[r + 1]--;
    }
    
    for (int i = 1; i <= m; i++)
    {
        count[i] += count[i - 1];
    }
    vector<int> result;
    for(int i=1;i<=m;i++){
        if(count[i]==0) result.push_back(i);
    }
    cout<<result.size()<<endl;
    for(auto r : result) cout<<r<<" ";
    cout<<endl;
    

    return 0;
}