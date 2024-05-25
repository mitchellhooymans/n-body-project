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
    double mass;

    // the position of the body in three dimensions
    float x, y, z;

    // The velocity of the body in three dimensions
    float vx, vy, vz;

    public:
        // The constructor for the body class
        Body(std::string name, double mass, float x, float y, float z, float vx, float vy, float vz);

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