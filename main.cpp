#include<bits/stdc++.h>
using namespace std;
double division2(int sum){
    return (sum/2);
}
double multiplication(double d,int h){
    return(d*h);
}
int main(){
    int a,b;
    cin>>a>>b;
    int h;
    cin>>h;
    int sum=addition(a,b);
    double div=division2(sum);
    double area=multiplication(div,h);
    cout<<"trepezium area="<<area;
}
