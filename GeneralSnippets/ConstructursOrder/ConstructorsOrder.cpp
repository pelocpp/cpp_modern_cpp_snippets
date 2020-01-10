#include <iostream>
#include <memory>

// =====================================================================================
// Weak Pointer
// =====================================================================================

namespace OrderConstructorInvocations {

    class Something {
    public:
        Something() { std::cout << "c'tor Something" << std::endl; }
        virtual ~Something() { std::cout << "d'tor Something" << std::endl; }
    };

    class Base {
    public:
        Base () { std::cout << "c'tor Base" << std::endl; }
        virtual ~Base() { std::cout << "d'tor Base" << std::endl; }
    };

    class Derived : Base {
    public:
        Derived() { std::cout << "c'tor Derived" << std::endl; }
        virtual ~Derived() { std::cout << "d'tor Derived" << std::endl; }

        void printHello() const {
            std::cout << "Hello!" << std::endl;
        }

    private:
        Something m_something;
    };


    void test_01() {

        Derived myDerived;
        myDerived.printHello();
    }
}

int main_order_constructor_invocations()
{
    using namespace OrderConstructorInvocations;
    test_01();
    return 0;
}

// =====================================================================================
// End-of-File
// =====================================================================================
