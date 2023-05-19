#ifndef KONTENER_PROJECT3_PLANE_H
#define KONTENER_PROJECT3_PLANE_H

#include <iostream>
using namespace std;

class Plane {
public:
    ~Plane();
    Plane(string type, string manufacturer);
    friend ostream& operator<<(ostream& coutj, Plane& s);
    string information();
    ostream& print(ostream& s);
protected:
    string m_type;
    string m_manufacturer;
    static int id;
};


#endif //KONTENER_PROJECT3_PLANE_H
