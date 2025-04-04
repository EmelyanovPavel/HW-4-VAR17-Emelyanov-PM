//Topic 4 - Recurrent relationships
//Write a program that calculates the first n-elements of a given sequence
//17) b1=4, b2=2, bn = (b_n-2/n) + (n^2/b_n-1)
 
#include <iostream>
#include <iomanip>

void task17()
{
    int n;
    std::cout << "Enter a elements number: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Incorrect input\n";
    }

    //Initial values
    double b1 = 4.0;
    double b2 = 2.0;

    std::cout << "Sequence:\n";

    if (n >= 1) std::cout << "b1 = " << b1 << std::endl;
    if (n >= 2) std::cout << "b2 = " << b2 << std::endl;

    for (int i = 3; i <= n; ++i) {
        double bn = (b1 / i) + ((i * i) / b2);
        std::cout << "b" << i << " = " << std::fixed << std::setprecision(2) << bn << std::endl;

        //Shifting values for the next step
        b1 = b2;
        b2 = bn;
    }

}

int main()
{
    task17();

    return 0;
}