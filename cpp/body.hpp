#ifndef BODY_H
#define BODY_H

#include <string>
#include <iostream>


// This is my body class which will be used to represent the
// bodies in the n-body problem. The body class will have a
// position, velocity, mass, and a name
class Body{
    // The name of the body
    std::string name;

    // The mass of the body
    int mass;

    // the position of the body in three dimensions
    int x, y, z;

    // The velocity of the body in three dimensions
    int vx, vy, vz;

    public:
        // The constructor for the body class
        Body(std::string name, int mass, int x, int y, int z, int vx, int vy, int vz);

        // // Get functions
        // std::string getName();
        // int getMass();
        // int getPos();
        // int getVel();

        // // Set functions
        // void setName(std::string name);
        // void setMass(int mass);
        // void setPos(int x, int y, int z);
        // void setVel(int vx, int vy, int vz);

        // Print function
        void print();

};

#endif