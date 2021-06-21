//
//  main.cpp
//  Pointer
//
//  Created by zhipeng jiang on 2021/6/12.
//

#include <iostream>
using namespace std;
class Person {
    char name[20];
    
    
public:
    int age;
    int id;
    void getDetails(){
        
    };
//    方法重载
    int sum(int a,int b) {
        return a+b;;
    };
    
    int sum(int a,int b,int c) {
        return a + b + c;
    }
    
    //操作符重载
    Person operator+(Person p) {
        Person q;
        q.age = this->age + p.age;
        return q;
    };
    
    //在类当中没有方法实现，而在类外部可以实现方法;
    void printName();
    
    //默认的构造方法
    Person () {
        id = -1;
    }
    
    //参数构造方法
    Person (int x) {
        id = x;
    }
    
};

//在函数类外部实现类中间定义的方法，需要用到“：：”语法，注意，这个方法不能在类里面已经实现
void Person::printName() {
    cout << "method implement outside class scope" <<endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    Person pl;
   int a =  pl.sum(1, 2);
    int b = pl.sum(1, 2, 3);
    cout << a << "------" << b << endl;
    
    pl.age = 100;
    
    Person pl2;
    pl2.age = 50;
    Person pl3 = pl +pl2;
    cout << pl3.age << endl;
    
    pl3.printName();
    
    Person obj1;
    cout << "obj1 id is: " <<obj1.id << endl;
    
    Person obj2(10);
    cout << "obj2 id is: " <<obj2.id << endl;
    
    Person obj3 (obj2);//拷贝构造函数，这里的obj2和参数构造函数一样，也要用括号括起来哦
    cout << "obj3 id is: " <<obj3.id << endl;
    return 0;
}
