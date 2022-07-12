#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int* pi = new int(20); 
	cout << *pi << endl;
    delete pi;
    pi=NULL; 
		    int* pnums=new int[7];
		    pnums[0]=405;
		    pnums[1]=415;
		    pnums[2]=425;
		    pnums[3]=435;
		    pnums[4]=445;
		    pnums[5]=455;
		    pnums[6]=465;
    
			    for(int i=0; i<7;i++)
			    cout << "pnums[" << i << "]" << ":" << pnums[i] << endl;
			    delete[] pnums;
			    pnums=NULL;
    
	return 0;
}
