#include <iostream>
#include <string>

using namespace std;

int main() {

    string operator_name;
    double add1;
    double add2;
    double sub1;
    double sub2;
    double div1;
    double div2;
    double mul1;
    double mul2;


    std::cout << "Do you want to add, subtract, multiply, or divide? \n";
    std::cin >> operator_name;

    if (operator_name == "add") {
        std::cout << "enter the first number \n";
        std::cin >> add1;

        std::cout << "enter the second number \n";
        std::cin >> add2;

        std::cout << add1 << " + " << add2 << " = " << (add1 + add2);


    }
    else if (operator_name == "subtract") {
        std::cout << "enter first number \n ";
        std::cin >> sub1;

        std::cout << "enter second \n ";
        std::cin >> sub2;

        std::cout << sub1 << " - " << sub2 << " = " << (sub1 - sub2);


    }

    else if (operator_name == "multiply") {
        std::cout << "enter first number \n ";
        std::cin >> mul1;

        std::cout << "enter second number \n";
        std::cin >> mul2;

        std::cout << mul1 << " * " << mul2 << " = " << (mul1 * mul2);

    }

    else if (operator_name == "divide") {
        std::cout << "enter first number \n ";
        std::cin >> div1;

        std::cout << "enter second number \n ";
        std::cin >> div2;

        std::cout << div1 << " / " << div2 << " = " << (div1 / div2);


    }

    else {

        std::cout << "invalid operator, please try again \n ";

    }

    return 0;
}