#include "util.hpp"

#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

bool load_images(int argc, char* argv[], cv::Mat& target, cv::Mat& image) {
	// some validation
    if(argc != 3) {
        std::cerr << "USAGE: " << argv[0] << " <targetfile> <imagefile>" << std::endl;
        return false;
    }

    // try to open target file
    target = cv::imread(argv[1]);
    if(!target.data) {
        std::cerr << "Invalid target file provided." << std::endl;
        return false;
    }

    // try to open image file
    image = cv::imread(argv[2]);
    if(!image.data) {
        std::cerr << "Invalid image file provided." << std::endl;
        return false;
    }

	return true;
}

void display_image(std::string name, cv::Mat image) {
    cv::namedWindow(name);
    cv::imshow(name, image);
}
