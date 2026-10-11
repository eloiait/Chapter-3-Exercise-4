#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double replacementCost;
    double minimumInsurance;

    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    minimumInsurance = replacementCost * 0.80;

    cout << fixed << setprecision(2);

    cout << "The minimum amount of insurance you should purchase is: $"
        << minimumInsurance << endl;

    return 0;
}