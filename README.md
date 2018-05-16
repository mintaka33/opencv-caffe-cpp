# opencv-caffe


# object-detection-yolov2

yolo: https://pjreddie.com/darknet/yolo/

yolo v2 model: [yolov2.weights](https://pjreddie.com/media/files/yolov2.weights)


# object-detection-yolov3

yolo: https://pjreddie.com/darknet/yolo/

yolo v3 model: [yolov3.weights](https://pjreddie.com/media/files/yolov3.weights)

**Note**: opencv 3.4.1 doesn't support yolo v3 (see [issue #11378](https://github.com/opencv/opencv/issues/11378)), need to use opencv 4.0.0 or above version.

# Tips
To load specified opencv DLL, set below environment in Visual Studio: Configuration Properties --> Debugging --> Environment
```
PATH=%PATH%;(OPENCV_DIR)\bin
```