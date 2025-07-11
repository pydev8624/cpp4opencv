#include <opencv2/opencv.hpp>  // Include the main OpenCV header
using namespace cv;

int main() {
    // Create a blank 480x480 black image (3 channels - BGR)
    Mat image = Mat::zeros(480, 480, CV_8UC3);

    // Define the center of the circle (x = 240, y = 240)
    Point center(240, 240);

    // Set the radius of the circle
    int radius = 100;

    // Define the color of the circle: Blue in BGR format
    Scalar color(255, 0, 0);  // (Blue, Green, Red)

    // Set thickness: 2 pixels (use -1 for filled circle)
    int thickness = 2;

    // Set the line type: 8-connected
    int lineType = LINE_8;

    // Draw the circle on the image
    circle(image, center, radius, color, thickness, lineType);

    // Show the image in a window
    imshow("Circle Example", image);

    // Wait for a key press indefinitely
    waitKey(0);

    return 0;
}
