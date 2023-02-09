#include "Printer.h"
using namespace Engine;

void Printer::printDefult() {
	std::cout << "DefultPrintMessage" << std::endl;
}
void Printer::getVehicle(std::shared_ptr<IVehicle> c) {
	s_ptr_vec.push_back(c);
}
void Printer::PrintNameVehicle() {
	for (const auto el : s_ptr_vec) {
	 el->printType();
	}
}
