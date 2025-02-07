#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){
    if (a.x + a.w <= b.x || b.x + b.w <= a.x)
        return 0;
    if (a.y - a.h >= b.y || b.y - b.h >= a.y)
        return 0;
        
    double width = (a.x + a.w < b.x + b.w ? a.x + a.w : b.x + b.w) - (a.x > b.x ? a.x : b.x);
    double height = (a.y < b.y ? a.y : b.y) - (a.y - a.h > b.y - b.h ? a.y - a.h : b.y - b.h);
return height*width;

}
