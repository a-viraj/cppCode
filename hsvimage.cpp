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
	Mat hsvcolor;
	cvtColor(image,hsvcolor,COLOR_BGR2HSV);
	imshow("HSV image",hsvcolor);
	waitKey(0);
	vector<Mat>hsv_plane;
	split(hsvcolor,hsv_plane);
	imshow("Hue", hsv_plane[0]);
	waitKey(0);
	imshow("saturation", hsv_plane[1]);
	waitKey(0);
	imshow("value", hsv_plane[2]);
	waitKey(0);
}