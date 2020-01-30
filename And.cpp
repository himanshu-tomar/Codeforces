#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> counter;
    int n, x;
    cin >> n >> x;
    int temp, op_value;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        counter[temp]++;
        if (counter[temp] > 1)
        {
            cout << 0 << endl;
            return 0;
        }
    }

    for (auto i = counter.begin(); i != counter.end(); i++)
    {
        int key = i->first;
        op_value = key & x;
        if(op_value != key && counter[op_value]>0){
            cout<<1<<endl;
            return 0;
        }
    }
    for(auto i=counter.begin(); i!=counter.end(); i++){
        int key = i->first;
        op_value = key & x;
        if(op_value!=key) counter[op_value]++;
        if(counter[op_value]>1){
            cout<<2<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;    
    return 0;
}