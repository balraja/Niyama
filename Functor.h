#include<stdio>
#include<vector>

namespace Niyama {

	/* A functor that accepts vector of double as input and returns a double */
	class ContinuousFunctor {
		public:
			virtual double operator()(vector<double> input) const = 0;
	};

	// This class defines a function that can accept a vector as input
    // and return gradient vector as output.
	class Gradient {
	public:
		virtual vector<T> operator()(vector<T> input) const = 0;
	};


}