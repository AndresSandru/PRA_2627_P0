#ifndef ROBOTICARM_H
#define ROBOTICARM_H

class RoboticArm{
	private:
		double x;
		double y;
		double z;
		bool sujetado;
	public:
		RoboticArm()
		double getX();
		double getY();
		double getZ();
    bool getSujetado();
		void grab();
		void release();
		void move(double Xa, double Yb, double Zc);
		}
#endif
