//�������� ����� 1 , ������ 19
#include<iostream>
#include<fstream>
using namespace std;
struct Pixel
{
	float x, y, z;
	float Blacklevel;
};
int main() {
	ifstream f("input.txt");//������� 
	ofstream of("out.txt");//�����
	float arr[4][250];
	float* buffer = new float[250];
	char ch;
	int i = 0;
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 4; j++) {
			f.get(ch);
			cout << ch;
			arr[i][j] = ch;
		}
	}
	
	
}
