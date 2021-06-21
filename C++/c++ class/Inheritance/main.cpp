//
//  main.cpp
//  Inheritance
//
//  Created by zhipeng jiang on 2021/6/22.
//

#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/inheritance-in-c/

class Parent {
public:
    int id_p;
    void personTestFunc() {
        
    }
};
/*
Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.

Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
 
Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class.
 */
class Child: public Parent {//注意继承的语法,这里的public 可以用其他关键字替换
public:
    int id_c;
    void childTestFunc (){
        
    }
};


int main(int argc, const char * argv[]) {
    Child obj1;
    obj1.id_p  = 7;//获得父类的属性，
    obj1.id_c = 91;
    cout << "Child id is " <<  obj1.id_c << endl;
    cout << "Parent id is " <<  obj1.id_p << endl;
    obj1.personTestFunc();//获得父类公开的方法
    return 0;
}
