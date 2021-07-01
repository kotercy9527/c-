//
//  main.cpp
//  encloseClass
//
//  Created by kotercy on 2021/7/1.
//

#include <iostream>
//概念：包含成员对象的类，叫做封闭类
using namespace std;

//轮胎类
class Tyre {
public:
    Tyre(int radius,int width);
    void show() const;
    static int num;//静态成员变量，属于类，不属于任何对象
private:
    int m_radius;
    int m_width;
};

Tyre::Tyre(int radius,int width):m_radius(radius),m_width(width) {
  
}

void Tyre::show () const {
    //    cout << "轮毂半径：" << this->m_radius << "吋" << endl;
    //    cout << "轮胎宽度：" << this->m_width << "mm" << endl;
        cout << "轮毂半径：" << m_radius << "吋" << endl;
        cout << "轮胎宽度：" << m_width << "mm" << endl;
}

//
class Engine {
public:
    Engine (float displacement  = 2.0);
    void show()const;
private:
    float m_diplacement;
};

Engine::Engine(float dispacement):m_diplacement(dispacement) {
    
}
void Engine::show() const{
    cout << "排量：" << m_diplacement << "L" << endl;
}

class Car {
public:
    Car(int price,int radius,int width);
    void show()const;
    
//private:
    int m_price;
    Tyre m_tyre;
    Engine m_engine;
};

Car::Car(int price,int radius,int width):m_price(price),m_tyre(Tyre(radius, width)) {
    
}

int Tyre::num;//
void Car::show() const {
    cout << "价格：" << this->m_price << "￥" << endl;
    this->m_tyre.show();
    this->m_engine.show();
}

int main(int argc, const char * argv[]) {
    Car car(100000,100,200);
    car.show();
    car.m_tyre.num = 100;
    return 0;
}
