#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <sstream>
#include <algorithm>

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FOR_RV(i, a, b) for(int i = a; i >= b; i--)

using namespace std;

class Complex{
	private:
		double a, b;
	public:
		Complex();
		Complex(double a, double b);
		
		void makeComplex();
		void displayComplex();
		
		double Module();
		
		Complex Plus(Complex thatComplex);
		Complex Minus(Complex thatComplex);
		Complex Multiply(Complex thatComplex);
		Complex Divide(Complex thatComplex);
		Complex Pow(Complex thatComplex);
		
		Complex OppositeComplex(Complex thatComplex);
};

Complex::Complex()
{
	a = b = 1;
}

Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}

void Complex::makeComplex()
{
	cin >> a >> b;
}

void Complex::displayComplex()
{
	if(a == 0)
		if(b == 0)
			cout << 0;
		else
			cout << b << "*i";
	else	
		if(b == 1)
			cout << a;
		else if(b == 0)
	 		cout << a;
		else if(b > 0)
			cout << a << " + " << b << "*i";
		else
			cout << a << " - " << -b << "*i";
			
	cout << '\n';
}

double Complex::Module()
{
	return this->a * this->a + this->b * this->b;
}

Complex Complex::OppositeComplex(Complex thatComplex)
{
	Complex res;
	res.a = thatComplex.a;
	res.b = -thatComplex.b;
	
	return res;
}

Complex Complex::Plus(Complex thatComplex)
{
	Complex res;
	res.a = this->a + thatComplex.a;
	res.b = this->b + thatComplex.b;
	
	return res;
}

Complex Complex::Minus(Complex thatComplex)
{
	Complex res;
	res.a = this->a - thatComplex.a;
	res.b = this->b - thatComplex.b;
	
	return res;
}

Complex Complex::Multiply(Complex thatComplex)
{
	Complex res;
	res.a = this->a * thatComplex.a - this->b * thatComplex.b;
	res.b = this->a * thatComplex.b + this->b * thatComplex.a;
	
	return res;
}

Complex Complex::Divide(Complex thatComplex)
{
	Complex res;
	Complex tmpComplex = tmpComplex.OppositeComplex(thatComplex);
	res = this->Multiply(tmpComplex);
	int tmp = thatComplex.Module();
	
	res.a /= tmp;
	res.b /= tmp;
	
	return res;
}

Complex Complex::Pow(Complex thatComplex)
{
	Complex res;
	int n;
	cin >> n;
	if(n == 0)
	{
		return res;
	}
	else
	{
		res = thatComplex;
		FOR(index, 1, n)
		{
			res = res.Multiply(thatComplex);
		}
	}
	return res;
}


int main () {
	
	Complex c(1, 2), c2(3, 4);
	
	c.Plus(c2).displayComplex();
	c.Minus(c2).displayComplex();
	c.Multiply(c2).displayComplex();
	c.Divide(c2).displayComplex();
	c.Pow(c).displayComplex();
	
	
	return 0;
}
