#include <iostream>
#include <graphics.h>
using namespace std;
 void plotPixels(int x,int y,int xc,int yc){
     delay(10);
putpixel(x+xc,y+yc,RED);
putpixel(xc+y,yc+x,GREEN);
putpixel(xc+y,-x+yc,YELLOW);
putpixel(xc+x,-y+yc,BLUE);
putpixel(xc-x,yc-y,RED);
putpixel(xc-y,yc-x,GREEN);
putpixel(xc-y,yc+x,YELLOW);
putpixel(xc-x,yc+y,BLUE);
}

int main()
{
    char *title = "Circle Midpoint Drawing Algorithm";
    int gd = DETECT, gm;
    int xc, yc, r, pk, x = 0, y=0;
   // initgraph(&gd, &gm, title);
    initwindow(1920,1090,title);
    cout << "Enter xc yc:" << endl;
    cin >> xc >> yc;
    cout << "Enter radius:" << endl;
    cin >> r;
  y=r;
  pk=1-r;
   plotPixels(x+xc,y+yc,xc,yc);
  while(x<y){
      x++;
      cout<<x<<" "<<y<<endl;
if(pk<0){
    plotPixels(x,y,xc,yc);
    pk=pk+2*x+3;
}
else{
    y--;
    plotPixels(x,y,xc,yc);
    pk=pk+2*x-2*y+5;
}
system("pause");
  }
    system("pause");
}

