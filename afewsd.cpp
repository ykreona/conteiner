#include <iostream>
#include <algorithm>

namespace my{
    template<typename T>class vector{
        T * array = nullptr;
        size_t _size = 0;
    public:

        auto push_back(T val){
            auto newArray = new T[_size + 1];
            std::ranges::copy_n(array, _size,newArray);
            newArray[_size] = val;
            delete array;
            array = newArray;
            _size++;
        }

        auto print(){
            for(int i = 0; i < _size; i++)
                std::cout<<array[i]<< " ";
            std::cout<<'\n';
        }

        auto size(){
            return _size;
        }

        ~vector(){
            delete array;
        }
    };
}

//class Pass{
//public:
//
//    Pass(string name1, int number1) : name(name1), number(number1){};
//
//
//    auto getName()->string{
//        return name;
//    }
//
//    auto getNumber()->int{
//        return number;
//    }
//
//private:
//    int number;
//    string name;
//};
//
//struct Person{
//
//    std::vector<Pass> number;
//
//    auto add(Pass i) ->void{
//        number.push_back(i);
//    }
//
//    auto show()->void {
//        for(auto el : number)
//            cout<< el.getName() << " " << el.getNumber() << " ";
//    }
//     auto info() ->string {
//        return "Person";
//    }
//};
//

int main() {
    my::vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.print();
    std::cout<< num.size();

//    Person p2 = Person();
//    p2.add(Pass("jbbb", 1));
//    Person p1 = Person();
//    p1.add(Pass("njud", 4));
//    p1.add(Pass("jbfbff", 3));
//    p1.show();
//    cout<<"_______________________\n";
//    p2.show();





//
//    std::vector<Person> p = {  Person()};
//    for(int i = 0 ; i < 5; i++)
//        p.push_back(Person());
//    for(auto el : p)
//        cout << el.info() << " ";


//    int a = 10;
//    int &b = a;
//    int *c = nullptr;
//    c = &a;
//    b = 20;
//    cout<< a << " " << b << " " << *c;
    return 0;
}
