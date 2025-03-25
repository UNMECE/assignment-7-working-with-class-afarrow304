//class for magnetic feild
class Magnetic_Field
{
  private:
		double *M;
	public:
	//Implement a default constructor and a default destructor. 
	//Your destructor needs to free memory.
		Magnetic_Field E_default;
		Magnetic_Field E_components(1e5, 10.9, 1.7e2);
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
			double sqx=E[0]^2;
			double sqy=E[1]^2;
			double sqz=E[2]^2;
			return sqrt(sqx+sqy+sqz);
		}
		void CalculateUnitVector(){
			double magnitude=calculateMagnitude();
			if(magnitude!=0){
				
		}
		void OutputUnitVector(){
		}
};
