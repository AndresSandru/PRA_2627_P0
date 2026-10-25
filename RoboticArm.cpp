#include "RoboticArm()"

RoboticArm::RoboticArm(){
	x=0.0;
	y=0.0;
	z=0.0;
	sujetado=false;
}

double	RoboticArm::getX(){
	return x;}
double	RoboticArm::getY(){
	return y;}
double RoboticArm::getZ(){
	return z;}
bool RoboticArm::getSujetado(){
	return sujetado;}

void RoboticArm::grab(){
	sujetado=true;}
void RoboticArm::release(){
	sujetado=false;}

void RoboticArm::move(double Xa, double Yb, double Xc){
	x=Xa;
	y=Yb;
	z=Xc;
}

