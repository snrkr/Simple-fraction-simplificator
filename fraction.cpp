#include <iostream>
using namespace std;

class Fraction
{
public:
    void setNumerator(int x);
    void setDenominator(int y);
    double result();
    int gcd(int x, int y);
    void showSimp();
private:
    double numerator;
    double denominator;
};

int main()
{
    Fraction one;
    double x,y;
    cout << "Enter numerator => ";
    cin  >> x;
    cout << "Enter denominator => ";
    cin  >> y;
    
    one.setNumerator(x);
    one.setDenominator(y);
    cout << "Result of the fraction = " << one.result() << endl;
    one.showSimp();
    
    
    return 0;
}

void Fraction::setNumerator(int x)
{
    numerator = x;
}
void Fraction::setDenominator(int y)
{
    denominator = y;
}
double Fraction::result()
{
    return static_cast<int>(numerator)/denominator;
}
int Fraction::gcd(int x, int y)
{
    if ( x == 0 ) return y;
    return gcd ( y%x, x );
}
void Fraction::showSimp()
{
    cout << numerator << "/" << denominator;
    cout << " = ";
    cout << numerator / gcd(numerator, denominator);
    cout << "/";
    cout << denominator / gcd(numerator, denominator);
    cout << endl;
}

