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

class Child: public Parent {//注意继承的语法
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
