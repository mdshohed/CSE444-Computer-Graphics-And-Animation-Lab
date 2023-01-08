#include<graphics.h>
using namespace std;

int Y=20,l=67,w=25,i=25,j=445,v=14;
int X=-13,Z=200,W=250,s=78,O;
int p=78,q=107,a=185,b= -67,k=-120;
float x=29, y=-92;


void clouds(){
    ellipse(40,30,60,240,10,15);
    ellipse(65,20,345,165,20,15);
    ellipse(103,29,340,160,20,15);
    ellipse(109,42,230,50,20,10);
    ellipse(66,46,163,340,31,17);

    //clouds 2
    ellipse(200,30,60,240,10,15);
    ellipse(225,20,345,165,20,15);
    ellipse(262,27,340,160,20,15);
    ellipse(268,42,230,50,20,10);
    ellipse(226,46,163,340,31,15);
    ellipse(300,21,20,182,21,19);
    ellipse(325,31,290,100,21,15);
    ellipse(299,45,228,20,33,11);

    //clouds 3
    ellipse(450,30,60,240,10,15);
    ellipse(475,20,345,165,20,15);
    ellipse(512,27,340,160,20,15);
    ellipse(518,42,230,50,20,10);
    ellipse(476,46,163,340,31,15);
}

void mountain(){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(0,150,100,75);
    line(100,75,200,150);

    //m2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(175,131,275,75);
    line(275,75,375,150);

    //m3
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(350,131,450,75);
    line(450,75,550,150);

    //m4
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(525,131,600,75);
    line(600,75,750,180);

    //ground
    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);

}

void sky(){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(50,50,WHITE);
}

void sun(){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,RED);
    arc(524,112,0,173,30);
    floodfill(520,105,WHITE);
}

void bigTree(){
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(46,330, 64,420);
    floodfill(47,331,4);
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(52,307, 59,330);
    floodfill(53,308,4);
    setfillstyle(SOLID_FILL,4);
    bar(39,405,70,411);
    bar(41,400,69,406);
    bar(42,395,68,401);
    bar(43,390,67,396);
    bar(44,383,66,390);
    bar(45,378,65,383);
    bar(37,410,72,420);
    bar(35,417,74,423);
    bar(37,307,45,312);
    bar(38,312,46,316);
    bar(39,316,48,319);
    bar(40,319,48,321);
    bar(41,321,49,326);
    bar(42,326,49,331);
    bar(43,331,68,335);
    bar(44,335,67,339);
    bar(45,339,66,344);
    bar(67,307,74,312);
    bar(66,312,73,316);
    bar(65,316,72,320);
    bar(64,320,71,324);
    bar(63,324,70,328);
    bar(62,328,69,332);
    // leaf no 1
    setcolor(GREEN);
    circle(25, 320, 15);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(25,320, GREEN);

    //leaf no 2
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(20, 299, 20);
    floodfill(20,299, GREEN);

    //leaf no 3
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(28, 271, 20);
    floodfill(28,271, GREEN);

    //leaf no 4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(41, 247, 18);
    floodfill(41,247, GREEN);

    //leaf no 8
    setcolor(GREEN);
    circle(88, 320, 15);  //pata number 1
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(88,320, GREEN);

    //leaf no 7
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(97,305,16);
    floodfill(97,305, GREEN);

    //leaf no 6
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(100, 280, 22);
    floodfill(100,280, GREEN);

    //leaf no 5
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(95, 252, 17);
    floodfill(95,253, GREEN);

    //leaf no 4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(70, 241, 19);
    floodfill(70,241, GREEN);

    //leaf middle
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(60, 270, 35);
    bar(20,310,90,290);
    floodfill(60,270, GREEN);

}

void house_1(){
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(88+q,250-p,163+q,250-p);
    line(100+q,220-p,88+q,250-p);
    line(100+q,220-p,112+q,250-p);
    line(100+q,220-p,150+q,220-p);
    line(150+q,220-p,163+q,250-p);
    floodfill(100+q,225-p,WHITE);

    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(88+q,250-p,163+q,250-p);
    line(100+q,220-p,112+q,250-p);
    line(100+q,220-p,150+q,220-p);
    line(150+q,220-p,163+q,250-p);
    floodfill(105+q,225-p,WHITE);

    //Side-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    line(112+q,250-p,112+q,290-p);
    line(88+q,290-p,112+q,290-p);
    line(88+q,250-p,88+q,290-p);
    line(112+q,290-p,163+q,290-p);
    floodfill(90+q,252-p,WHITE);

    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,9);
    line(163+q,250-p,163+q,290-p);
    line(112+q,290-p,163+q,290-p);
    line(112+q,250-p,112+q,290-p);
    line(88+q,250-p,163+q,250-p);
    floodfill(115+q,255-p,WHITE);

    //window 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(120+q,265-p,130+q,275-p);
    line(120+q,265-p,120+q,277-p);
    line(120+q,277-p,130+q,277-p);
    line(130+q,265-p,130+q,277-p);
    floodfill(125+q,270-p,WHITE);

    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(120+w+q,265-p,130+w+q,265-p);
    line(120+w+q,265-p,120+w+q,277-p);
    line(120+w+q,277-p,130+w+q,277-p);
    line(130+w+q,265-p,130+w+q,277-p);
    floodfill(125+w+q,271-p,WHITE);

    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(94+q,290-p,94+q,270-p);
    line(106+q,290-p,106+q,270-p);
    line(94+q,270-p,106+q,270-p);
    floodfill(97+q,285-p,WHITE);
}

