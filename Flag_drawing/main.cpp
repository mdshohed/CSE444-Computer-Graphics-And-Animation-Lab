#include <iostream>
#include <graphics.h>
using namespace std;

int main(){
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    setcolor(GREEN);
    rectangle(90, 90, 270, 240);

    setfillstyle(SOLID_FILL, GREEN);
    floodfill(91, 91, GREEN);

    setcolor(RED);
    circle(180, 165, 50);
    setfillstyle(SOLID_FILL, RED);
    floodfill( 180, 150, RED);

    setcolor(WHITE);
    rectangle()
    getch();
    return 0;
}
