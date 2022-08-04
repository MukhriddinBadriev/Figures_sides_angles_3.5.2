#include <iostream>
using namespace std;

class Figure {
protected:
	int sides_count = 0;
	string name;
public:
	string get_name() { return name; }
	virtual void print_info() {
		cout << get_name() << "\n";
	}
};

class Triangle :public Figure {
	int a, b, c, A, B, C;
public:
	Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B, int new_C) {
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = new_C;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
	}
};

class Right_Triangle :public Triangle {
public:
	Right_Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B) :Triangle( name1,new_a,  new_b,  new_c,  new_A,  new_B,90) {}	
};

class Isosceles_Triangle :public Triangle {
public:
	Isosceles_Triangle(string name1, int new_a, int new_b, int new_A, int new_B) :Triangle(name1, new_a, new_b, new_a, new_A, new_B, new_A) {}
};

class Equilateral_Triangle :public Triangle {
public:
	Equilateral_Triangle(string name1, int new_a) :Triangle(name1, new_a, new_a, new_a,60,60,60) {}
};

class Quadrangle :public Figure {
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle(string name1, int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D) {
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		d = new_d;
		A = new_A;
		B = new_B;
		C = new_C;
		D = new_D;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}
};

class Parallelogram :public Quadrangle {
public:
	Parallelogram(string name1, int new_a, int new_b, int new_A, int new_B) :Quadrangle( name1,  new_a,  new_b, new_a, new_b, new_A,  new_B, new_A, new_B) {}
};

class Rectangle :public Parallelogram {
public:
	Rectangle(string name1, int new_a, int new_b ) :Parallelogram(name1, new_a, new_b, 90, 90) {}
};

class Rhombus :public Parallelogram {
public:
	Rhombus(string name1, int new_a, int new_A, int new_B) :Parallelogram(name1, new_a, new_a, new_A, new_B) {}	
};

class Square :public Rhombus {
public:
	Square(string name1, int new_a) :Rhombus(name1, new_a, 90,90) {}
};

void print(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "rus");
	Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
	Right_Triangle r_t("Прямоугольный треугольник", 10, 20, 30, 50, 60);
	Isosceles_Triangle i_t("Равнобедренный треугольник", 10, 20, 50, 60);
	Equilateral_Triangle e_t("Равносторонний треугольник", 30);
	Quadrangle quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	Parallelogram parallelogram("Параллелограмм", 20, 30, 30, 40);
	Rectangle rectangle("Прямоугольник", 10, 20);
	Rhombus rhombus("Ромб", 30, 30, 40);
	Square square("Квадрат", 20);
	
	print(&triangle);
	print(&r_t);
	print(&i_t);
	print(&e_t);
	print(&quadrangle);
	print(&rectangle);
	print(&square);
	print(&parallelogram);
	print(&rhombus);
	return 0;
}