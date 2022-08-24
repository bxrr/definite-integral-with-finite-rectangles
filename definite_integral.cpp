#include <iostream>
#include <cmath>

double f(double x)
{
    return ; 
}

int main()
{
    int num_rect = 0;
    double lower_bound = 0;
    double upper_bound = 0;
    long double sum = 0;

    std::cout << "enter lower bound: ";
    std::cin >> lower_bound;
    std::cout << "enter upper bound: ";
    std::cin >> upper_bound;
    std::cout << "enter number of rectangles to break function into: ";
    std::cin >> num_rect;

    double increment = (upper_bound - lower_bound) / num_rect;

    for(long long i = 0; i <= num_rect; i++)
    {
        sum += f(increment * i + lower_bound) * increment;
    }

    std::cout << sum;
}