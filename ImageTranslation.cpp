#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
//hue: 0-180, saturation: 0-255, value: 0-255
int main()
{
	Mat image = imread("E:\\1.png",IMREAD_COLOR);
	if (image.empty())
	{
		cout << "Image not found" << endl;
		return 0;
	}
	auto width = image.cols;
	auto height = image.rows;
	auto quarter_height = height / 4;
	auto quarter_width = width / 4;
	cout << height << " " << width << " " << quarter_height << " " << quarter_width;
	Point2f center((width-1)/2.0,(height-1)/2.0);
	Mat rotated_matrix = getRotationMatrix2D(center,180,1.0);
	Mat rotated_image;
	warpAffine(image,rotated_image,rotated_matrix,image.size());
	imshow("original Image",image);
	imshow("rotated image",rotated_image);
	waitKey(0);
}