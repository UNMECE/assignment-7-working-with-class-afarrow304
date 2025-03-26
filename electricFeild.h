//Class for the eletric Field
#ifndef ELECTRICFEILD_H
#define ELECTRICFEILD_H
#include <cmath>
class Electric_Feild{
	private:
		double *E
	public:
	//Default constructor
	Electric_Feild E_components(1e5, 10.9, 1.7e2);
	//parameterized constructor
	Electric_Field(double x, double y, double z) {
		E = new double[3];
		E[0] = x;
	  E[1] = y;
		E[2] = z;
	}
	//destructor
	~Electric_Feild(){
		delete[] E;
	}
	//getter
	double getAxisAt(int index){
		return E[index];
	}
	//setter
	void setAxis(int index, double value){
		E[index]=value;
	}
//functions
 //inner product is for vector(2,3,5) innerproduct=2^2+3^2+5^2
    double innerProduct(){
      double sqx=E[0]*E[0];
      double sqy=E[1]*E[1];
      double sqz=E[2]*E[2];
 			return sqx+sqy+sqz;
     }
//magnitude is the vector(1,2,3) magnitude=sqrt(1^2+2^2+3^3)
		double calculateMagnitude(){
			return sqrt(innerProduct());
		}
};
#endif
