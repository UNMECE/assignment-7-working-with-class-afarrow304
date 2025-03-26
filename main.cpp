//main
#include <iostream>
#include "ElectricFeild.h"
#include "MagneticFeild.h"

int main() {
	Electric_Feild E_default;	
	Electric_Field E_components(1e5, 10.9, 1.7e2);

		std::cout << "Magnitude of default Electric Field: "
		<< E_default.calculate_magnitude() <<std::endl;
		std::cout<<"Electric field inner product: "
		<<E_default.calculateInnerProduct()<<std::endl;
	Magnetic_Field M_default;
	Magnetic_Field M_components(4.5, 8.3, 2.0);

		std::cout << "Magnitude of default Magnetic Field: " <<
		M_default.calculate_magnitude() << std::endl;
		M_components.calculateUnitVector();

	return 0;
}
