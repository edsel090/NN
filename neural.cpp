#include "neural.h"
#include <iostream>
#include <cmath>
#include <string>
#include <random>
using namespace std;


//Constructor
Neuron::Neuron(int num_inputs) {
    //we want our weights to be random numbers between -1 and 1
    //random weights
    for(int i = 0; i < num_inputs; i++) {
        double random_weight = ((double) rand() / RAND_MAX) * 2 - 1; //random number between -1 and 1
        this->weights.push_back(random_weight);
    }
    bias = ((double) rand() / RAND_MAX) * 2 - 1; //random number between -1 and 1
}

double Neuron::forward(vector<double>& inputs){
    //calculate the weighted sum of the inputs
    double sum = 0.0;
    for(int i = 0; i < inputs.size(); i++) {
        sum += inputs[i] * weights[i];
    }
    //add the bias
    sum += bias;
    return sigmoid(sum);
}

//Get weights
vector<double> Neuron::get_weights() {
    return weights;
}

//Get bias
double Neuron::get_bias() {
    return bias;
}

//Sigmoid activation function
double Neuron::sigmoid(double x) {
    /*
    Sigmoid function is defined as 1 / (1 + e^-x)
    This keeps the netowrk to NOT behave like a linear model
    It will allow the network to learn more complex patterns
    */
    return 1 / (1 + exp(-x));
}