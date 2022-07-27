#include <iostream>
using namespace std;

class Figure {
protected:
	int a, b, c,d, A, B, C,D;
	int sides_count = 0;
	string name;
public:
	
	virtual string get_name() {return name;}
	virtual int get_a() {return a;}
	virtual int get_b() {return b;}
	virtual int get_c() {return c;}
	virtual int get_d() {return d;}
	virtual int get_A() {return A;}
	virtual int get_B() {return B;}
	virtual int get_C() {return C;}
	virtual int get_D() {return D;}
};

class Triangle :public Figure {
	int a, b, c, A, B, C;
public:
	Triangle(){}
	string get_name() override {return name;}
	Triangle(string name1,int new_a, int new_b, int new_c, int new_A, int new_B, int new_C){
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = new_C;
	}
	int get_a() override {return a;}
	int get_b() override {return b;}
	int get_c() override {return c;}
	int get_A() override {return A;}
	int get_B() override {return B;}
	int get_C() override {return C;}
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
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
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
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
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
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
};

class Quadrangle :public Figure {
	int a, b, c, d, A, B, C, D;
public:
	Quadrangle() {}
	string get_name() override { return name; }
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
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_d() override { return d; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
	int get_D() override { return D; }
};

class Parallelogram :public Quadrangle {
	int a, b, c, d, A, B, C, D;
public:
	Parallelogram() {}
	string get_name() override { return name; }
	Parallelogram(string name1, int new_a, int new_b, int new_A, int new_B) {
		name = name1;
		a = c =  new_a;
		b = d = new_b;
		A = C = new_A;
		B = D = new_B;
	}
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_d() override { return d; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
	int get_D() override { return D; }
};

class Rectangle :public Parallelogram {
	int a, b, c, d, A, B, C, D;
public:
	Rectangle() {}
	string get_name() override { return name; }
	Rectangle(string name1, int new_a, int new_b, int new_A) {
		name = name1;
		a = c = new_a;
		b = d = new_b;
		A = B = C = D = new_A;
		;
	}
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_d() override { return d; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
	int get_D() override { return D; }
};

class Rhombus :public Parallelogram {
	int a, b, c, d, A, B, C, D;
public:
	Rhombus() {}
	string get_name() override { return name; }
	Rhombus(string name1, int new_a, int new_A, int new_B) {
		name = name1;
		a = c = b = d = new_a;
		A = C = new_A;
		B = D = new_B;
	}
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_d() override { return d; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
	int get_D() override { return D; }
};

class Square :public Rhombus {
	int a, b, c, d, A, B, C, D;
public:
	Square() {}
	string get_name() override { return name; }
	Square(string name1, int new_a) {
		name = name1;
		a = c = b = d = new_a;
		A = C = B = D = 90;
	}
	int get_a() override { return a; }
	int get_b() override { return b; }
	int get_c() override { return c; }
	int get_d() override { return d; }
	int get_A() override { return A; }
	int get_B() override { return B; }
	int get_C() override { return C; }
	int get_D() override { return D; }
};

void print_info_quadrangle(Figure* figure) {
	cout << figure->get_name() << ":\nСтороны: a="<<figure->get_a()<<" b=" << figure->get_b() << " c=" << figure->get_c()
		<< " d=" << figure->get_d() <<"\nУглы: A="<<figure->get_A() << " B=" << figure->get_B()<< 
		" C=" << figure->get_C() << " D=" << figure->get_D() <<"\n\n";
}

void print_info_triangle(Figure* figure) {
	cout << figure->get_name() << ":\nСтороны: a=" << figure->get_a() << " b=" << figure->get_b() << " c=" << figure->get_c()
	<< "\nУглы: A=" << figure->get_A() << " B=" << figure->get_B() <<" C=" << figure->get_C() << "\n\n";
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
	print_info_triangle(&triangle);
	print_info_triangle(&r_t);
	print_info_triangle(&i_t);
	print_info_triangle(&e_t);
	print_info_quadrangle(&quadrangle);
	print_info_quadrangle(&rectangle);
	print_info_quadrangle(&square);
	print_info_quadrangle(&parallelogram);
	print_info_quadrangle(&rhombus);
	return 0;
}