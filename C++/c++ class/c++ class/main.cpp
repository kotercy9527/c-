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

class Test {
    int a;
public:
    Test(){
        a = 1;
    }
    void func (int a) {
        cout << a<<endl;
        
    }
    
    void func1 (int a) {
        cout << this->a<<endl;//这里用->操作符的原因是当前对象是一个指针，如果是不是指针，而是类似结构体，那么就要使用.语法
    }
};

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
    
/*
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
     cout << str << endl;*/
    
    string str = "geeksforgeeks is for geeks";
    cout << "the initial string is:"<<endl;
    cout << str << endl;
    str.resize(13);
    cout << "The string after resize operation is : ";
    cout << str << endl;
    
    Test obj;
    int k = 3;
    obj.func(k);//打印的是形参
    obj.func1(k);//打印的是对象本身的值
    
    
    const char *color[4] = {"Blue","Red","Orige","Yellow"};
    for (int i = 0; i < 4; i++) {
        std::cout <<color[i]<<"\n";
//        cout <<color[i]<<"\n";
    }
    return 0;
}
