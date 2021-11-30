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


class Base {
public:
    virtual void print (){
        cout<< "print base class" <<endl;
    }
    
    void show(){
        cout<< "show base class" <<endl;
    }
};

class Derived : public Base {
public:
    void print(){//这里的print函数已经是带了virtual关键字修饰的了，也可以用virtual print ()来显式声明
        cout<< "print derived class" <<endl;
    }
    
    void show(){
        cout<< "show derived class" <<endl;
    }
};

class Point {
private:
    int x;
    int y;
public:
    Point(int x1,int y1) {
        x = x1;
        y = y1;
    }
    
    Point(Point &p) {
        x = p.x;
        y = p.y;
    }
    
    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }
    
};

class Original {
public:
    //compiler "declares" constructor;
};

class A {
public:
    A() {
        cout << "A Constructor" << endl;
    }
    
    int size;
};

class B : public A {
    
};

class C :public A {
public:
    C(){
        cout << "C Constructor" << endl;
    }
};

class D {
public:
    D(){
        cout << "D Constructor" << endl;
    };
    
private:
    A a;
};

class Destructor {
    //析构函数私有
public:
    int a;
    Destructor() {
        a = 100;
    }
private:
    ~Destructor() {
        
    };
};
int main(int argc, const char * argv[]) {
    Child obj1;
    obj1.id_p  = 7;//获得父类的属性，
    obj1.id_c = 91;
    cout << "Child id is " <<  obj1.id_c << endl;
    cout << "Parent id is " <<  obj1.id_p << endl;
    obj1.personTestFunc();//获得父类公开的方法
    
    Base *bptr;//指针
    Derived d;
    bptr = &d;
    
    bptr->print();//虚函数，在运行时间绑定 --print derived class
    bptr->show();//实函数，载编译时绑定 -- show base class
    
    Point p(10,20);
   Point p1 = p;
    
    Original original;
    B b;
    C c;
    D de;
    /*打印的结果如下
    A Constructor
    A Constructor
    C Constructor
    A Constructor
    D Constructor
     构建对象时
     没有重写构造方法，会调用父类的构造方法
     有重新构造方法，会先调用父类构造方法，再调用自身的构造方法
     如果类本身有其他类的成员，会先调用属性的构造方法，然后调用自己的构造方法
     */
    
//    Destructor t;错误：Variable of type 'Destructor' has private destructor
    //Destructor *t;//The above program works fine. There is no object being constructed, the program just creates a pointer of type “Destructor *”, so nothing is destructed.
    Destructor* t = new Destructor;//因为内存分配堆区，内存由程序员自己管理，所以不会报错：https://www.geeksforgeeks.org/private-destructor/
    
    /*
     try: represent a block that can throw an exception
     catch:represent a block of code that is executed when a particular exception is throw
     throw:used to throw an exception,Also used to list the exceptions that a function throws,but does not handle itself
     */
    int x = -1;
    cout << "Before try \n";
    try {
        cout << "Inside try \n";
        if (x < 0) {
            throw x;
        }
    } catch (int x) {
        cout << "Exception Caught \n";
    }
    cout << "After catch (Will be executed) \n";
    
    
    try {
        throw 10;
    } catch (char *excp) {
        cout << "Caught" <<excp;
    }
    
    catch(...) {//能捕捉所有的异常
        cout << "Default Exception \n";
    }
    
    //如果跑出一个异常，没有catch语句抓住这个异常，那么程序就会crash
    try {
        throw 'a';
    } catch (int x) {
        cout << "Caught";
    }
    catch(char a) {
        cout << "i have catch a new exception";
    }
    
    //
    
    return 0;
}

