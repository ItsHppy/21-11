#include <iostream>
#include <ctime>
using namespace std;
int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int rootsCount(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	if (d < 0) return 0;
	if (d == 0) return 1;
	if (d > 0) return 2;
}
int CircleS(double R) {
	double S = 3.14 * R * R;
	if (S < 0) return 0;
	if (S == 0) return 1;
	if (S > 0) return 2;
}
int RingS(double r1, double r2) {
	double s = (3.14 * r1 * r1) - (3.14 * r2 * r2);
	if (r1 < r2) return 0;
	if (r1 == r2) return 1;
	if (r1 > r2) return 2;
}
int TriangleP(double a, double h) {
	double b = sqrt(((a / 2) * (a / 2)) + (h * h));
	double p = a + b + b;
	if (p < 0) return 0;
	if (p == 0) return 1;
	if (p > 0) return 2;
}
int main() {
	//proc16
	/*double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;*/
	//proc17
	/*double a, b, c;
	for (int i = 1; i <= 3; i++) {
		a = (rand() % 201 - 100) / 10.;
		b = (rand() % 201 - 100) / 10.;
		c = (rand() % 201 - 100) / 10.;
		cout << rootsCount(a, b, c) << endl;
	}*/
	//proc18
	/*double R;
	for (int i = 1; i <= 3; i++) {
		cin >> R;
		double S = 3.14 * R * R;
		cout << "S = " << S << endl;
		cout << CircleS(R) << endl;
	}*/
	//proc19
	/*double r1, r2;
	for (int i = 1; i <= 3; i++) {
		cin >> r1 >> r2;
		double s = (3.14 * r1 * r1) - (3.14 * r2 * r2);
		cout << "S = " << s << endl;
		cout << RingS << endl;
	}*/
	//20
	double a, h;
	for (int i = 1; i <= 3; i++) {
		cin >> a >> h;
		double b = sqrt(((a / 2) * (a / 2)) + (h * h));
		double p = a + b + b;
		cout << "P = " << p << endl;
		cout << TriangleP(a, h) << endl;
	}
}