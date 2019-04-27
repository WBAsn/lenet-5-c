//
// Created by assassin on 19-4-26.
//

#ifndef LENET_DATA_H
#define LENET_DATA_H
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>
#include <vector>
#include <opencv2/highgui/highgui.hpp>

#include <string>

using namespace std;

size_t load_image(string file_addr, vector<cv::Mat>& database);

void create_label(vector<int> image_size, vector<vector<double>>& label_set);

void create_database(string file_addr, vector<cv::Mat>& train_imageSet, vector<cv::Mat>& test_imageSet, vector<vector<double>>& train_labelSet, vector<vector<double>>& test_labelSet);
#endif //LENET_DATA_H
