#include <iostream>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

priority_queue<int> g;
priority_queue<int> b;
vector<int > vgreen;
vector<int > vblue;

int main(void){
    int i, n, t, bore = 0;

    int x, inter[91];
    cin >> t;

    for(i=0; i<t; i++){
        cin>> x;
        inter[x] = 1;
    }
    for(i=1; i<=90; i++){
        if(inter[i] != 1){
            bore++;
        }
        else{
            bore = 0;
        }
        if(bore == 15){
            break;
        }
    }
    if(i==91){
        i = 90;
    }
    cout << i << endl;


   return 0;
}
