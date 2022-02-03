#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

void plotPixels(int xc, int yc, int x, int y){
   putpixel(xc+x,yc+y,RED);
   putpixel(xc-x,yc+y,WHITE);
   putpixel(xc+x,yc-y,YELLOW);
   putpixel(xc-x,yc-y,GREEN);
   putpixel(xc+y,yc+x,RED);
   putpixel(xc-y,yc+x,RED);
   putpixel(xc+y,yc-x,RED);
   putpixel(xc-y,yc-x,RED);
}

int main(){
   int xc=500,yc=525,r=200,x=0,y,po;
   initwindow(1920,1080,"title");
   y=r;
po= 1-r;
 while(x<y){
      x++;
if(po<0){
    po=po+2*x+1;
}
else{
     y--;
     po=po+2*x+1-2*y;
}
delay(10);
plotPixels(xc,yc,x,y);
  
 }
system("pause");
}