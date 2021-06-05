//
//  Person.cpp
//  c++ class
//
//  Created by zhipeng jiang on 2021/6/4.
//

#include "Person.hpp"
#include <iostream>
using namespace std;

class Person {
public:
    char *name;
    int age;
    float score;
    void say(){
        cout<<name<<"的年龄是"<<age<<"，成绩是"<<score<<endl;
    };
    
private:
    void listen(char *voice) {
        cout<< voice <<endl;
    }
};
