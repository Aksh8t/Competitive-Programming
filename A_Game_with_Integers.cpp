#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        int igr;
        cin>>igr;
 
        if(igr %3 ==0 ){
            cout<< "Second"<<endl;
        }
        else{
            cout<< "First" <<endl;
        }
    }
}