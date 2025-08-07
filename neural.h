#include <vector>
#include <unordered_map>
using namespace std;
#ifndef NEURAL.H
#define NEURAL.H
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
        Neuron(int num_inputs);
        vector<double> get_weights();
        double get_bias();
        double forward(vector<double>& inputs);
        double sigmoid(doublex);
};