#include "class.h"

void Car::info() {
    cout << "Створено об'єкт класу Car" << endl;
}

Car::Car() {
    name = "Шаблон";
    year = 1990;
    info();
}

Car::~Car() {
    cout << "Знищено об'єкт класу Car" << endl;
}

void Wolks::info() {
    cout << "Створено об'єкт класу Wolks" << endl;
}

Wolks::Wolks() {
    name = "Wolks";
    year = 2000;
    info();
}

Wolks::~Wolks() {
    cout << "Знищено об'єкт класу Wolks" << endl;
}

void BMW::info() {
    cout << "Створено об'єкт класу BMW" << endl;
}

BMW::BMW() {
    name = "BMW";
    year = 2005;
    info();
}

BMW::~BMW() {
    cout << "Знищено об'єкт класу BMW" << endl;
}

void Hybrid::info() {
    cout << "Створено об'єкт класу Hybrid" << endl;
}

Hybrid::Hybrid() {
    name = "Hybrid";
    year = 2010;
    info();
}

Hybrid::~Hybrid() {
    cout << "Знищено об'єкт класу Hybrid" << endl;
}

Electric::Electric() {
    name = "Electric";
    year = 2015;
    info();
}

Electric::~Electric() {
    cout << "Знищено об'єкт класу Electric" << endl;
}

void Electric::info() {
    cout << "Створено об'єкт класу Electric" << endl;
}

Diesel::Diesel() {
    name = "Diesel";
    year = 2020;
    info();
}

Diesel::~Diesel() {
    cout << "Знищено об'єкт класу Diesel" << endl;
}

void Diesel::info() {
    cout << "Створено об'єкт класу Diesel" << endl;
}
