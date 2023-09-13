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
	Mat rotatedImage;
	Mat smaller,larger;
	pyrDown(image, smaller); pyrUp(image,larger);
	//resize(image,rotatedImage,image.size(),0.5,0.5);
	imshow("Original image",image);
	imshow("Transpose Image",smaller);
	imshow("larger Image", larger);
	waitKey(0);
}