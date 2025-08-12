//We gonna build a nerual network from scratch
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include "neural.h"
using namespace std;

int main(){
    srand(42); // Seed for random number generation
    Neuron neuron;
    vector<double> weights = {1.0,2.0,3.0}; // Example weights
    double test_bias = 0.5; // Example bias
    neuron.set_weights(weights);
    neuron.set_bias(test_bias);
    vector<double> inputs = {0.5, -0.2, 0.1};
    double output = neuron.forward(inputs);

    cout << "Output of the neuron: " << output << endl;
    return 0;

}
