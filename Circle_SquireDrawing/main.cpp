#include <iostream>
#include <graphics.h>

using namespace std;

int main(){
    int gd, gm;
    detectgraph(&gd,&gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGT");

    int circlePoints[] = {50, 200};
    int squirePoints[] = {500, 150, 600, 150, 600, 250,  500, 250, 500, 150 };
    int flag = 0;
    for(int i = 0; i<450; i++) {
        if(circlePoints[0]+50>=squirePoints[0]) flag = 1;
        if(flag==0){
            drawpoly(5, squirePoints);
            squirePoints[0]--;
            squirePoints[2]--;
            squirePoints[4]--;
            squirePoints[6]--;
            squirePoints[8]--;
            circle(circlePoints[0]++, circlePoints[1], 50);
        }
        else {
            drawpoly(5, squirePoints);
            squirePoints[0]++;
            squirePoints[2]++;
            squirePoints[4]++;
            squirePoints[6]++;
            squirePoints[8]++;
            circle(circlePoints[0]--, circlePoints[1], 50);
        }
        delay(20);
        cleardevice();
    }
    getch();
    return 0;
}
