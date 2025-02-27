# include <iostream>

class A
{
	int a;
	public :
		void p () { std::cout << a << std::endl; }
};

class C { };

class B : public A { int a; };

int main ()
{
	B o;
	int *a = (int *)&o;

	A *d = &o;
	d->p(); *a = 80; o.p();
}
