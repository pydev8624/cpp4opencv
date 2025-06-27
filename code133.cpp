#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // Load the image
    Mat img = imread("test.jpeg");
    if (img.empty()) {
        cerr << "Image not found!" << endl;
        return -1;
    }

    // Calculate the center point of the image
    Point2f center(img.cols / 2.0F, img.rows / 2.0F);

    // Create a 2D rotation matrix (center, angle, scale)
    Mat rot = getRotationMatrix2D(center, 90, 1.0);

    // Output image after rotation
    Mat rotated;

    // Apply affine transformation (rotation)
    warpAffine(
        img,                       // Input image
        rotated,                   // Output image
        rot,                       // 2x3 transformation matrix
        Size(img.cols, img.rows), // Output image size
        INTER_CUBIC,               // Interpolation method
        BORDER_REFLECT             // Corrected border mode
    );

    // Show original and rotated images
    imshow("Original Image", img);
    imshow("Rotated Image", rotated);

    // Save the rotated image
    imwrite("rotated_output.jpg", rotated);

    // Wait for a key press
    waitKey(0);
    return 0;
}
