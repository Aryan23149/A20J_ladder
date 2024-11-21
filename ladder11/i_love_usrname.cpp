#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=arr[0];
    int amazing_count=0;
    if(n==1){
        cout<<0;
    }
    else{
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                amazing_count++;
                max=arr[i];
            }
            else if(arr[i]<min){
                amazing_count++;
                min=arr[i];
            }
        }
        cout<<amazing_count;
    }
    return 0;
}
// 5
// 100 50 200 150 200
// 10
// 4664 6496 5814 7010 5762 5736 6944 4850 3698 7242