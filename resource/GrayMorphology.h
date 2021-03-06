#ifndef GRAYMORPHOLOGY_H
#define GRAYMORPHOLOGY_H

#include <stdio.h>
#include "mathematic.h"
#define TOFINDMAX 0
#define TOFINDMIN 1

//判断结构元是否平滑
int isSmooth(double *src,int width,int height);
//判断两幅图像是否相等
int isEqu(double *src1,double *src2,int width,int height);

//位移，如果非平滑SE将加上sevalue，即对应的灰度值
void G_Translation(double *src,double *dst,int width,int height,double SEvalue,Position *d,int istoFindMin);

//灰度图像膨胀
void Dilate_Gray(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//灰度图像腐蚀
void Erode_Gray(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//开操作
void Open_Gray(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//闭操作
void Close_Gray(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//灰度梯度形态学提取
void Gard_Gray(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//顶帽操作
void TopHat(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//底帽操作
void BottomHat(double *src,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//测地腐蚀
void Erode_Gray_g(double *src,double *ground,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//测地膨胀
void Dilate_Gray_g(double *src,double *ground,double *dst,int width,int height,double *se,int sewidth,int seheight,Position *center);
//重建开操作
void Rebuild_Open(double *src,double *dst,double *ground,int width,int height,double *erodeSE,int esewidth,int eseheight,double *dilateSE,int dsewidth,int dseheight,int eroden);

//重建顶帽操作
void Rebuild_Tophat(double *src,double *dst,double *ground,int width,int height,double *dilateSE,int dsewidth,int dseheight,double *erodeSE,int esewidth,int eseheight,int eroden);

#endif
