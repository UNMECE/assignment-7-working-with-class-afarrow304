//Class for the eletric Field
#ifndef ELECTRICFEILD_H
#define ELECTRICFEILD_H
class Eletric_Feild{
	private:
		double *E
	public:
	Electric_Feild(){
		E = new double [3];
		E[0]=E[1]=E[2]=0.0;
	}
	Electric_Field(double x, double y, double z) {
		E = new double[3];
		E[0] = x;
	  E[1] = y;
		E[2] = z;
	}
//functions
 //inner product is for vector(2,3,5) innerproduct=2^2+3^2+5^2
    double innerProduct(){
      double sqx=E[0]^2;
      double sqy=E[1]^2;
      double sqz=E[2]^2;
 			return sqx+sqy+sqz;
     }
//magnitude is the vector(1,2,3) magnitude=sqrt(1^2+2^2+3^3)
		double calculateMagnitude(){
			return sqrt(innerProduct());
		}
}
