#include "body.hpp"
#include <iostream>


// The constructor for the body class
Body::Body(std::string name, int mass, int x, int y, int z, int vx, int vy, int vz){    
    std::cout << "A body has been created" << std::endl;
    this->name = name;
    this->mass = mass;
    this->x = x;
    this->y = y;
    this->z = z;
    this->vx = vx;
    this->vy = vy;
    this->vz = vz;
}

// Print function
void Body::print(){
    // Print the name of the body
    std::cout << "Name: " << name << std::endl;

    // Print all of the attributes of the body
    std::cout << "Mass: " << mass << std::endl;

    // Position
    std::string pos = "Position: " + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z); 
    std::cout << pos << std::endl;

    // Velocity
    std::string vel = "Velocity: " + std::to_string(vx) + ", " + std::to_string(vy) + ", " + std::to_string(vz);
    std::cout << vel << std::endl;
}


// Still have to implement the functionality here. But this should work for now.
