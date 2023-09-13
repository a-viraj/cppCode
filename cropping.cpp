#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
//hue: 0-180, saturation: 0-255, value: 0-2555
int main()
{
	string path = "E:\\1.png";
	Mat image = imread(path,IMREAD_COLOR);
	if (image.empty())
	{
		cout << "image not found" << endl;
		return 0;
	}
	Mat cropped_image = image(Range(image.rows*0.25, image.rows * 0.75), Range(image.cols*0.25, image.cols * 0.75));

	imshow("orignal image",image);
	imshow("croped image", cropped_image);
	waitKey(0);
}