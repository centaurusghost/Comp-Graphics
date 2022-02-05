#include<iostream>
#include<graphics.h>
using namespace std;

void plotFirstQuadrant(int x, int y, int xc, int yc){
putpixel(x+xc,y+yc,RED);
putpixel(x+xc,-y+yc,GREEN);
putpixel(-x+xc,y+yc,YELLOW);
putpixel(-x+xc,-y+yc,BLUE);
}

int main(){
int gd=DETECT,gm;
char *s="Title";
//initgraph(&gd,&gm,s);
initwindow(1920,1080,"title");
int xc=500,yc=550,x,y,rx=200,ry=50,pk;
x=0;
y=ry;
pk=ry*ry- rx*rx*ry +rx*rx/4;

while(2*ry*ry*x<=2*rx*rx*y){
x++;
if(pk<0){
        plotFirstQuadrant(x,y,xc,yc);

 pk = pk + 2*ry*ry*x + ry*ry;
}
else{
y--;
    plotFirstQuadrant(x,y,xc,yc);

pk= pk + 2*ry*ry*x - 2*rx*rx*y - ry*ry;
}
delay(10);
}
pk=ry*ry*(x+1/2)*(x+1/2) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;
while(y>0){
    y--;
    if(pk<=0){
    x++;
    pk =pk+ 2*ry*ry*x - 2*rx*rx*y + rx*rx;
    plotFirstQuadrant(x,y,xc,yc);
    }
    else{
        plotFirstQuadrant(x,y,xc,yc);
       pk = pk - 2*rx*rx*y + rx*rx;
    }
    delay(10);
}
system("pause");
}