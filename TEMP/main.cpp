#include <iostream> 
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;
public:
    void Input(int x, unsigned y) {
        numerator = x;
        denominator = y;
    }
    void Input() {
        numerator = rand() % 100;
        denominator = rand() % 100 + 1;
    }   
    void print() {
        cout << numerator << '/' << denominator << endl;
    }
    Fraction(int numerator_ = 0, int denominator_ = 1) : numerator(numerator_), denominator(denominator_) {}
    
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    int commonDenominator(const Fraction& frac1, const Fraction& frac2) {
        int d1 = frac1.denominator;
        int d2 = frac2.denominator;

        while (d1 != d2) {
            if     (d1 < d2){ d1 += frac1.denominator; }
            else if(d2 < d1){ d2 += frac2.denominator; }
        }
        return d1;
    }
    Fraction operator+(const Fraction& other){
        if (this->denominator == other.denominator) {
            return Fraction(this->numerator + other.numerator, this->denominator);
        }
        const int cdenominator = commonDenominator(*this, other);
        return Fraction(this->numerator * (cdenominator / this->denominator) + other.numerator * (cdenominator / other.denominator), cdenominator);
    }
    Fraction operator-(const Fraction& other) {
        if (this->denominator == other.denominator) {
            return Fraction(this->numerator - other.numerator, this->denominator);
        }
        const int cdenominator = commonDenominator(*this, other);
        return Fraction(this->numerator * (cdenominator / this->denominator) - other.numerator * (cdenominator / other.denominator), cdenominator);
    }
    Fraction operator*(const Fraction& other) {
        return Fraction(this->numerator * other.numerator, this->denominator * other.denominator);
    }
    Fraction operator/(const Fraction& other) {
        return Fraction(this->numerator * other.denominator, this->denominator * other.numerator);
    }
    Fraction operator++() {
        numerator += denominator;
        return *this;
    }
    Fraction operator++(int) {
        Fraction temp(*this);
        numerator += denominator;
        return temp;
    }
    Fraction operator--() {
        numerator -= denominator;
        return *this;
    }
    Fraction operator--(int) {
        Fraction temp(*this);
        numerator -= denominator;
        return temp;
    }

};

int main() {
    srand(time(NULL));

    Fraction frac (10, 2);
    frac.print();

    Fraction frac2(2,3);
    frac2.print();

    Fraction c = ++frac;
    c.print();

}