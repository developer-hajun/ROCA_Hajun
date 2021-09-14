#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string stance;
    int ACE=0,count=0;
    getline(cin,stance);

    for(int i=0;i<=stance.size();i++){
        if(stance[i]=='<'){ 
            ACE=1;
            reverse(stance.begin()+count,stance.begin()+i);
        } 
        if(stance[i]=='>'){ 
            ACE=0; 
            count=i+1;
            continue;
        }
        if(ACE==1){
            continue; 
        }
        if(stance[i]==' '){ 
            reverse(stance.begin()+count,stance.begin()+i);
            count=i+1;
        }
        if(i==(stance.size())){
            reverse(stance.begin()+count,stance.begin()+i);
        }
    }
    cout << stance;
}