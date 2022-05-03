#pragma once
class Figure
{
public:
	virtual double square() = 0;
	virtual double perimeter() = 0;
};

class Quadrangle : public Figure
{
public:
	virtual double perimeter() = 0;
protected:
	double side_1th;
	double side_2th;
	double side_3th;
	double side_4th;
};

class Rectangle : public Quadrangle
{
public:
	Rectangle(double a, double b)
	{
		this->side_1th = a;
		this->side_2th = b;
	}
	double square()
	{
		return side_1th * side_2th;
	}
	double perimeter()
	{
		return 2 * (side_1th + side_2th);
	}
};

class Rhomb : public Quadrangle
{
public:
	Rhomb(double a, double h)
	{
		this->side_1th = a;
		this->height = h;
	}
	double square()
	{
		return side_1th * height;
	}
	double perimeter()
	{
		return 4 * side_1th;
	}
private:
	double height;
};