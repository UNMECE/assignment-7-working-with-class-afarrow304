#ifndef MAGNETIC_FEILD_H
#define MAGNETIC_FEILD
#include <cmath>
//class for magnetic feild
class Magnetic_Feild
{
  private:
		double *M;
	public:
	//Implement a default constructor and a default destructor. 
	//Your destructor needs to free memory.
		Magnetic_Feild B_components(1e5, 10.9, 1.7e2);
		Magnetic_Feild)double x, double y, double z){
			M=new double[3];
			M[0]=x;
			M[1]=y;
			M[2]=z;
		//destructor
		~Magnetic_Feild(){
			delete[] B;
		}
		//getter
		double getAxisAt(int index){
			return M[index];
		}
		//setter
		void setAxis(int index, double value){
			M[index]=value;
		}
		//functions
		double calculateMagnitude(){
			double sqx=M[0]*M[0];
			double sqy=M[1]*M[1];
			double sqz=M[2]*M[2];
			return sqrt(sqx+sqy+sqz);
		}
		void CalculateUnitVector(){
			double magnitude=calculateMagnitude();
			if(magnitude!=0){
				Std::cout << "the unit Vector is "<<M[0]/magnitude<<", "<<
				M[1]/magnitude<<", "<<M[2]/magnitude<<Std::endl;
			}
		}
};
#endif 
