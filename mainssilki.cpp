#include <iostream>
using namespace std; 
struct Pixel{
	int x;
	int y;
	int color;
	int size;
};

							int max(int c, int d){
									return (c>d) ? c : d;
							}
							double max(double c, double d){
								return (c>d) ? c : d;
							}

	inline void draw_pix(const Pixel& p) {
//		p.x++;
		cout << "Pixel (" << p.x << ", " << p.y << ", " << p.size << ", "<< p.color << ")" << endl;
	}
	double a=3.5;
		int main(int argc, char** argv) {
			cout << max(450, 109) << endl;
			cout << max(4.50, 1.09) << endl;
			int a=98;
			Pixel p;
			p.x = 10;
			p.y = 90;
			p.color = 0xff;
			p.size = 7;
			draw_pix(p);
			cout << ::a << endl;
		}
