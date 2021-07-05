//
//  main.cpp
//  Friend
//
//  Created by kotercy on 2021/7/5.
//

#include <iostream>

using namespace std;

class Address;

class Student {
public:
    Student(char * name, int age, float score);
    friend void show(Student *pstu);//这个就是友元函数
    friend void showAgain(Student stu);
    friend void showNoParameter();
    void showAddress(Address *address);
private:
    char *name;
    int age;
    float score;
    
};

class Address {
public:
    Address(char *province, char *city, char *district);
    friend void Student::showAddress(Address *address);
private:
    char *m_province;
    char *m_city;
    char *m_district;
    
};



Student::Student(char *name, int age,float score):name(name),age(age),score(score) {
    
}

void show (Student *pstu) {
    pstu->age = 100;
    cout<<pstu->name<<"的年龄是 "<<pstu->age<<"，成绩是 "<<pstu->score<<endl;
}

void showAgain(Student stu) {
    cout<<stu.name<<"的年龄是 "<<stu.age<<"，成绩是 "<<stu.score<<endl;
}

void showNoParameter() {
//    cout<<name<<"的年龄是 "<<sage<<"，成绩是 "<<stu.score<<endl;
}

Address::Address(char *privince, char *city, char *district) {
    m_province = privince;
    m_city = city;
    m_district = district;
}

void Student::showAddress(Address *addr) {
    cout<<name<<"的年龄是 "<<age<<"，成绩是 "<<score<<endl;
    cout<<"家庭住址："<<addr->m_province<<"省"<<addr->m_city<<"市"<<addr->m_district<<"区"<<endl;
}

int main(int argc, const char * argv[]) {
    Student stu = Student("Jhon", 19, 95);
    show(&stu);
    showAgain(stu);
    Address addr = Address("湖南", "长沙", "芙蓉");
    stu.showAddress(&addr);
    return 0;
}
