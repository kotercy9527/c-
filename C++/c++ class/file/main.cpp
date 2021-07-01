//
//  main.cpp
//  file
//
//  Created by kotercy on 2021/6/29.
//

#include <iostream>
#include <fstream>

using namespace std;
class Student {
private:
    char *m_name;
    int m_age;
    float m_score;
    const int agg;
    
public:
    void setname(char *name);
    void setage(int age);
    void setscore(float score);
    void show();
    Student();
    Student(int agg);
    Student(char *name,int age,float score);
};

void Student::setname(char *name) {
    m_name = name;
}

void Student::setage(int age) {
    m_age = age;
}

void Student::setscore(float score) {
    m_score = score;
}

void Student::show() {
    if (m_name ==NULL || m_age <= 0) {
        cout << "成员变量还没初始化";
    } else
        cout <<m_name<<"的年龄是"<<m_age<<",成绩是"<<m_score<<endl;
}

Student :: Student(int agg) :agg(agg){
    m_name = NULL;
    m_age = 0;
    m_score = 0;

}

/*
 构造函数重载
Student :: Student(char *name,int age,float score) {
    m_name = name;
    m_age = age;
    m_score = score;
}
 */


Student ::Student(char *name,int age,float score):m_name(name),m_age(age),m_score(score) {
    //todo
    
}

int main(int argc, const char * argv[]) {
    Student stu("小米姑娘",15,95.5f);
    stu.show();
    
    
    Student *pstu = new Student();
    pstu->show();
    pstu->setname("礼花");
    pstu->setage(16);
    pstu->setscore(98);
    pstu->show();
    
    return 0;
}
