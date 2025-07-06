#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {
    // Create a blank 3-channel image of size 100x100
    Mat img(100, 100, CV_8UC3, Scalar(0, 0, 0));

    // Change the color of the pixel at position (50, 50)
    Vec3b color;
    color[0] = 255;  // Blue
    color[1] = 0;    // Green
    color[2] = 0;    // Red

    img.at<Vec3b>(50, 50) = color;

    // Read the color of that pixel
    Vec3b pixel = img.at<Vec3b>(50, 50);
    std::cout << "Blue: "  << (int)pixel[0] << std::endl;
    std::cout << "Green: " << (int)pixel[1] << std::endl;
    std::cout << "Red: "   << (int)pixel[2] << std::endl;

    return 0;
}
