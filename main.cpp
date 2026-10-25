#include <iostream>
#include "RoboticArm.h"

using namespace std;

int main(){
	RoboticArm R1;
	cout<<R1.getX()<<" "<<R1.getY()<<" "<<R1.getZ()<<endl;
	cout<<R1.getSujetado()<<endl;
	R1.grab();
	R1.move(1.1, 2.2, 3.3);
	

	return 0;}
