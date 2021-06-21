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
    int id;
    
public:
    int age;
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
    
};
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
    
    
    return 0;
}
