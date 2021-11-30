//
//  main.cpp
//  Friend2
//
//  Created by zhipeng jiang on 2021/11/30.
//

#include <iostream>
using namespace std;

class Student {
        
    
public:
    Student(char *name,int age,float score);
    friend void show(Student *stu);
private:
    char *m_name;
    int m_age;
    float m_score;
};

Student :: Student (char *name,int age,float score):m_name(name),m_age(age),m_score(score){
    
}

void show(Student *pstu){
    cout<<pstu->m_name<<"的年龄是 "<<pstu->m_age<<"，成绩是 "<<pstu->m_score<<endl;
}
int main(int argc, const char * argv[]) {
//    Student stu("小明", 15, 90.6);
//        show(&stu);  //调用友元函数
//        Student *pstu = new Student("李磊", 16, 80.5);
//        show(pstu);  //调用友元函数
    
    Student stu("小明",15,99.0);
    show(&stu);
    Student *pstu = new Student("sdf",17,80.5);
    show(pstu);
    return 0;
}
