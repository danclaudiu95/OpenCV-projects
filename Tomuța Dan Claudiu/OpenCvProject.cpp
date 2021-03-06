//Tomuța Dan Claudiu, PABDI, sem II
#include "stdafx.h"

#include <opencv2/opencv.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{

	Mat image = imread("imagine.jpg");

	if (image.empty()) 
	{
		cout << "Nu s-a putut deschide imaginea" << endl;
		system("pause"); 
		return -1;
	}

	String windowName = "Fereastra mea";

	namedWindow(windowName); 

	imshow(windowName, image); 

	waitKey(0); 

	destroyWindow(windowName); 

	return 0;
}

