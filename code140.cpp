#include <opencv2/opencv.hpp>  // Include OpenCV main header
using namespace cv;

int main() {
    // Create a black image (480 height, 640 width, 3 channels - BGR)
    Mat image = Mat::zeros(480, 640, CV_8UC3);

    // Define the top-left and bottom-right corners of the rectangle
    Point topLeft(100, 100);
    Point bottomRight(300, 300);

    // Define the rectangle color (Green in BGR format)
    Scalar color(0, 255, 0);  // (Blue, Green, Red)

    // Draw the rectangle on the image with 2 pixel thickness
    rectangle(image, topLeft, bottomRight, color, 2);

    // Show the image in a window
    imshow("Rectangle", image);

    // Wait for a key press indefinitely
    waitKey(0);

    return 0;
}
