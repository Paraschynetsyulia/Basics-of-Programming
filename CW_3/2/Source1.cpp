//завдання номер 2 , варіант 19
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream f("in1.txt");//читання 
	ifstream f1("in2.txt");
	ofstream of("out1.txt");//запис
	char* arr = new char[250];
	char* mass = new char[250];
	char* massiv = new char[250];
	char ch1, ch2, a;
	int i = 0;
	int j = 0;
	cout << "File 1:";
	while (f.get(ch1)) {
		cout << ch1;
		arr[j] = ch1;
		j++;
	}
	cout << "File 2:";
	while (f1.get(ch2)) {
		cout << ch2;
		mass[i]= ch2;
		i++;
	}
	for (int j = 0; j < 250; j++) {
		for (int i = 0; i < 250; i++) {
			if (arr[j] != mass[i]) {
				cout << arr[j] <<endl;
				arr[j] = a;
				a = massiv[250];
			}
			else 
				continue;
		}
	}
	of<< massiv[250];
	f1.close();
	f.close();
	of.close();
	return 0;
	system ("pause");
}