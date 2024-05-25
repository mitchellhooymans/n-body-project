#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "body.cpp"

using namespace std;


// This code is intended to be a simple introduction to the 
// n-body problem, presented in c++. This code is not intended
// to be a full implementation of the n-body problem, but rather
// a simple introduction to the concepts involved and a way to
// teach myself the language c++.


// First begin by implementing the logic, then implement the
// visulisation later

int main(){
    

    // Begin by creating a singular body, from the body class
    Body body1("Earth", 3e-6, 0, 0, 0, 0, 0, 0);

    // Print the body
    body1.print();


    // Create a vector of bodies
    vector<Body> bodies;

    // Add the earth to the vector
    bodies.push_back(body1);


    std::cout << "\n\n" << std::endl;


    // Create a second body
    Body body2("Mars", 3e-6, 0, 0, 0, 0, 0, 0);

    // Print the second body
    body2.print();

    // Add the second body to the vector
    bodies.push_back(body2);


    cout << endl;
}





