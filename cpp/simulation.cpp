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
    //Begin by creating a singular body, from the body class
    Body body1("Earth", 3e-6, 0, 0, 0, 0, 0, 0);

    // Print the body
    body1.print();


    for(int i = 0; i < 10; i++){
        std::cout << "Creating new earth: " << i << std::endl;
        Earth earth(0, 0, 0, 0, 0, 0);
        earth.print();
    }


}

simulation::~simulation()
{
}
