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
    //Body body1("Earth", 3e-6, 0, 0, 0, 0, 0, 0);

    // Print the body
    //body1.print();


    // Try the same body creation but with the Earth class
    Earth earth(0, 0, 0, 0, 0, 0);
    earth.print();

    // Print the secret sauce
    cout << "The Secret Sauce is: " << earth.get_secret_sauce() << endl;


    return 0;
}





