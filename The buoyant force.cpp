#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double y = 62.4;
    double w;
    double r;
    double v;
    double f;
    cout << "Enter the weight of the object (In pounds):" << endl;
    cin >> w;
    cout << "Enter the radius (In feet):" << endl;
    cin >> r;
    while ((w>0)&&(r>0)){
       v =(4/3)*(M_PI)*(pow(r,3));
       f = v*y;
       cout << "The Buoyant force = " << f << endl ;
       if (f>w){
        cout << "It Will Float";

    }
       else{
        cout << "It Will Sink";

    }
    }
    cout << "Invalid number.";
    return 0;
    }


