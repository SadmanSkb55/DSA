#include"box.h"

Box::Box(){
length=height=width=1;
}
Box::Box(int l,int w,int h){
length=l;
this->height=h;
this->width=w;
}
int Box::getVolume(){
return length*height*width;
}
