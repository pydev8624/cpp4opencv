#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load the image
    Mat src = imread("test.png");

    // Check if image is loaded
    if (src.empty()) {
        cout << "Could not load image!" << endl;
        return -1;
    }

    // Output image
    Mat blurred;

    // Apply blur with kernel size 7x7
    blur(src, blurred, Size(3, 3));

    // Show the original and blurred images
    imshow("Original Image", src);
    imshow("Blurred Image", blurred);

    // Wait for key press
    waitKey(0);

    return 0;
}
