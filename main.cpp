#include <iostream>
using namespace std;

template <typename T> class Kontener{
    T * arr = nullptr;
    size_t rozmiar = 0;
public:
    auto push_back(T elem){
        auto newArray = new T[rozmiar + 1];
        newArray[rozmiar] = elem;
        delete arr;
        arr = newArray;
        rozmiar++;
        cout << "Pushed back" << endl;
    }

    auto print(){
        for(int i = 0; i < rozmiar; i++)
            std::cout<<arr[i]<< " ";
        std::cout<<'\n';
    }

    auto size(){
        return rozmiar;
    }

    ~Kontener(){
        cout << "~Kontener called\n";
        delete arr;
    }
};

int main() {
    Kontener<int> num;
    num.push_back(5);
    num.print();

    return 0;
}

//1.kontener zaprojektowany jest z wykorzystaniem szablonow
//2.kontener pozwala na dodawanie i usuwanie dowolnego obiektu
//3.-||- na zamiane kolejnosci dwoch obiektow
//4.zrealizowany na liscie dwukierunkowej
//5.nie może mieć z góry określaną maks liczby zawartych obiektów
//6.powinie mieć możliwość zapisu wszystkich obiektów do pliku i odczytu.
//(w obiektach zaimpl. operator strumieniowy)
//7.???
//8.operator przypisania =
//9.operator porównania ==
//10.dwie dodatkowe metody
//11.blędy obslugiwane wyjątkami
//12.bez biblioteki stl!
