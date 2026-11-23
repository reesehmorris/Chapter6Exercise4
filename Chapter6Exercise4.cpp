#include <iostream>
#include <iomanip>
using namespace std;

double kineticEnergy(double mass, double velocity)
{
	return 0.5 * mass * velocity * velocity;
}

int main()
{
	double mass, velocity;

	cout << "Enter the object's mass in kilograms: ";
	cin >> mass;

	cout << "Enter the object's velocity in meters per second: ";
	cin >> velocity;

	cout << fixed << setprecision(2);
	cout << "\nThe object's kinetic energy is: "
		<< kineticEnergy(mass, velocity) << " Joules.\n";

	return 0;
}