
# Windows build

## Step1: get source code

download opencv package from this link
https://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.4.1/opencv-3.4.1-vc14_vc15.exe/download

install the package to OPENCV_DIR, the source code is extracted in this path:
OPENCV_DIR\opencv\sources

## Step2: generate Visual Studio project with cmake

create a **build** folders for 32bit and 64bit build respectively

OPENCV_DIR\opencv\build32
```dos
cd build32
cmake ..\sources
```

OPENCV_DIR\opencv\build64
```dos
cd build64
cmake -DCMAKE_GENERATOR_PLATFORM=x64 ..\sources
```

## Step3: build project

open the **OpenCV.sln** with Visual Studio in build32 or build64 folder and run build solution in VS

# Ubuntu 16.04 build

## Step1: Install OpenCV dependencies

```bash

sudo apt update
sudo apt upgrade

sudo apt install build-essential cmake pkg-config \
    libjpeg8-dev libtiff5-dev libjasper-dev libpng12-dev \
    libavcodec-dev libavformat-dev libswscale-dev libv4l-dev \
    libxvidcore-dev libx264-dev libgtk-3-dev \
    libatlas-base-dev gfortran
```

## Step2: Download OpenCV source code

create a opencv source folder: OPENCV_DIR

```bash
cd OPENCV_DIR
wget -O opencv.zip https://github.com/Itseez/opencv/archive/3.1.0.zip
unzip opencv.zip

wget -O opencv_contrib.zip https://github.com/Itseez/opencv_contrib/archive/3.1.0.zip
unzip opencv_contrib.zip
```
## Step3: Install dependent python library

```bash
sudo pip install numpy
```
to speed up installation, use local mirror site

```bash
sudo pip install numpy -i https://pypi.tuna.tsinghua.edu.cn/simple
```

## Step4: Run cmake configure

```bash
cd OPENCV_DIR
mkdir build
cd build
cmake -DWITH_IPP=OFF -DWITH_HDF5=OFF ../opencv-3.1.0
```
## Step5: Build OpenCV

```bash
make -j8
sudo make install
sudo ldconfig
```
To test the correctness of build, run below command

```bash
python
>>> import cv2
>>> cv2.__version__
'3.1.0'
>>>
```

# Reference

https://www.pyimagesearch.com/2016/10/24/ubuntu-16-04-how-to-install-opencv/
https://www.pyimagesearch.com/2017/08/21/deep-learning-with-opencv/
https://www.pyimagesearch.com/2017/09/11/object-detection-with-deep-learning-and-opencv/

