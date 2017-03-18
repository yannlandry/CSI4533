#ifndef MATCH_HPP
#define MATCH_HPP

#include <vector>

#include <opencv2/core.hpp>

std::vector<cv::KeyPoint> detect_keypoints(cv::Mat& image);

cv::Mat compute_descriptors(cv::Mat& image, std::vector<cv::KeyPoint>& keypoints);

std::vector<cv::DMatch> match_descriptors(cv::Mat& descA, cv::Mat& descB);

#endif
