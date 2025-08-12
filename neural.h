#include <vector>
#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;
#ifndef NEURAL_H
#define NEURAL_H
/*
A single neuron will have 3 inputs and 1 output
each input has a weight associated with it
the output is calculated by taking the weighted sum of the inputs and passing it through an activation function (sigmoid)
the neuron will also have a bias which is added to the weighted sum before passing it through the activation function
(D1*W1 + D2*W2 + D3*W3) + BIAS = SUM
*/

//Neuron class
class Neuron {
    private:
        vector<double> weights;
        double bias;
    public:
        Neuron();
        double get_bias();
        double forward(const vector<double>& inputs);
        double sigmoid(double x);
        ///set the bias and weights
        void set_weights(const vector<double>& new_weights) {
            weights = new_weights;
        }
        void set_bias(double new_bias) {
            bias = new_bias;
        }
        
};

#endif 