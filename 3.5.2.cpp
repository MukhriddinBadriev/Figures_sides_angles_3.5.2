#include <iostream>
using namespace std;

class Figure {
protected:
	int sides_count = 0;
	string name;
public:
	string get_name() {return name;}
	virtual void print_info() {
		cout << get_name() << "\n";
	}
};

class Triangle :public Figure {
	int a, b, c, A, B, C;
public:
	Triangle(){}
	string get_name() {return name;}
	Triangle(string name1,int new_a, int new_b, int new_c, int new_A, int new_B, int new_C){
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = new_C;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a="<<a<<" b=" << b << " c=" << c
		<<"\nУглы: A="<< A << " B=" << B <<" C=" << C << "\n\n";
	}
};

class Right_Triangle:public Triangle {
	int a, b, c, A, B,C;
	string name;
public:
	Right_Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B){ 
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = 90;
	}
	string get_name() {
		return name;
	}
	void print_info() override{
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c<< 
			"\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
	}
};

class Isosceles_Triangle :public Triangle {
	int a, b, c, A, B, C;
	string name;
public:
	Isosceles_Triangle (string name1, int new_a, int new_b, int new_A, int new_B) {
		name = name1;
		a = new_a;
		b = new_b;
		c = a;
		A = new_A;
		B = new_B;
		C = A;
	}
	string get_name() {
		return name;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c <<
			"\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
	}
};

class Equilateral_Triangle :public Triangle {
	int a, b, c, A, B, C;
	string name;
public:
	Equilateral_Triangle(string name1, int new_a) {
		name = name1;
		a = b = c = new_a;
		A = B = C = 60;
	}
	string get_name() {
		return name;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c <<
			"\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
	}
};

class Quadrangle :public Figure {
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle() {}
	string get_name() { return name; }
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
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c<<" d= "<<d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C <<" D="<<D << "\n\n";
	}
};

class Parallelogram :public Quadrangle {
	int a, b, c, d, A, B, C, D;
public:
	Parallelogram() {}
	string get_name()  { return name; }
	Parallelogram(string name1, int new_a, int new_b, int new_A, int new_B) {
		name = name1;
		a = c =  new_a;
		b = d = new_b;
		A = C = new_A;
		B = D = new_B;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d= " << d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}
};

class Rectangle :public Parallelogram {
	int a, b, c, d, A, B, C, D;
public:
	Rectangle() {}
	string get_name() { return name; }
	Rectangle(string name1, int new_a, int new_b, int new_A) {
		name = name1;
		a = c = new_a;
		b = d = new_b;
		A = B = C = D = new_A;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d= " << d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}
};

class Rhombus :public Parallelogram {
	int a, b, c, d, A, B, C, D;
public:
	Rhombus() {}
	string get_name() { return name; }
	Rhombus(string name1, int new_a, int new_A, int new_B) {
		name = name1;
		a = c = b = d = new_a;
		A = C = new_A;
		B = D = new_B;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d= " << d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}
};

class Square :public Rhombus {
	int a, b, c, d, A, B, C, D;
public:
	Square() {}
	string get_name() { return name; }
	Square(string name1, int new_a) {
		name = name1;
		a = c = b = d = new_a;
		A = C = B = D = 90;
	}
	void print_info() override {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d= " << d
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}
};



void print(Figure* figure) {
	figure->print_info();
}

int main() {
	setlocale(LC_ALL, "rus");
	Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
	Right_Triangle r_t("Прямоугольный треугольник",10,20,30,50,60);
	Isosceles_Triangle i_t("Равнобедренный треугольник", 10, 20, 50, 60);
	Equilateral_Triangle e_t("Равносторонний треугольник",30);
	Quadrangle quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	Parallelogram parallelogram("Параллелограмм", 20, 30, 30, 40);
	Rectangle rectangle("Прямоугольник",10,20,90);
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
