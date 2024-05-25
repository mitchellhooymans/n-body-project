#include "body.hpp"
#include <iostream>


// The constructor for the body class
Body::Body(std::string name, double mass, float x, float y, float z, float vx, float vy, float vz){    
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


// Create an inherited class from the body class <- this class is
class Earth: public Body{
    private:
        // Nothing here yet
        int secret_sauce = 42;
    public:
        // The constructor for the earth class, which uses the body class constructor
        Earth(float x, float y, float z, float vx, float vy, float vz): Body("Earth", 3e-6, x, y, z, vx, vy, vz){
            std::cout << "An Earth has been created" << std::endl;
        }
        // Print function for the earth class
        void print(){
            // use the body print function
            Body::print();
        }
        int get_secret_sauce(){
            return secret_sauce;
        }

};



// Still have to implement the functionality here. But this should work for now.
