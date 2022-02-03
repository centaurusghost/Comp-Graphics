#include<iostream>
#include<graphics.h>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
int i=1,x1,y1,x2,y2,dx,dy,steps;
float xk,yk;
initwindow(900,900,"hello");
cout<<"Enter val of x1, y1:";
cin>>x1>>y1;
cout<<"Enter val of x2, y2:";
cin>>x2>>y2;
dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>dy){
    steps=dx;
}
else{
    steps=dy;
}
xk=x1; yk=y1;
for(i=1; i<=steps; i++){
xk=xk+dx/steps;
yk=yk+dy/steps;
cout<<round(xk)<<" "<<round(yk)<<endl;
putpixel(round(xk),round(yk),i);
}
getch();


}
