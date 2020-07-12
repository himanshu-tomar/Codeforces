#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int english[n], german[n], math[n], history[n];
    for(int i=0;i<n;i++){
        //cout<<english[i]<<" "<<german[i]<<" "<<math[i]<<" "<<history[i]<<endl;
        cin>>english[i]>>german[i]>>math[i]>>history[i];
    }
    int total_marks[n];
    for(int i=0;i<n;i++){
        total_marks[i] = english[i]+german[i]+math[i]+history[i];
    }
    int Thomas_marks = total_marks[0];
    sort(total_marks,total_marks+n);
    int rank = 0;
    for(int i=n-1;i>=0;i--){
        rank++;
        if(total_marks[i] == Thomas_marks){
            
            break;
        }
    }
    cout<<rank<<endl;

    return 0;
}