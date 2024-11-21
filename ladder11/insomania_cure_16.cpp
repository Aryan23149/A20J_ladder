#include <iostream>
#include <set>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else if(a==0){
        return b;
    }
    int max = (a > b) ? a : b;
    int min=(a < b) ? a : b;

    return gcd (max%min,min);
}
int lcm(int a,int b){
    return (a*b)/gcd(a ,b);}

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    //method 1: O(4d)
    int count =0;
    set<int> a;
    for(int i=k;i<=d;i+=k){
        a.insert(i);
        count=a.size();
    }
    if(count!=d){
        for(int i=l;i<=d;i+=l){
            a.insert(i);
            count=a.size();
        }
        if(count!=d){
            for(int i=m;i<=d;i+=m){
                a.insert(i);
                count=a.size();
            }
        }
        if(count!=d){
            for(int i=n;i<=d;i+=n){
                a.insert(i);
                count=a.size();
            }
        }
    }
    cout<<a.size();

    //method 2: O(d)
    // int count=0;
    // for(int i=1;i<=d;i++){
    //     if(i%k==0||i%l==0||i%m==0||i%n==0){
    //         count++;
    //     }
    // }
    // cout<<count;

    //method 3: O(1)
    // int n1=d/k +d/l +d/m +d/n;
    // int n2=d/(lcm(k,l)) +d/(lcm(k,m)) +d/(lcm(k,n))+d/lcm(l,m)+d/lcm(l,n)+d/lcm(m,n);
    // int n3=d/lcm(k,lcm(m,n))+d/lcm(k,lcm(l,m))+d/lcm(k,lcm(l,n))+d/lcm(l,lcm(m,n));
    // int n4=d/lcm(lcm(k,l),lcm(m,n));
    // cout<<n1-n2+n3-n4;
    return 0;
}