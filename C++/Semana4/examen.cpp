#include <iostream>

using namespace std;

int f(int a=3);
bool f(int a, int&b);
bool bar(bool b = false);
void f1(int i, int j);
int f2(int j);
int f3(int& i);
int f4(int& j);

int main(){
	//int h(0);
	//int k(5);
	//int a(f());
	//int f(double a);
	//h = f(f(5));
	//f(h) = 5;
	//int f(int b = 5);
	//int b(f(5));
	//h = f(5);
	//double f(int b, int c);
	//h = f(int m(4));
	//double x(f(5));
	//int b(f());
	//double f(int b);
	//h = f(k);
	//f(5) = h;
	//5 == f(h);
	//int g(int a = 5);
	//int b(f(h));
	//bool b(bool bar(true));
	//bool b(bar(true));
	//bool bar(double b);
	//bar(true) == false;
	//bool bar(bool t = true);
	//bool b(bar());
	//bar(true) = true;
	//true = bar(false);
	
/*	int x(2);
	int y(4);

	if (f(x,y)) {
		cout << x + y << " " << x << " " << y << endl;
	}
	else{
		cout << x * y << " " << y << " " << x << endl;
	}
	* */
	
	int i(1);
	int j(0);

	j = f3(i);

	cout << "i = " << i << "; j = " << j
       << endl;
	
	return 0;
}

bool f(int a, int&b){
  a += 3;
  b *= 2;

  return ((a + b) >= 10);
}

int f(int a){
	cout<<a<<endl;
	return a;
}

bool bar(bool b){
	cout<<b<<endl;
	return b;
}

void f1(int i, int j)
{
  int copie(i);
  i = j;
  j = copie;
}

int f2(int j)
{
  j = 1;
  return j-1;
}

int f3(int& i)
{
  i = 0;
  return i+1;
}

int f4(int& j)
{
  j = 1;
  return j;
}