void house_2(){
    //triangle-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    line(88+a,200+b,163+a,200+b);
    line(100+a,170+b,88+a,200+b);
    line(100+a,170+b,112+a,200+b);
    line(100+a,170+b,150+a,170+b);
    line(150+a,170+b,163+a,200+b);
    floodfill(100+a,175+b,WHITE);

    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(88+a,200+b,163+a,200+b);
    line(100+a,170+b,112+a,200+b);
    line(100+a,170+b,150+a,170+b);
    line(150+a,170+b,163+a,200+b);
    floodfill(105+a,175+b,WHITE);

    //side-Wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    line(112+a,200+b,112+a,240+b);
    line(88+a,240+b,112+a,240+b);
    line(88+a,200+b,88+a,240+b);
    line(112+a,240+b,163+a,240+b);
    floodfill(90+a,202+b,WHITE);

    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    line(163+a,200+b,163+a,240+b);
    line(112+a,240+b,163+a,240+b);
    line(112+a,200+b,112+a,240+b);
    line(88+a,200+b,163+a,200+b);
    floodfill(115+a,205+b,WHITE);

    //window 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(120+a,215+b,130+a,215+b);
    line(120+a,215+b,120+a,227+b);
    line(120+a,227+b,130+a,227+b);
    line(130+a,215+b,130+a,227+b);
    floodfill(125+a,221+b,WHITE);

    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    line(120+w+a,215+b,130+w+a,215+b);
    line(120+w+a,215+b,120+w+a,227+b);
    line(120+w+a,227+b,130+w+a,227+b);
    line(130+w+a,215+b,130+w+a,227+b);
    floodfill(125+w+a,221+b,WHITE);

    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(94+a,240+b,94+a,220+b);
    line(106+a,240+b,106+a,220+b);
    line(94+a,220+b,106+a,220+b);
    floodfill(97+a,235+b,WHITE);
}

void house_3(){
    //triangle-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,YELLOW);
    line(88+x,250+y,163+x,250+y);
    line(100+x,220+y,88+x,250+y);
    line(100+x,220+y,112+x,250+y);
    line(100+x,220+y,150+x,220+y);
    line(150+x,220+y,163+x,250+y);
    floodfill(100+x,225+y,WHITE);

    //main-tin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(88+x,250+y,163+x,250+y);
    line(100+x,220+y,112+x,250+y);
    line(100+x,220+y,150+x,220+y);
    line(150+x,220+y,163+x,250+y);
    floodfill(105+x,225+y,WHITE);

    //Side-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    line(112+x,250+y,112+x,290+y);
    line(88+x,290+y,112+x,290+y);
    line(88+x,250+y,88+x,290+y);
    line(112+x,290+y,163+x,290+y);
    floodfill(90+x,252+y,WHITE);

    //main-wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    line(163+x,250+y,163+x,290+y);
    line(112+x,290+y,163+x,290+y);
    line(112+x,250+y,112+x,290+y);
    line(88+x,250+y,163+x,250+y);
    floodfill(115+x,255+y,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(120+x,265+y,130+x,265+y);
    line(120+x,265+y,120+x,277+y);
    line(120+x,277+y,130+x,277+y);
    line(130+x,265+y,130+x,277+y);
    floodfill(125+x,271+y,WHITE);

    //window 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(120+w+x,265+y,130+w+x,265+y);
    line(120+w+x,265+y,120+w+x,277+y);
    line(120+w+x,277+y,130+w+x,277+y);
    line(130+w+x,265+y,130+w+x,277+y);
    floodfill(125+w+x,271+y,WHITE);

    //door
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTMAGENTA);
    line(94+x,290+y,94+x,270+y);
    line(106+x,290+y,106+x,270+y);
    line(94+x,270+y,106+x,270+y);
    floodfill(97+x,285+y,WHITE);
}

void road(){
    setfillstyle(9,RED);
    bar(0,410,getmaxx(), getmaxy());
    //small - road
    setfillstyle(1,RED);
    bar(0,210,160,220);
    bar(205,222,getmaxx(),232);
    line(160,211,205,222);
    line(160,214,205,225);
    line(160,217,205,228);
    line(160,219,205,230);
}

