#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <vector>
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> value;
    int count,num;
    cin >> count;
    for(int i=0;i<count;i++){
        cin>>num;
        value.push_back(num);
    }
    for(int i=0;i<value.size();i++){
        for(int j=i;j<value.size();j++){
            if(value[i]<value[j]){
                cout<<value[j]<<" ";
                break;
            }
            if(j==value.size()-1){
                cout<<-1<<" ";
            }
        }
    }
}