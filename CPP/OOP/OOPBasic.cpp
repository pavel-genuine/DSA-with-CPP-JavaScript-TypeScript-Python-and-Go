#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal
{

private:
    int height;

public:
    string name;
    void setHeight(int h)
    {
        height = h;
    }

    void setHeight(int h)
    {
        height = h;
    };

    int getHeight()
    {
        return height;
    }

    void animalSound()
    {
        cout << "call the sound";
    }
};

//defining method outside class
void Animal::setHeight(int h)
{
    height = h;
}

// Derived class :inheritance
class Dog : public Animal
{
public:
    string food;
    void animalSound()
    {
        cout << "barking";
    }
};

// mutilevel inheritance
class MyDog : public Dog
{
public:
    int age;
    //polymorphism
    void animalSound()
    {
        cout << "new barking";
    }
    MyDog(int age, string name, string food)
    {
        this->age = age;
        this->food = food;
        this->name = name;
        this->animalSound();
    }
};

int main()
{

    Animal myAimal;
    myAimal.name = "jerry";
    myAimal.setHeight(2);
    myAimal.getHeight();

    Animal thisAnimal();

    MyDog myDog(12, "jj", "bone");

    return 0;
}