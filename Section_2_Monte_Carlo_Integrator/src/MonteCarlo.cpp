#include <iostream>
#include <random>
#include <functional>

bool InsideUnitSphere(double x, double y, double z)
{
    return ((x * x + y * y + z * z) <= 1);
}

double IntegrateMonteCarlo3D(int n_points, double min, double max, std::function<bool(double, double, double)> TestPoint)
{
    int count = 0;
    // N.B. std::pow with integer arguments can be less efficient than
    // writing the multiplication explicitly, so be careful about using it
    // inside loops for example!
    double VolCube = std::pow((max - min), 3);

    // set up random number generator here
    std::mt19937 gen(567); // For most research applications we want to set the seed explicitly, as this makes the results reproducible.
    // std::default_random_engine gen; // Another random number engine, no seed explicitly set.
    std::uniform_real_distribution<double> uniform_dist(min, max);
    auto genRandDouble = std::bind(uniform_dist, gen);

    for (int i = 0; i < n_points; i++)
    {
        // generate random points here
        auto x = genRandDouble();
        //std::cout << i << " , " << x << std::endl;
        auto y = genRandDouble();
        auto z = genRandDouble();
        if (TestPoint(x, y, z))
            count++;
    }

    return static_cast<double>(count) / n_points * VolCube;
}

int main()
{
    int N_points = 10000;

    double UnitSphereVol = IntegrateMonteCarlo3D(N_points, -1.0, 1.0, InsideUnitSphere);

    std::cout << "Volume estimate of sphere using " << N_points << " points = " << UnitSphereVol << std::endl;

    return 0;
}