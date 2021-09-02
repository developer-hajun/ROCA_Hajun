#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string stance;
    vector<char> result;
    int orders=0,cursor;
    char order,value;
    cin >> stance;

    for(int i=0;i<stance.length();i++){
        result.push_back(stance[i]);
    }
    cursor=result.size();

    cin >> orders;
    for(int i=0;i<orders;i++){
        cin >> order;
        if(order=='L'){
            if(cursor!=0){
                cursor--;
            }
        }
        else if(order=='D'){
            if(cursor!=result.size()){
                cursor++;
            }
        }
        else if(order=='B'){
            if(cursor!=0){
                result.erase(result.begin()+(cursor-1));
                cursor--;
            }
        }
        else if(order=='P'){
            cin >> value;
            result.insert(result.begin()+(cursor),value);
        }
        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
        cout<< endl<<"case 1" <<endl;
    }
}
