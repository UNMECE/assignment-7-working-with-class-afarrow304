//main
#include <iostream>
#include "ElectricField.h"
#include "MagneticField.h"

int main() {
		Electric_Field E_components(1e5, 10.9, 1.7e2);
		std::cout << "Magnitude Electric Field: "
		<< E_default.calculate_magnitude() <<std::endl;

		Magnetic_Field B_default;
		Magnetic_Field B_components(4.5, 8.3, 2.0);

		std::cout << "Magnitude of default Magnetic Field: " <<
		B_default.calculate_magnitude() << std::endl;

	return 0;
}
//for class creation
class Eletric_Feild{

	private:
		double E_x;
		double E_y;
		double E-z;
	public:
		//add default constructor
		
		//add parameterized constructor
		
		//add deconstructor
		
		//add Getters and setters
		
		//functions
		//magnitude is the vector(1,2,3) magnitude=sqrt(1^2+2^2+3^3)
		double calculateMagnitude(){

		}
		//inner product is for vector(2,3,5) innerproduct=2^2+3^2+5^2
		double innerProduct(){

		}
		//unit vector (not sure if for electric or magnetic
		//unitvectorof the vector(2,3,5)=(2/magnitude,3/magnitude,5/magnitude)
		void unitVector(){

	 	}

