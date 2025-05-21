#pragma once

using namespace std;

#include <iostream>

class Car {
    protected:
        string name;
        int year;

    public:
        Car();
        virtual ~Car();
        virtual void info();
//Коли ти видаляєш об’єкт через вказівник на базовий клас 
//(Car* ptr = new Hybrid(); delete ptr;), без віртуального деструктора 
//викличеться тільки базовий деструктор, а ресурси похідного класу можуть 
//не очиститися — утечка пам’яті або непередбачена поведінка.
//Тому в базовому класі деструктор має бути virtual, 
//щоб викликалися деструктори по всій ієрархії.

//Якщо базовий деструктор — віртуальний, 
//то похідний автоматично вважається перевизначенням (хоча override і не ставиш).
};

//Ключове слово virtual перед public при наслідуванні означає: 
//"я хочу, щоб у підсумку була лише одна копія базового класу, навіть якщо успадковують кілька гілок".

class Wolks : virtual public Car {
public:
        Wolks();
        ~Wolks() override;
        void info() override;
};

class BMW : virtual public Car {
    public:
        BMW();
        ~BMW() override;
        void info() override;
};

class Hybrid : public Wolks, public BMW {
    public:
        Hybrid();
        ~Hybrid() override;
        void info() override;
};

class Electric : public Hybrid {
    public:
        Electric();
        ~Electric() override;
        void info() override;
};

class Diesel : public Hybrid {
    public:
        Diesel();
        ~Diesel() override;
        void info() override;
};

class Petrol : public Hybrid {
    public:
        Petrol();
        ~Petrol() override;
        void info() override;
};

class MegaHybrid : public Electric, public Diesel, public Petrol {
    public:
        MegaHybrid();
        ~MegaHybrid() override;
        void info() override;
};

