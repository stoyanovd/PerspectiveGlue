#include <iostream>
#include <opencv2/opencv.hpp>
//#include <opencv2/core/mat.hpp>

using namespace std;
using namespace cv;

int main() {
    cv::VERS
    cout << "Hello, World!" << endl;
    Mat original_image = imread("/home/dima/Desktop/original.jpg");
    Mat small_image = imread("/home/dima/Desktop/ban.jpg");

    vector<Point2f> pts_src;
    pts_src.push_back(Point2f(232, 272));
    pts_src.push_back(Point2f(898,358));
    pts_src.push_back(Point2f(1276, 394));
    pts_src.push_back(Point2f(694, 1404));

    vector<Point2f> pts_dst;
    pts_dst.push_back(Point2f(0, 0));
    pts_dst.push_back(Point2f(124.5,21));
    pts_dst.push_back(Point2f(195, 21));
    pts_dst.push_back(Point2f(101.5, 201.2));

    Mat H = findHomography(pts_src, pts_dst);

    Mat ans = Mat(original_image);
    warpPerspective(original_image, ans, H, original_image.size());

    imwrite("/home/dima/Desktop/opencv_res.jpg", ans);

    return 0;
}