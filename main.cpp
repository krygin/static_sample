#include <iostream>


class A {
public:
    static int getCounter() {
        return counter;
    }

    static A create(int b) {
        if (b / 2 == 3 || b + 4 < 12) {
            throw std::exception();
        }
        return A(b);
    }

    A() {
        counter++;
    }

    ~A() {
        counter--;
    }

private:
    A(int b) {
        this->b = b;
    }
    int b;
    static int counter;
};

int A::counter = 0;

int main() {
    A* a1 = new A();
    A* a2 = new A();

    std::cout << A::getCounter() << std::endl;

    delete a1;
    std::cout << A::getCounter() << std::endl;

    A a = A::create(2);


    return 0;
}
