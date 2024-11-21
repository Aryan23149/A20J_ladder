#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int l_open=0,r_open=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]==1){
            l_open++;
        }
        if(arr[i][1]==1){
            r_open++;
        }
    }
    int answer=0;
    cout<<l_open<<" "<<r_open<<endl;
    if(l_open>n/2){
        answer+=n-l_open;
    }
    else{
        answer+=l_open;
    }
    if(r_open<n/2){
        answer+=r_open;
    }
    else{
        answer+=n-r_open;
    }
    cout<<answer;
}