#include <iostream>
#include <graphics.h>

using namespace std;

int main(){
    int gd, gm;
    detectgraph(&gd,&gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGT");

    setcolor(GREEN);
    line(150, 100, 450,100);
    line(150, 100, 150, 280);
    line( 450,100, 450,280);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(151, 151, GREEN);
    getch();
    return 0;
}
