#include <iostream>
#include <typeinfo>
 using namespace std;
 struct Person 
 {
   char* name;
   int age;
 };
 
					 void print(const Person& p, const char* delimeter=","){
					 	cout << p.name << delimeter << p.age << endl;
					 }

int main(int argc, char** argv) {
	cout << "Hello world!" << endl;
	int x;
	int y;
	cout << "type the numbers x: ";
	cin >> x; 
	cout << "type the numbers y: ";
	cin >> y; 
	cout << "x num: " << x << endl;
	cout << "y num: " << y << endl;
	Person p1;
	p1.name = "Seva"; 
	p1.age = 21;
						print(p1);
//	cout << p1.name << ":" << p1.age << endl;
	cout << typeid(p1).name() << endl;
	Person* pp = &p1;
		cout << typeid(*pp).name() << endl;
	return 0;
}