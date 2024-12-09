#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int y1,y2,y3;
    y1=x1/m;
    y2=(x2+(x1%m))/m;
    y3=(x3+((x2+x1)%m))/m;
    cout<<y1<<"\t"<<y2<<"\t"<<y3;

    return 0;
}