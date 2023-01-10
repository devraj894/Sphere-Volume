#include<iostream>
using namespace std;
class Sphere{
    private:
    int radius;
    
    public:
    void calcVol(){
        cout<<"***Calculation of Volume for a Sphere***"<<endl;
        cout<<"Enter the radius of sphere : ";
        cin>>radius;

        float volume = (4*3.14*radius*radius*radius)/3;
        cout<<"Volume of sphere is : "<<volume<<endl;

        cout<<"-------Task Completed :-)-------";
    }
};
int main(){
    Sphere s;
    s.calcVol();

    return 0;
}