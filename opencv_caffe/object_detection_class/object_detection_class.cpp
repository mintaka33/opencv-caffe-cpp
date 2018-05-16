// object_detection_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "detector.h"

int main()
{
    String cfgFile = "MobileNetSSD_deploy.prototxt.txt";
    String modelFile = "MobileNetSSD_deploy.caffemodel";

    DNNDetector detector;
    detector.initNet(cfgFile, modelFile, "caffe");

    Mat frame;
    for (int i=0; i<1; i++)
    {
        detector.detectFrame(&frame);
    }

    return 0;
}

