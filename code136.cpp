#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main() {
    Mat img = imread("img.jpg");
    Mat mask = imread("mask.jpg", IMREAD_GRAYSCALE); // grayscale mask

    if (img.empty() || mask.empty()) {
        std::cerr << "Error: Could not load img or mask." << std::endl;
        return -1;
    }

    // Ensure mask has same size as img
    if (mask.size() != img.size()) {
        resize(mask, mask, img.size());
    }

    // Output image, same size and type as input
    Mat res = Mat::zeros(img.size(), img.type());

    // Copy with mask
    img.copyTo(res, mask);

    // Show result
    imshow("img",img);
    imshow("Result", res);
    waitKey(0);

    return 0;
}
