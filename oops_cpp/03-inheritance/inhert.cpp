#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog dog;
    dog.speak(); // Inherited from Animal
    dog.bark();  // Specific to Dog
    Cat cat;
    cat.speak(); // Inherited from Animal
    cat.meow();  // Specific to Cat

    return 0;
}