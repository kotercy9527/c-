//
//  main.cpp
//  c++ class
//
//  Created by zhipeng jiang on 2021/6/3.
//

#include <iostream>
#include "Person.hpp"

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
    

    string str;
    getline(cin, str);//监听键盘输入的字符串
    cout <<"the initial string is "<<endl;
    cout<<"str"<<endl;
    str.push_back('s');//在字符串末尾添加s
    cout << "The string after push_back operation is : ";
      cout << str << endl;
    str.pop_back();//删除字符串最后面的字节
    // Displaying string
     cout << "The string after pop_back operation is : ";
     cout << str << endl;
    
    return 0;
}
