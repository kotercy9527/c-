//
//  main.cpp
//  c++ class
//
//  Created by zhipeng jiang on 2021/6/3.
//

#include <iostream>
using namespace std;

class Marks {
public:
    static int studentNumber;
    int engMarks;
    int mathsMarks;
    int phyMarks;
    
public:
    Marks() {
        ++studentNumber;
    }
    
   void trySomething(){
        
    }
};

int Marks::studentNumber = 0;

void findSize (int arr[]) {
    cout <<sizeof(arr)<<endl;//指针占用八个字节
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Marks obj1;
    obj1.engMarks = 50;
    obj1.mathsMarks = 80;
    obj1.phyMarks = 90;
    
    Marks obj2;
    obj2.engMarks = 80;
    obj2.mathsMarks = 60;
    obj2.phyMarks = 85;
    
    // displaying marks for first object
    cout << "Marks for first object:\n";
    cout << Marks::studentNumber << endl;
    cout << obj1.engMarks << endl;
    cout << obj1.mathsMarks << endl;
    cout << obj1.phyMarks << endl;
    
    // displaying marks for second object
    cout << "Marks for second object:\n";
    cout << Marks::studentNumber << endl;
    cout << obj2.engMarks << endl;
    cout << obj2.mathsMarks << endl;
    cout << obj2.phyMarks << endl;
    
    char sample[] = "GeekForGeek";
    cout << sample << "-A computer science portal for geeks"<<endl;
    
    
    int a[10];
    cout <<sizeof(a)<<endl;//数组大小有数组元素个数和数组元素所占内存大小决定
    findSize(a);
    
    return 0;
}
