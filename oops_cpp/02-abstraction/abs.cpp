#include <iostream>
using namespace std;

class Coffee
{
protected:
    virtual void prepareCoffee() = 0;
    virtual void serveCoffee() = 0;

public:
    void makeCoffee()
    {
        prepareCoffee();
        serveCoffee();
    }
};

class Espresso : public Coffee
{
protected:
    void prepareCoffee() override
    {
        cout << "Preparing Espresso Coffee" << endl;
        cout << "Grinding coffee beans" << endl;
        cout << "Heat water to ~90C" << endl;
        cout << "Brewing the coffee" << endl;
    }
    void serveCoffee() override
    {
        cout << "Serving Espresso in small cup" << endl;
    }
};

class Latte : public Coffee
{
protected:
    void prepareCoffee() override
    {
        cout << "Preparing Latte Coffee" << endl;
        cout << "Grinding coffee beans" << endl;
        cout << "Heat and brew espresso" << endl;
        cout << "Steam milk until frothy" << endl;
        cout << "mix milk with espresso" << endl;
    }
    void serveCoffee() override
    {
        cout << "Serving Latte with a little foam on top" << endl;
    }
};

int main()
{

    Espresso espresso;
    Latte latte;
    cout << "Making Espresso Coffee:" << endl;
    espresso.makeCoffee();
    cout << endl;
    cout << "Making Latte Coffee:" << endl;
    latte.makeCoffee();

    return 0;
}