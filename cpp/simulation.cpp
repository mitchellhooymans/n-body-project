#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "body.cpp"

// This is where the simulation will run
class simulation
{
private:
    /* data */
public:
    simulation(/* args */);
    ~simulation();
};

simulation::simulation(/* args */)

{

    // Simulation parameters and constants
    double G = 6.67430e-11; // Gravitational constant
    double M_sol = 1.98e30; // Solar mass in kg
    double AU = 1.496e11;   // Astronomical unit in meters
    double dt = 0.1;        // Time step
    double t = 0;           // Initial time
    double t_end = 100;     // End time
    double N = t_end / dt;  // Number of time steps

    // Create inital conditions for the bodies
    double b1_x = 1;
    double b1_y = 0;
    double b1_vx = 0;
    double b1_vy = 0;
    double b1_z = 0;
    double b1_mass = 3e-6;
    double b1_vz = 0;

    double b2_x = 0;
    double b2_y = 0;
    double b2_vx = 0;
    double b2_vy = 0;
    double b2_z = 0;
    double b2_mass = 1;
    double b2_vz = 0;


    
    // Create a vector of bodies, using the body class
    std::vector<Body> bodies;

    // Create the bodies
    // Earth
    Body earth = Body("Earth", 3e-6, b1_x, b1_y, b1_z, b1_vx, b1_vy, b1_vz);
    
    // Sun
    Body sun = Body("Sun", 1, b2_x, b2_y, b2_z, b2_vx, b2_vy, b2_vz);

    // Add the bodies to the vector
    bodies.push_back(earth);
    bodies.push_back(sun);

    // Run the simulation
    for (int i = 0; i < N; i++)
    {
       
    };



}

simulation::~simulation()
{
}
