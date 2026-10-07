#include <iostream>
using namespace std;
#include <numbers>
class Volume{
    public:
    int l ,h, w,r,rec_l,cy_h;
    double volume;

    void vol1(int l){
        volume = l*l*l;
        cout<<" volume of cube-> "<<volume<<endl;
    }
    void vol1(int rec_l, int w, int h ){
        volume = rec_l*w*h;
        cout<<" volume of reactangle-> "<<volume<<endl;
    }
    void vol1(int r,int cy_h){
        volume=std::numbers::pi*(r*r)*cy_h;
        cout<<" volume of cylinder-> "<<volume<<endl;
    }
   

};
int main(){
    Volume v;
    v.vol1(10);
    v.vol1(5,5,5);
    v.vol1(10,5);
}
