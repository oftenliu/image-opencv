#include<iostream>    
#include <opencv2/core/core.hpp>    
#include <opencv2/highgui/highgui.hpp>    
#define TestWindow "preview"  

#define LOG_ERROR(s)  printf("error:%s \n", s);

using namespace cv;  
int main(int argc, char **argv)  
{   
    if(argc < 2){
        fprintf(stderr, "usage: %s <function>\n", argv[0]);
        return 0;
    }
    if (0 == strcmp(argv[1], "filename")){
        // 读入一张图片（测试图）    
        char *filename = argv[2];
        Mat img = imread(filename, 1);  
        // 创建一个名为 "测试图窗口"窗口    
        namedWindow(TestWindow, 0);  
        //对该窗口进行大小重新定义  
      
        resizeWindow(TestWindow, 800, 1000);  
        // 在窗口中显示测试图    
        imshow(TestWindow, img);  
        //  
        waitKey(0);  
    }
}  