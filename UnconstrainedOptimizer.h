#pragma once
#ifndef NIYAMA_UOPTIMIZE_H
#define NIYAMA_UOPTIMIZE_H

#include<memory>
#include "Functor.h"

namespace Niyama {

	using namespace std;

	// This structure defines the result of optimization
	struct OptimizationResult {
		double optimal_value;
		double confidence;
	};

	// A struture to define the parameters of 
	// OPtimization.
	struct OptimizationConfig {
		double expected_confidence;
	};

	
	// This class defines an abstraction for a type that can
	// find an optimum minimum value of a function.
	class UnConstrainedOptimizer {

	public:

		// This method accepts a function and gradient and 
		// computes the minimum value of a function
		OptimizationResult optimize(unique_ptr<ContinuousFunctor> function, 
			                        unique_ptr<Gradient> gradient,
			                        OptimizationConfig& configuration)

	};
}

#endif // !NIYAMA_UOPTIMIZE_H

