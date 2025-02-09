#include<iostream>
using namespace std;

int main(){
    int T;
    cin>> T;
    
    while(T--){
        int N;
        cin>> N;
        
        if(N%2 == 0){
            cout<< "even" <<endl;
        } else {
            cout << "odd" <<endl;
        }
    }
    
    return 0;
}