#include <iostream>
#include <string>
#include "Dictionary.hpp"

int main() {

    Dictionary<int,int> d;
    d.add(5,1);
    d.add(4,2);
    d.add(3,2);
    d.add(2,2);
    d.add(1,3);

    //d->print(std::cout);
    std::cout << "Dictionary of INT INT " << std::endl;
    std::cout << "Value of key 3: " << d.getValue(3) << std::endl;
    std::cout << "Elements: " <<d.getCount() << std::endl;
    std::cout << "Removing an element: " << std::endl;
    d.removeByKey(3);
    std::cout << "Elements: " <<d.getCount() << std::endl<< std::endl;;

    Dictionary<std::string,int> d2;
    d2.add("Yo",1);
    d2.add("Sup",2);
    d2.add("Dude",2);
    d2.add("nice",2);

    std::cout << "Dictionary of STRING INT " << std::endl;
    std::cout << "Value of key YO: " << d2.getValue("Yo") << std::endl;
    std::cout << "Elements: " <<d2.getCount() << std::endl;
    std::cout << "Adding an element: " << std::endl;
    d2.add("Kewl", 42);
    std::cout << "Elements: " <<d2.getCount() << std::endl;
    return 0;
}