#include<iostream>
using namespace std;
int area(int width, int length);
int main() {
	int x, y;
	cout << "enter width ";
	cin >> x;
	cout << "enter length ";
	cin >> y;
	cout << "area = " << area(x, y);
		return 0;
}
int area(int width, int length){
	return length * width;
}