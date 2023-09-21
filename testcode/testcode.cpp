#include <opencv2/opencv.hpp>

int main() {
    // Load an image from file
    cv::Mat image = cv::imread("sample.jpg");

    // Check if the image was loaded successfully
    if (image.empty()) {
        std::cout << "Error: Could not open or find the image." << std::endl;
        return -1;
    }

    // Display the image in a window
    cv::imshow("Image", image);

    // Wait for a key press and then close the window
    cv::waitKey(0);
    cv::destroyAllWindows();

    // Save the image in a different format (e.g., PNG)
    cv::imwrite("sample.png", image);

    return 0;
}