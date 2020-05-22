//завдання номер 3 , варіант19
#include<iostream>
using namespace std;
struct Triangle 
{
	float a;
	float b;
	float c;
	float h;
	float s;
	void Height() {
		h =(a * b) / c;
		cout << "HEIGHT=" << h << endl;
	}
	void Sum() {
		s = (c * h) / 2;
		cout << "Sum=" << s;
	}
};
int main() {
	Triangle t;
	t.a = 3;
	t.b = 4;
	t.c = 5;
	t.Height();
	t.Sum();
       return 0;
	system("pause");
}