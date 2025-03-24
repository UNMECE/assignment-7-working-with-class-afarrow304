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

		//functions
		void CalculateUnitVector(){

		}
		void OutputUnitVector(){
		}
};
