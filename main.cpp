#include <iostream>

using namespace std;

int main()
{
    int sum;
    int number;
    cout << "Input Bil : ";
    cin >> number;
    while(number != 9999){
        sum += number;
        cout << "Input Bil : ";
        cin >> number;
    }
    cout << "Jumlah Bilangan = " << sum <<endl;

}
