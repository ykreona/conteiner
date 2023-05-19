#include "Plane.h"

Plane::~Plane() { }

Plane::Plane(std::string type, std::string manufacturer){
    m_type = type;
    m_manufacturer = manufacturer;
}

string Plane::information(){
    cout << "Producer: " << m_manufacturer << endl;
    cout << "Type: " << m_type << endl << "Id: " << id << endl;
    return {};
}

ostream &Plane::print(std::ostream &s) {
    s << "Producer: " << m_manufacturer << endl;
    return s;
}
