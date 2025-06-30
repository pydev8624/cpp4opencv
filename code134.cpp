#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load the image
    cv::Mat image = cv::imread("example.jpg");

    if (image.empty()) {
        std::cout << "Image loading failed!" << std::endl;
        return -1;
    }

    // Create output matrices
    cv::Mat flip_vertical, flip_horizontal, flip_both;

    // Flip vertically (around x-axis)
    cv::flip(image, flip_vertical, 0);

    // Flip horizontally (around y-axis)
    cv::flip(image, flip_horizontal, 1);

    // Flip both vertically and horizontally
    cv::flip(image, flip_both, -1);

    // Show images
    cv::imshow("Original", image);
    cv::imshow("Flip Vertical", flip_vertical);
    cv::imshow("Flip Horizontal", flip_horizontal);
    cv::imshow("Flip Both", flip_both);

    cv::waitKey(0);
    return 0;
}
