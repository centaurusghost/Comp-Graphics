//mid point circle algorithm with
//initial coordinated of(-r,0) starting from
//-ve axis in counterclockwise direction
#include<iostream>
#include<graphics.h>
using namespace std;
void PlotPixels(int x,int y, int xc, int yc){
         delay(10);
putpixel(x+xc,y+yc,RED);
putpixel(xc+y,yc+x,YELLOW);
putpixel(xc+y,-x+yc,GREEN);
putpixel(xc+x,-y+yc,BLUE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc-y,yc-x,RED);
putpixel(xc-y,yc+x,GREEN);
putpixel(xc-x,yc+y,YELLOW);
}
int main(){
 //   int gd=DETECT, gm;
  //  initgraph(&gd,&gm,"Title");
  initwindow(1920,1080,"Title");
int x1,y1,xc=500,yc=500,r=300,pk;
x1=-r;
y1=0;
pk=1-r;
while(x1<y1){
    cout<<"running"<<endl;
    cout<<x1<<" "<<y1<<endl;
    PlotPixels(x1,y1,xc,yc);
    y1--;
    if(pk<0){
          pk = pk +3-2*y1;
    }
    else{
        x1++;
      pk=pk+ 2*x1 -2*y1+5;
    }
    delay(10);
}

system("pause");

}