void car(){
        setfillstyle(SOLID_FILL, BLACK);
        bar(32+i,j-16,86+i,j);
        bar(40+i,j-10,90+i,j);
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL, WHITE);

        //body
        line(i,j + 23, i, j);
        line(i, j, 40 + i, j - 20);
        line(40 + i,j - 20, 80 + i, j- 20);
        line(80 + i, j - 20, 100 + i, j);
        line(100 + i, j, 120 + i, j);
        line(120 + i, j, 120 + i, j + 23);
        line(0 + i, j + 23, 18 + i, j + 23);
        arc(30 + i, j+ 23, 0, 180, 12);
        line(42 + i, j + 23, 78 + i, j + 23);
        arc(90 + i, j+ 23, 0, 180, 12);
        line(102 + i, j + 23, 120 + i, j + 23);
        line(28 + i, j, 43 + i, j- 15);
        line(43 + i, j - 15, 57 + i, j - 15);
        line(57 + i, j - 15, 57 + i, j);
        line(57 + i, j, 28 + i, j);
        line(62 + i, j - 15, 77 + i, j - 15);
        line(77 + i, j - 15, 92 + i, j);
        line(92 + i, j, 62 + i, j);
        line(62 + i, j, 62 + i, j - 15);
        floodfill(2 + i, j + 20, LIGHTBLUE);
        setcolor(LIGHTGREEN);
        setfillstyle(SOLID_FILL, 3);
        //Wheels
        circle(30 + i  ,j + 25, 9);
        circle(90 + i , j + 25, 9);
        floodfill(30 + i, j + 25, LIGHTGREEN);
        floodfill(90 + i, j + 25, LIGHTGREEN);
}

void car2(){
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    pieslice(325, 400, 0, 90, 5);
    pieslice(325, 400, 180, 270, 5);
    circle(325,400, 10);
    arc(325, 400, 0, 180, 15);

    pieslice(400, 400, 0, 90, 5);
    pieslice(400, 400, 180, 270, 5);
    circle(400, 400, 10);
    arc(400, 400, 0, 180, 15);

    line(325+15, 400, 400-15, 400); //center
    line(260, 400, 310, 400); //back
    line(400+15, 400, 400+70, 400); //front
    line(260, 400, 260, 375); //back height
    line(260, 375, 295, 370); //back body
    line(295, 370, 310, 350); //back glass

    line(310, 350, 390, 350); //ceiling
    line(390, 350, 420, 370); //front glass
    line(420, 370, 450, 375); //front body
    line(450, 375, 470, 400);
    floodfill(449, 399, YELLOW);

}

void house_4(){
    //terrace
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(480+k,104+l,490+k,85+l);
    line(490+k,85+l,595+k,85+l);
    line(585+k,104+l,595+k,85+l);
    line(480+k,104+l,585+k,104+l);
    floodfill(592+k,87+l,WHITE);

    //side Wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,8);
    line(585+k,106+l,595+k,86+l);
    line(585+k,145+l,595+k,126+l);
    line(586+k,106+l,586+k,145+l);
    line(595+k,127+l,595+k,86+l);
    floodfill(589+k,128+l,WHITE);

    //wall
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    rectangle(480+k,105+l,585+k,145+l);
    floodfill(482+k,107+l,WHITE);
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,3);
    line(560+k,105+l,560+k,145+l);
    floodfill(562+k,107+l,WHITE);

    //door 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526+k+40,125+l,538+40+k,145+l);
    floodfill(530+k+40,130+l,WHITE);
    circle(536+k+40,138+l,1);
    //door 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526+k,125+l,538+k,145+l);
    floodfill(530+k,130+l,WHITE);
    circle(536+k,138+l,1);

    //window 2
    setcolor(WHITE);
    setfillstyle(1,LIGHTBLUE);
    rectangle(543+k,118+l,556+k,131+l);
    floodfill(545+k,122+l,WHITE);
    //door 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,5);
    rectangle(526-35+k,125+l,538-35+k,145+l);
    floodfill(530-35+k,130+l,WHITE);
    circle(536-35+k,138+l,1);

    //window 2
    setcolor(WHITE);
    setfillstyle(1,LIGHTBLUE);
    rectangle(543-35+k,118+l,556-35+k,131+l);
    floodfill(545-35+k,122+l,WHITE);
    setcolor(5);
}

main(){
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int mx_x = getmaxx(), mx_y = getmaxy();
    clouds();
    mountain();
    sky();
    sun();

    setfillstyle(9,BLUE);
    bar(215,151,mx_x,230);

    setfillstyle(11,BLUE);
    bar(0,80+Z,mx_x,22+Z);

    setfillstyle(11,BLUE);
    bar(284,380,500,222);
    bar(260,380,210,222);
    bar(0,380,10,222);
    bar(10,380,75,222);
    bar(130,380,mx_x,222);

    setfillstyle(11,RED);
    bar(0,325, mx_x ,450);

    setfillstyle(11,RED);
    bar(0,450, mx_x ,mx_y);

    setfillstyle(9,BLUE);
    bar(0,150,220,210);
    bar(165,150,220,222);

    house_4();
    bigTree();
    house_1();
    house_2();
    house_3();
    road();
    car();
    car2();
    getch();
}


