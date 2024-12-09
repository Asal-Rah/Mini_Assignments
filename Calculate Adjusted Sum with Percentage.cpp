#include <iostream>
using namespace std;
int main() {
    float a,b,c,d;
    cin>>a>>b>>c;
    d=(150*a+50*b)*(1+c/100);
    cout.precision(2);
    cout<<fixed<<d<<endl;
    return 0;

}