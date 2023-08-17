#include <iostream>
#include <cmath>

int nearest_sq(int n) 
{
    int root = sqrt(n);
    int lower_square = root * root;
    int upper_square = (root + 1) * (root + 1);
    
    if (abs(n - lower_square) <= abs(n - upper_square)) {
        return lower_square;
    }
    else
    {
        return upper_square;
    }
}

int main() 
{
    int n;
    std::cout << "+ve number: ";
    std::cin >> n;
    {
        int nearest = nearest_sq(n);
        std::cout << "The nearest square number to " << n << " is " << nearest << std::endl;
    }

    return 0;  //output is nearest sq
}