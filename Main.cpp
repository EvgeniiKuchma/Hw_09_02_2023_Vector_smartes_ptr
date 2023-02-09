#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include "Printer.h"
#include "IVehicle.h"
#include <memory>

using namespace Engine;
class Car : public IVehicle
{
public:
	Car(int speed) : _speed(speed){}
	int getSpeed() const override {
		return _speed;
	}
	void printType() const override {
		std::cout << "Car " << std::endl;
	}
	
private:
	int _speed;
};
class Moto : public IVehicle
{
public:
	Moto(int speed) : _speed(speed) {}
	int getSpeed() const override {
		return _speed;
	}
	void printType() const override {
		std::cout << "Moto " << std::endl;
	}

private:
	int _speed;
};
class Van : public IVehicle
{
public:
	Van(int speed) : _speed(speed) {}
	int getSpeed() const override {
		return _speed;
	}
	void printType() const override {
		std::cout << "Van " << std::endl;
	}

private:
	int _speed;
};

int main() {
	Printer p;
	std::shared_ptr<IVehicle> m = std::make_shared<Moto>(50);
	std::shared_ptr<IVehicle> v = std::make_shared<Van>(50);
	std::shared_ptr<IVehicle> c = std::make_shared<Car>(50);
	p.getVehicle(c);
	p.getVehicle(v);
	p.getVehicle(m);
	p.PrintNameVehicle();
	return 0;
}