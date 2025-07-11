#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    // Create a black image with size 500x500
    Mat image = Mat::zeros(500, 500, CV_8UC3);

    // Text to display
    std::string text = "Hello, OpenCV!";

    // Starting point to draw the text (x = 50, y = 250)
    Point org(50, 250);

    // Font type, scale, color, thickness, and line type
    int fontFace = FONT_HERSHEY_SIMPLEX;
    double fontScale = 1.0;
    Scalar color(0, 255, 0); // Green (BGR format)
    int thickness = 2;
    int lineType = LINE_AA;

    // Put text on the image
    putText(image, text, org, fontFace, fontScale, color, thickness, lineType);

    // Display the image in a window
    imshow("Text on Image", image);
    waitKey(0);
    return 0;
}
