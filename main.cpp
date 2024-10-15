#include <iostream>

class integral{
	// our result
	float result;
	
	public:
	// basic constractor
	integral(): result(0.0) {}
	
	// main function to calculate our integral velue
	void calculate(float (* f)(float) , int a , int b){
		int n = 20000;
		for (float k = 0; k < n ; k++) {
			result += f(a + k * (b - a) / n);
		}

		result = ((b - a) * result) / n;
	}

	// getting the result value
	float getResult(){
		return result;
	}
};

//define your finction here

float f(float x){
float y = x * x * x;
return y;
}


int main(){

// create a new integral object
integral intgrl;

// calculate the integral value of our finction [0,1]
intgrl.calculate(f , 0 , 1);

//printing the value
printf("%.4f \n",intgrl.getResult());
	return 0;
}
