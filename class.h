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