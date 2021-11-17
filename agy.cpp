#include <iostream>

using namespace std;

class Dimenzio {
public:
    double x;
    double y;
    double z;

    Dimenzio(double x, double y, double z) : x(x), y(y), z(z) {}

};

class Agy {
    Dimenzio meret;
    string anyag;
    double ar;

public:
    Agy(const Dimenzio& meret, const string& anyag, double ar) : meret(meret), anyag(anyag), ar(ar) {
        cout << "Agy letrehozva!" << endl;
    }
    Agy(double x, double y, double z, const string& anyag, double ar): Agy(Dimenzio(x,y,z), anyag,ar) {
      cout << "Az agy letrehozasa egy extra lepest igenyelt!" << endl;
    }
};
