//
//  main.cpp
//  Exception
//
//  Created by kotercy on 2021/6/25.
//

#include <iostream>
using namespace std;

void f1() throw (int) {
    cout<<"\n f1() Start ";
    throw 100;
    cout<<"\n f1() End ";
}

void f2() throw (int) {
    cout<<"\n f2() Start ";
    f1();
    cout<<"\n f2() End ";
}

void f3() throw (int) {
    cout<<"\n f3() Start ";
    try {
        f2();
    }
    catch(int i) {
        cout<<"\n Caught Exception: "<<i;
    }
    cout<<"\n f3() End";
    
}
class Test {
  static int count;
  int id;
public:
  Test() {
    count++;
    id = count;
    cout << "Constructing object number " << id << endl;
    if(id == 4)
       throw 4;
  }
  ~Test() { cout << "Destructing object number " << id << endl; }
};
  
int Test::count = 0;

int main(int argc, const char * argv[]) {
    f3();
/*堆栈展开的意义
    f3() Start
    f2() Start
    f1() Start
    Caught Exception: 100
    f3() End*/
    
    
    try {
        Test array[5];//先被
    } catch (int i) {
        cout << "Caught " << i << endl;
    }
    /**
     Constructing object number 1
     Constructing object number 2
     Constructing object number 3
     Constructing object number 4
     Destructing object number 3
     Destructing object number 2
     Destructing object number 1
     Caught 4
     先被构造的，后被析构
     */
    getchar();
    return 0;
}
