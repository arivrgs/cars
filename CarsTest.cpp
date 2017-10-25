#include "Car.h"
#include <cassert>
#include <iostream>
using namespace std;

/*
 * SUMMARY:
 *  This file contains a series of tests meant to verify that the Car behaves
 *  as desired. You will implement the Car class such that all the tests,
 *  including those you add, pass.

 * SPECIFICATIONS:
 *  Car is a concrete class with the following member variables:
 *      Make, Model, MPG, TopSpeed, CurrentSpeed, FuelCapacity, CurrentFuel.
 *  It also has the following public methods:
 *      Accelerate, Decelerate, PumpFuel

 * TESTING:
 *  For the mean time, we will be using the assert function from the cassert
 *  library.
 */

/*
 * This test combines some of the specifications that I've mentioned above.
 */
void testAccelerateThrowsExceptionWhenCurrentFuelIsZero() {
    printTestName("= testAccelerateThrowsExceptionWhenCurrentFuelIsZero =====");
    // set up necessary information (arrange)
    Car testCar;
    int currentFuel = testCar.getCurrentFuel();
    int currentSpeed = testCar.getCurrentSpeed();
    assert(0 == currentFuel);
    assert(0 == currentSpeed);

    // perform function (act)
    try {
        testCar.accelerate(10);
        assert(false);  // function did not throw error, test failed (assert)
    } catch(CarOutOfFuelException e) {
        // pass
        printTestSuccess();
    }
}

void printTestName(string name) {
    cout << name << endl;
}

void printTestSuccess() {
    cout << "\ttest success" << endl;
}

void runTests() {
    testAccelerateThrowsExceptionWhenCurrentFuelIsZero();
}

int main() {
    runTests();
    return 0;
}
