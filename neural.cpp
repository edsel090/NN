#include "neural.h"
#include <iostream>
#include <cmath>
#include <string>
#include <random>
#include <vector>
using namespace std;


//Constructor
Neuron::Neuron() {
    //initialize bias randomly between -1 and 1
    bias = rand()%(1-(-1) + 1) + (-1); //random number between -1 and 1
}

double Neuron::forward(const vector<double>& inputs){
    //calculate the weighted sum of the inputs
    double sum = 0.0;
    for(int i = 0; i < inputs.size(); i++) {
        sum += inputs[i] * weights[i];
    }
    //add the bias
    sum += bias;
    cout<<sigmoid(sum);
    return sigmoid(sum);
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