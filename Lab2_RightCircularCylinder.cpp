// Your Name
// CSC 142
// Lab 2: Right Circular Cylinder

#include <iostream>
#define M_PI 3.14159

float calculateVolume(float radius_, float height_);
float calculateSurfaceArea(float radius_, float height_);

int main()
{
    float radius = 7.0;
    float height = 11.0;

    std::cout << "Radius       : " << radius << std::endl;
    std::cout << "Height       : " << height << std::endl;
    std::cout << "Volume       : " << calculateVolume(radius, height) << std::endl;
    std::cout << "Surface Area : " << calculateSurfaceArea(radius, height) << std::endl;

    return 0;
}

float calculateVolume(float radius_, float height_)
{
    return M_PI * radius_ * radius_ * height_;
}

float calculateSurfaceArea(float radius_, float height_)
{
    return 2 * M_PI * radius_ * radius_ + 2 * M_PI * radius_ * height_;
}