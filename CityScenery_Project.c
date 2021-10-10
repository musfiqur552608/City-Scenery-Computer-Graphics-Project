#include <GL/gl.h>
#include <GL/glut.h>
#include <Windows.h>
#include <MMSystem.h>
#include <string.h>
#pragma comment(lib, "winmm.lib");
int i, a=1250,b=440,a1=600,b1=695,a2=685,b2=720,a3=1095,b3=530;
int a4=1160,b4=570, a5=1230,b5=610,a6=1295,b6=640;
int a7=850,b7=200,a8=780,a9=910,a10=845;
int a11=1000,a12=935,a13=1100,a14=1180,a15=1050;
int b8=160,b9=170,b10=125,b11=125,b12=75,b13=70,b14=30,b15=10;
int c=50,d=80,c1=185,d1=130,c2=285,d2=55;
float s=200,t=700,ss=-120,tt=860,sS=-500,tT=1040,s1=1400,t1=190;
float S=1750,T=10,B=1900,G=-50;
float M=1350,N=320,m=60, n=350,van=-150, cav=180;
void text21(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "L";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text12(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "a";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text13(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "b";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text14(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "A";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text15(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "i";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text16(int K, int L)
{
    glColor3f (1.0, 1.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "d";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text17(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "+";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text11(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "C";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text01(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "C";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text22(int K, int L)
{
    glColor3f (0.0, 0.0, 0.8);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "i";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text33(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "t";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text44(int K, int L)
{
    glColor3f (0.0, 0.0, 0.8);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "y";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text55(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "M";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text66(int K, int L)
{
    glColor3f (0.0, 0.0, 0.8);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "a";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text77(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "r";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text88(int K, int L)
{
    glColor3f (0.0, 0.0, 0.8);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "k";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text99(int K, int L)
{
    glColor3f (0.0, 0.0, 1.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "e";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text10(int K, int L)
{
    glColor3f (0.0, 0.0, 0.8);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "T";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "P";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text2(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "i";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text3(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "Z";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text4(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "z";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text5(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "a";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text6(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "H";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text7(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "u";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void text8(int K, int L)
{
    glColor3f (1.0, 0.0, 0.0);
    glRasterPos2f(K , L); //define position on the screen
    char *string = "T";
    while(*string)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    }
}
void wheel(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+15*cos(th),y+15*sin(th));
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+12*cos(th),y+12*sin(th));
    }
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+15*cos(th),y+15*sin(th));
    }
    glEnd();

}

void car_wheel(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+10*cos(th),y+10*sin(th));
    }

    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+7*cos(th),y+7*sin(th));
    }

    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+10*cos(th),y+10*sin(th));
    }

    glEnd();

}

void lightr(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+5*cos(th),y+5*sin(th));
    }
}

void lighty(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.7,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+5*cos(th),y+5*sin(th));
    }
}

void lightg(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.7,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+5*cos(th),y+5*sin(th));
    }
}

void lightR(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+3*cos(th),y+3*sin(th));
    }
}

void lightY(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.7,0.7,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+3*cos(th),y+3*sin(th));
    }
}

void lightG(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.7,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+3*cos(th),y+3*sin(th));
    }
}

void man(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+5*cos(th),y+5*sin(th));

    }
    glEnd();
}

void manH(int x,int y)
{
    float th;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(i=0; i<360; i++)
    {
        th=i*(3.1416/180);
        glVertex2f(x+6*cos(th),y+5.5*sin(th));

    }
    glEnd();
}
void display(void)
{
    glColor3f (0.329412,0.329412,0.329412);//base
    glBegin(GL_POLYGON);
    glVertex2d (0,0);
    glVertex2d (1320,0);
    glVertex2d (1320,700);
    glVertex2d (0,700);
    glEnd();
    glColor3f (0.96,0.96,0.96);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (190,700);
    glVertex2d (190,700);
    glVertex2d (1320,135);
    glVertex2d (1320,126);
    glEnd();
    glColor3f (0.96,0.96,0.96);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (0,170);
    glVertex2d (0,175);
    glVertex2d (600,395);
    glVertex2d (600,390);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (520,400);
    glVertex2d (580,400);
    glVertex2d (580,350);
    glVertex2d (520,350);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (50,230);
    glVertex2d (120,230);
    glVertex2d (120,180);
    glVertex2d (50,180);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (150,270);
    glVertex2d (220,270);
    glVertex2d (220,220);
    glVertex2d (150,220);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (520,530);
    glVertex2d (620,530);
    glVertex2d (620,510);
    glVertex2d (520,510);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (530,480);
    glVertex2d (730,480);
    glVertex2d (730,440);
    glVertex2d (530,440);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (780,400);
    glVertex2d (870,400);
    glVertex2d (870,370);
    glVertex2d (780,370);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (920,330);
    glVertex2d (1000,330);
    glVertex2d (1000,300);
    glVertex2d (920,300);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (970,370);
    glVertex2d (1140,370);
    glVertex2d (1140,230);
    glVertex2d (970,230);
    glEnd();
    glColor3f (0.329412,0.329412,0.329412);//roadMarks
    glBegin(GL_POLYGON);
    glVertex2d (1190,190);
    glVertex2d (1290,190);
    glVertex2d (1290,160);
    glVertex2d (1190,160);
    glEnd();
    glColor3f (1.0,1.0,1.0);//ZEBRA-cROSSiNG
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d (240,190);
    glVertex2d (290,209);
    glVertex2d (220,200);
    glVertex2d (270,219);
    glVertex2d (200,210);
    glVertex2d (250,229);
    glVertex2d (180,220);
    glVertex2d (230,239);
    glVertex2d (160,230);
    glVertex2d (210,249);
    glVertex2d (140,240);
    glVertex2d (190,259);
    glVertex2d (120,250);
    glVertex2d (170,269);
    glVertex2d (100,260);
    glVertex2d (150,279);
    glVertex2d (80,272);
    glVertex2d (130,289);
    glEnd();
    glColor3f (1.0,1.0,1.0);//ZEBRA-cROSSiNG
    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2d (890,266);
    glVertex2d (980,220);
    glVertex2d (910,278);
    glVertex2d (1000,232);
    glVertex2d (930,290);
    glVertex2d (1020,244);
    glVertex2d (950,302);
    glVertex2d (1040,256);
    glVertex2d (970,314);
    glVertex2d (1060,268);
    glVertex2d (990,326);
    glVertex2d (1080,280);
    glVertex2d (1010,338);
    glVertex2d (1100,292);
    glVertex2d (1035,352);
    glVertex2d (1125,306);
    glVertex2d (1050,362);
    glVertex2d (1140,316);
    glEnd();
    glColor3f (0.6,0.8,0.196078);//1
    glBegin(GL_POLYGON);
    glVertex2d (1160,380);
    glVertex2d (1320,303);
    glVertex2d (1320,483);
    glEnd();
    glColor3f (0.6,0.8,0.196078);//2
    glBegin(GL_POLYGON);
    glVertex2d (1095,415);
    glVertex2d (1320,555);
    glVertex2d (1320,700);
    glVertex2d (980,700);
    glVertex2d (755,590);
    glEnd();
    glColor3f(0.72,0.45,0.20); //2.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (1095,450);
    glVertex2d (1095,510);
    glEnd();
    glColor3f(0.72,0.45,0.20); //2.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (1160,490);
    glVertex2d (1160,550);
    glEnd();
    glColor3f(0.72,0.45,0.20); //2.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (1230,530);
    glVertex2d (1230,590);
    glEnd();
    glColor3f(0.72,0.45,0.20); //2.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (1295,570);
    glVertex2d (1295,630);
    glEnd();
    glColor3f (0.6,0.8,0.196078);//3
    glBegin(GL_POLYGON);
    glVertex2d (350,700);
    glVertex2d (595,590);
    glVertex2d (843,700);
    glEnd();
    glColor3f (0.82,0.82,0.82);//3.1
    glBegin(GL_POLYGON);
    glVertex2d (595,605);
    glVertex2d (813,700);
    glVertex2d (843,700);
    glVertex2d (595,585);
    glVertex2d (350,700);
    glVertex2d (383,700);
    glEnd();
    glColor3f (1.0,1.0,1.0);//3.1
    glBegin(GL_POLYGON);
    glVertex2d (420,700);
    glVertex2d (490,700);
    glVertex2d (560,670);
    glVertex2d (560,635);
    glEnd();
    glColor3f ( 0.80,0.80,0.80);//3.2
    glBegin(GL_POLYGON);
    glVertex2d (560,670);
    glVertex2d (560,635);
    glVertex2d (720,700);
    glVertex2d (650,700);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//3.3
    glBegin(GL_POLYGON);
    glVertex2d (490,700);
    glVertex2d (560,670);
    glVertex2d (650,700);
    glEnd();
    glColor3f(0.72,0.45,0.20); //3.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (600,620);
    glVertex2d (600,660);
    glEnd();
    glColor3f(0.72,0.45,0.20); //3.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (685,655);
    glVertex2d (685,695);
    glEnd();
    glColor3f(0.72,0.45,0.20); //3.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (755,686);
    glVertex2d (755,700);
    glEnd();
    glColor3f (1.0,1.0,1.0);//4
    glBegin(GL_POLYGON);
    glVertex2d (755,590);
    glVertex2d (1320,303);
    glVertex2d (1320,220);
    glVertex2d (675,550);
    glEnd();
    glColor3f (1.0,1.0,1.0);//5
    glBegin(GL_POLYGON);
    glVertex2d (1160,380);
    glVertex2d (1320,483);
    glVertex2d (1320,555);
    glVertex2d (1095,415);
    glEnd();
    glColor3f (0.6,0.8,0.196078);//6
    glBegin(GL_POLYGON);
    glVertex2d (0,0);
    glVertex2d (0,100);
    glVertex2d (710,350);
    glVertex2d (1320,40);
    glVertex2d (1320,0);
    glEnd();
    glColor3f (0.82,0.82,0.82);//6
    glBegin(GL_POLYGON);
    glVertex2d (710,350);
    glVertex2d (1320,40);
    glVertex2d (1320,10);
    glVertex2d (710,320);
    glVertex2d (0,70);
    glVertex2d (0,100);
    glEnd();
    glColor3f (1.0,1.0,1.0);//6.footpath
    glBegin(GL_POLYGON);
    glVertex2d (1000,0);
    glVertex2d (870,0);
    glVertex2d (500,190);
    glVertex2d (570,220);
    glEnd();

    glColor3f (0.6,0.8,0.196078);//7
    glBegin(GL_POLYGON);
    glVertex2d (0,250);
    glVertex2d (548,433);
    glVertex2d (18,700);
    glVertex2d (0,700);
    glEnd();
    glColor3f (0.82,0.82,0.82);//7
    glBegin(GL_POLYGON);
    glVertex2d (516,440);
    glVertex2d (0,270);
    glVertex2d (0,250);
    glVertex2d (548,433);
    glVertex2d (18,700);
    glVertex2d (0,700);
    glEnd();
    glColor3f(0.72,0.45,0.20); //1.tree
    glBegin(GL_POLYGON);
    glVertex2d (1255,370);
    glVertex2d (1240,370);
    glVertex2d (1240,420);
    glVertex2d (1255,420);
    glEnd();
    glColor3f (1.0,1.0,1.0);//9.1
    glBegin(GL_POLYGON);
    glVertex2d (1160,580);
    glVertex2d (1160,700);
    glVertex2d (950,700);
    glVertex2d (950,647);
    glEnd();
    glColor3f (0.80,0.80,0.80);//9.2
    glBegin(GL_POLYGON);
    glVertex2d (1160,580);
    glVertex2d (1160,700);
    glVertex2d (1320,700);
    glVertex2d (1320,670);
    glEnd();

    glColor3f (0.0,0.0,0.933);//9.2
    glBegin(GL_POLYGON);
    glVertex2d (1320,700);
    glColor3f ( 0.0,1.0,1.0);
    glVertex2d (1320,680);
    glVertex2d (1170,595);
    glVertex2d (1170,700);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d (1200,610);
    glColor3f(0.80,0.80,0.80);
    glVertex2d (1200,700);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d (1230,620);
    glColor3f(0.80,0.80,0.80);
    glVertex2d (1230,700);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d (1260,640);
    glColor3f(0.80,0.80,0.80);
    glVertex2d (1260,700);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2d (1290,660);
    glColor3f(0.80,0.80,0.80);
    glVertex2d (1290,700);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1170,623);
    glVertex2d (1315,705);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1170,648);
    glVertex2d (1273,705);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1170,673);
    glVertex2d (1230,705);
    glEnd();
    glColor3f (1.0,1.0,1.0);//8.1
    glBegin(GL_POLYGON);
    glVertex2d (800,680);
    glVertex2d (800,568);
    glVertex2d (950,492);
    glVertex2d (950,604);
    glEnd();
    glColor3f (0.558824,0.458824,0.535294);//8.1.1
    glBegin(GL_POLYGON);
    glVertex2d (810,563);
    glVertex2d (940,497);
    glVertex2d (940,522);
    glVertex2d (810,588);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//8.1.2
    glBegin(GL_POLYGON);
    glVertex2d (940,530);
    glVertex2d (940,602);
    glColor3f (0.0,1.0,0.0);
    glVertex2d (810,668);
    glVertex2d (810,595);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (836,583);
    glVertex2d (836,655);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (862,570);
    glVertex2d (862,640);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (888,556);
    glVertex2d (888,628);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (914,544);
    glVertex2d (914,615);
    glEnd();
    glColor3f(1.0,1.0,1.0); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (842,540);
    glVertex2d (842,575);
    glEnd();
    glColor3f(1.0,1.0,1.0); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (875,525);
    glVertex2d (875,560);
    glEnd();
    glColor3f(1.0,1.0,1.0); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (908,510);
    glVertex2d (908,540);
    glEnd();
    glColor3f(1.0,1.0,1.0); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (810,619);
    glVertex2d (940,554);
    glEnd();
    glColor3f(1.0,1.0,1.0); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (810,643);
    glVertex2d (940,578);
    glEnd(); //8.0
    glColor3f (0.90,0.91,0.8);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (800,590);
    glVertex2d (950,515);
    glEnd();
    glColor3f ( 0.80,0.80,0.80);//8.2
    glBegin(GL_POLYGON);
    glVertex2d (950,492);
    glVertex2d (950,604);
    glVertex2d (1100,687);
    glVertex2d (1100,577);
    glEnd();
    glColor3f (0.0,1.0,0.0);//8.2.1
    glBegin(GL_POLYGON);
    glVertex2d (960,602);
    glColor3f (0.258824,0.258824,0.435294);
    glVertex2d (1090,673);
    glVertex2d (1090,600);
    glVertex2d (960,530);
    glEnd();
    glColor3f (0.90,0.91,0.8);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1100,595);
    glVertex2d (950,515);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (1100,600);
    glVertex2d (950,520);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (986,545);
    glVertex2d (986,616);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (1012,558);
    glVertex2d (1012,630);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (1038,572);
    glVertex2d (1038,645);
    glEnd();
    glColor3f(0.0,0.0,0.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (1064,586);
    glVertex2d (1064,658);
    glEnd();
    glColor3f( 0.80,0.80,0.80); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1090,624);
    glVertex2d (960,554);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (1090,648);
    glVertex2d (960,578);
    glEnd();
    glColor3f ( 1.0,1.0,1.0);//8.3
    glBegin(GL_POLYGON);
    glVertex2d (800,680);
    glVertex2d (950,604);
    glVertex2d (1100,687);
    glVertex2d (1070,700);
    glVertex2d (844,700);
    glEnd();
    glColor3f (0.972549,0.972549,1.0);//8.4
    glBegin(GL_POLYGON);
    glVertex2d (1085,687);
    glVertex2d (1056,700);
    glVertex2d (856,700);
    glVertex2d (815,680);
    glVertex2d (945,614);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glVertex2d (800,568);
    glVertex2d (950,492);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glVertex2d (1100,687);
    glVertex2d (1070,700);
    glEnd();
    glColor3f(0.80,0.80,0.80); //8.0
    glLineWidth(0.5);
    glBegin(GL_LINES);
    glVertex2d (950,604);
    glVertex2d (800,680);
    glEnd();
    glColor3f(0.72,0.45,0.20); //6.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (50,20);
    glVertex2d (50,60);
    glEnd();
    glColor3f(0.72,0.45,0.20); //6.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (185,68);
    glVertex2d (185,110);
    glEnd();
    glColor3f(0.72,0.45,0.20); //6.tree
    glLineWidth(60);
    glBegin(GL_LINES);
    glVertex2d (285,4);
    glVertex2d (285,10);
    glEnd();
    int u=0,v=45,w=1-45;
    while(u<v)
    {
        if (w<0)
        {
            u=u+1;
            v=v;
            w=w+(2*u)+1;
        }
        else
        {
            u=u+1;
            v=v-1;
            w=w+(2*u)+1-(2*v);
        }
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a,  v+b);
        glVertex2i( v+a, -u+b);
        glVertex2i( u+a, -v+b);
        glVertex2i( v+a,  u+b);
        glVertex2i(-u+a, -v+b);
        glVertex2i(-v+a, -u+b);
        glVertex2i(-v+a,  u+b);
        glVertex2i(-u+a,  v+b);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a1,  v+b1);
        glVertex2i( v+a1,  u+b1);
        glVertex2i( u+a1, -v+b1);
        glVertex2i( v+a1, -u+b1);
        glVertex2i(-u+a1, -v+b1);
        glVertex2i(-v+a1,  u+b1);
        glVertex2i(-v+a1, -u+b1);
        glVertex2i(-u+a1,  v+b1);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a2,  v+b2);
        glVertex2i( v+a2,  u+b2);
        glVertex2i( u+a2, -v+b2);
        glVertex2i( v+a2, -u+b2);
        glVertex2i(-u+a2, -v+b2);
        glVertex2i(-v+a2,  u+b2);
        glVertex2i(-v+a2, -u+b2);
        glVertex2i(-u+a2,  v+b2);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a2,  v+b2);
        glVertex2i( v+a2,  u+b2);
        glVertex2i( u+a2, -v+b2);
        glVertex2i( v+a2, -u+b2);
        glVertex2i(-u+a2, -v+b2);
        glVertex2i(-v+a2, -u+b2);
        glVertex2i(-v+a2,  u+b2);
        glVertex2i(-u+a2,  v+b2);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a3,  v+b3);
        glVertex2i( v+a3,  u+b3);
        glVertex2i( u+a3, -v+b3);
        glVertex2i( v+a3, -u+b3);
        glVertex2i(-u+a3, -v+b3);
        glVertex2i(-v+a3, -u+b3);
        glVertex2i(-v+a3,  u+b3);
        glVertex2i(-u+a3,  v+b3);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a4,  v+b4);
        glVertex2i( v+a4,  u+b4);
        glVertex2i( u+a4, -v+b4);
        glVertex2i( v+a4, -u+b4);
        glVertex2i(-u+a4, -v+b4);
        glVertex2i(-v+a4, -u+b4);
        glVertex2i(-v+a4,  u+b4);
        glVertex2i(-u+a4,  v+b4);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a5,  v+b5);
        glVertex2i( v+a5,  u+b5);
        glVertex2i( u+a5, -v+b5);
        glVertex2i( v+a5, -u+b5);
        glVertex2i(-u+a5, -v+b5);
        glVertex2i(-v+a5, -u+b5);
        glVertex2i(-v+a5,  u+b5);
        glVertex2i(-u+a5,  v+b5);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+a6,  v+b6);
        glVertex2i( v+a6,  u+b6);
        glVertex2i( u+a6, -v+b6);
        glVertex2i( v+a6, -u+b6);
        glVertex2i(-u+a6, -v+b6);
        glVertex2i(-v+a6, -u+b6);
        glVertex2i(-v+a6,  u+b6);
        glVertex2i(-u+a6,  v+b6);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+c,  v+d);
        glVertex2i( v+c,  u+d);
        glVertex2i( v+c, -u+d);
        glVertex2i(-u+c,  v+d);
        glVertex2i( u+c, -v+d);
        glVertex2i(-v+c,  u+d);
        glVertex2i(-v+c, -u+d);
        glVertex2i(-u+c, -v+d);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( u+c1, -v+d1);
        glVertex2i( v+c1, -u+d1);
        glVertex2i(-u+c1,  v+d1);
        glVertex2i(-v+c1,  u+d1);
        glVertex2i(-v+c1, -u+d1);
        glVertex2i(-u+c1, -v+d1);
        glVertex2i( v+c1,  u+d1);
        glVertex2i( u+c1,  v+d1);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( v+c2,  u+d2);
        glVertex2i( v+c2, -u+d2);
        glVertex2i( u+c2, -v+d2);
        glVertex2i(-v+c2,  u+d2);
        glVertex2i(-u+c2,  v+d2);
        glVertex2i(-v+c2, -u+d2);
        glVertex2i(-u+c2, -v+d2);
        glVertex2i( u+c2,  v+d2);
        glEnd();
    }
    ////Car1
    glColor3f (1.0,0.0,0.0);//CarS.1
    glBegin(GL_POLYGON);
    glVertex2d (s,t);
    glVertex2d (s+40,t-20);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s,t-30);
    glVertex2d (s-40,t-10);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.1L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s,t);
    glVertex2d (s+40,t-20);
    glVertex2d (s,t-30);
    glVertex2d (s-40,t-10);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (s,t-30);
    glVertex2d (s-40,t-10);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s-65,t-20);
    glVertex2d (s+30,t-70);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.3
    glBegin(GL_POLYGON);
    glVertex2d (s-62,t-22);
    glVertex2d (s+8,t-66);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s-2,t-32);
    glVertex2d (s-41,t-12);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.2L
    glBegin(GL_LINE_LOOP);
    glVertex2d (s,t-30);
    glVertex2d (s-40,t-10);
    glVertex2d (s-65,t-22);
    glVertex2d (s+10,t-60);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (s+65,t-40);
    glVertex2d (s+10,t-60);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s,t-30);
    glVertex2d (s+40,t-20);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s+40,t-20);
    glVertex2d (s+65,t-40);
    glVertex2d (s+10,t-60);
    glVertex2d (s,t-30);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (s+65,t-40);
    glVertex2d (s+10,t-60);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s+30,t-70);
    glVertex2d (s+85,t-50);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glBegin(GL_LINE_LOOP);
    glVertex2d (s+65,t-40);
    glVertex2d (s+10,t-60);
    glVertex2d (s+30,t-70);
    glVertex2d (s+85,t-50);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (s+30,t-70);
    glVertex2d (s-65,t-20);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s-65,t-35);
    glVertex2d (s+30,t-85);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.5L
    glBegin(GL_LINE_LOOP);
    glVertex2d (s+30,t-70);
    glVertex2d (s-65,t-20);
    glVertex2d (s-65,t-35);
    glVertex2d (s+30,t-85);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.6
    glBegin(GL_POLYGON);
    glVertex2d (s+85,t-63);
    glVertex2d (s+85,t-50);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s+30,t-70);
    glVertex2d (s+30,t-85);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.6L
    glBegin(GL_LINE_LOOP);
    glVertex2d (s-27,t-17);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (s-27,t-54);
    glEnd();
    car_wheel(s-38,t-48);
    car_wheel(s+6,t-69);
    ////Car1.1
    glColor3f (0.5,0.0,1.0);//CarS.1
    glBegin(GL_POLYGON);
    glVertex2d (ss,tt);
    glVertex2d (ss+40,tt-20);
    glVertex2d (ss,tt-30);
    glVertex2d (ss-40,tt-10);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.1L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss,tt);
    glVertex2d (ss+40,tt-20);
    glVertex2d (ss,tt-30);
    glVertex2d (ss-40,tt-10);
    glEnd();
    glColor3f (0.5,0.0,1.0);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (ss,tt-30);
    glVertex2d (ss-40,tt-10);
    glColor3f (0.80,0.80,0.80);
    glVertex2d (ss-65,tt-20);
    glVertex2d (ss+30,tt-70);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.3
    glBegin(GL_POLYGON);
    glVertex2d (ss-62,tt-22);
    glVertex2d (ss+8,tt-66);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (ss-2,tt-32);
    glVertex2d (ss-41,tt-12);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.2L
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss,tt-30);
    glVertex2d (ss-40,tt-10);
    glVertex2d (ss-65,tt-22);
    glVertex2d (ss+10,tt-60);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (ss+65,tt-40);
    glVertex2d (ss+10,tt-60);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (ss,tt-30);
    glVertex2d (ss+40,tt-20);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss+40,tt-20);
    glVertex2d (ss+65,tt-40);
    glVertex2d (ss+10,tt-60);
    glVertex2d (ss,tt-30);
    glEnd();
    glColor3f (0.5,0.0,1.0);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (ss+65,tt-40);
    glVertex2d (ss+10,tt-60);
    glVertex2d (ss+30,tt-70);
    glVertex2d (ss+85,tt-50);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss+65,tt-40);
    glVertex2d (ss+10,tt-60);
    glVertex2d (ss+30,tt-70);
    glVertex2d (ss+85,tt-50);
    glEnd();
    glColor3f (0.5,0.0,1.0);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (ss+30,tt-70);
    glVertex2d (ss-65,tt-20);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (ss-65,tt-35);
    glVertex2d (ss+30,tt-85);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.5L
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss+30,tt-70);
    glVertex2d (ss-65,tt-20);
    glVertex2d (ss-65,tt-35);
    glVertex2d (ss+30,tt-85);
    glEnd();
    glColor3f (0.5,0.0,1.0);//CarS.6
    glBegin(GL_POLYGON);
    glVertex2d (ss+30,tt-85);
    glVertex2d (ss+85,tt-63);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (ss+85,tt-50);
    glVertex2d (ss+30,tt-70);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.6
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss+30,tt-85);
    glVertex2d (ss+85,tt-63);
    glVertex2d (ss+85,tt-50);
    glVertex2d (ss+30,tt-70);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.6L
    glBegin(GL_LINE_LOOP);
    glVertex2d (ss-27,tt-17);
    glVertex2d (ss-27,tt-42);
    glEnd();
    car_wheel(ss-38,tt-48);
    car_wheel(ss+6,tt-69);
    ////Car1.2
    glColor3f (0.35,0.16,0.14);//CarS.1
    glBegin(GL_POLYGON);
    glVertex2d (sS,tT);
    glVertex2d (sS+40,tT-20);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS,tT-30);
    glVertex2d (sS-40,tT-10);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.1L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS,tT);
    glVertex2d (sS+40,tT-20);
    glVertex2d (sS,tT-30);
    glVertex2d (sS-40,tT-10);
    glEnd();
    glColor3f (0.35,0.16,0.14);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (sS,tT-30);
    glVertex2d (sS-40,tT-10);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS-65,tT-20);
    glVertex2d (sS+30,tT-70);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.3
    glBegin(GL_POLYGON);
    glVertex2d (sS-62,tT-22);
    glVertex2d (sS+8,tT-66);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS-2,tT-32);
    glVertex2d (sS-41,tT-12);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.2L
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS,tT-30);
    glVertex2d (sS-40,tT-10);
    glVertex2d (sS-65,tT-22);
    glVertex2d (sS+10,tT-60);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (sS+65,tT-40);
    glVertex2d (sS+10,tT-60);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS,tT-30);
    glVertex2d (sS+40,tT-20);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS+40,tT-20);
    glVertex2d (sS+65,tT-40);
    glVertex2d (sS+10,tT-60);
    glVertex2d (sS,tT-30);
    glEnd();
    glColor3f (0.35,0.16,0.14);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (sS+65,tT-40);
    glVertex2d (sS+10,tT-60);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS+30,tT-70);
    glVertex2d (sS+85,tT-50);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS+65,tT-40);
    glVertex2d (sS+10,tT-60);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS+30,tT-70);
    glVertex2d (sS+85,tT-50);
    glEnd();
    glColor3f (0.35,0.16,0.14);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (sS+30,tT-70);
    glVertex2d (sS-65,tT-20);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS-65,tT-35);
    glVertex2d (sS+30,tT-85);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.5L
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS+30,tT-70);
    glVertex2d (sS-65,tT-20);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS-65,tT-35);
    glVertex2d (sS+30,tT-85);
    glEnd();
    glColor3f (0.35,0.16,0.14);//CarS.6
    glBegin(GL_POLYGON);
    glVertex2d (sS+85,tT-63);
    glVertex2d (sS+85,tT-50);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (sS+30,tT-70);
    glVertex2d (sS+30,tT-85);
    glEnd();
    glColor3f (1.0,0.0,0.0);//CarS.6L
    glBegin(GL_LINE_LOOP);
    glVertex2d (sS-27,tT-17);
    glColor3f (0.7,0.0,0.0);
    glVertex2d (sS-27,tT-54);
    glEnd();
    car_wheel(sS-38,tT-48);
    car_wheel(sS+6,tT-69);
    ////Car2
    glColor3f (0.0,0.0,0.8);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (s1,t1-35);
    glVertex2d (s1-40,t1-15);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s1-70,t1-25);
    glVertex2d (s1+10,t1-75);
    glEnd();
    glColor3f (0.0,0.8,0.8);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (s1-40,t1-18);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (s1-68,t1-30);
    glVertex2d (s1+8,t1-75);
    glVertex2d (s1-4,t1-35);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.2
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1,t1-35);
    glVertex2d (s1-40,t1-15);
    glVertex2d (s1-70,t1-25);
    glVertex2d (s1+10,t1-75);
    glEnd();
    glColor3f (0.0,0.0,1.0);//CarS.3
    glBegin(GL_POLYGON);
    glVertex2d (s1+78,t1-40);
    glVertex2d (s1+15,t1-71);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s1+15,t1-81);
    glVertex2d (s1+78,t1-50);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.3
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1+15,t1-71);
    glVertex2d (s1+15,t1-81);
    glVertex2d (s1+78,t1-50);
    glVertex2d (s1+78,t1-40);
    glEnd();
    glColor3f (0.0,0.0,0.8);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (s1+40,t1-20);
    glVertex2d (s1,t1-35);
    glVertex2d (s1+10,t1-75);
    glVertex2d (s1+70,t1-35);
    glEnd();
    glColor3f (0.0,0.8,0.8);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (s1+1,t1-37);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (s1+10,t1-75);
    glVertex2d (s1+74,t1-35);
    glVertex2d (s1+39,t1-22);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1+40,t1-20);
    glVertex2d (s1,t1-35);
    glVertex2d (s1+10,t1-75);
    glVertex2d (s1+70,t1-35);
    glEnd();
    glColor3f (0.0,0.0,0.8);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (s1+10,t1-75);
    glVertex2d (s1+78,t1-40);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s1+70,t1-35);
    glVertex2d (s1+10,t1-65);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.5L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1+70,t1-35);
    glVertex2d (s1+10,t1-65);
    glVertex2d (s1+10,t1-75);
    glVertex2d (s1+78,t1-40);
    glEnd();
    glColor3f ( 0.0,0.0,0.8);//CarS.6
    glBegin(GL_POLYGON);
    glVertex2d (s1+15,t1-70);
    glVertex2d (s1-98,t1-10);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s1-98,t1-20);
    glVertex2d (s1+15,t1-80);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.6L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1+15,t1-70);
    glVertex2d (s1-98,t1-10);
    glVertex2d (s1-98,t1-20);
    glVertex2d (s1+15,t1-80);
    glEnd();
    glColor3f (0.0,0.0,0.80);//CarS.7
    glBegin(GL_POLYGON);
    glVertex2d (s1-5,t1-2);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (s1-35,t1+10);
    glVertex2d (s1-98,t1-10);
    glVertex2d (s1-69,t1-24);
    glEnd();
    glColor3f(0.0,0.0,1.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (s1-22,t1-25);
    glColor3f(0.0,0.0,0.0);
    glVertex2d (s1-29,t1-45);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.7L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1-35,t1+10);
    glVertex2d (s1-98,t1-10);
    glVertex2d (s1-69,t1-24);
    glVertex2d (s1-5,t1-2);
    glEnd();
    glColor3f (0.0,0.0,0.8);//CarS.1
    glBegin(GL_POLYGON);
    glVertex2d (s1,t1);
    glVertex2d (s1+40,t1-20);
    glVertex2d (s1,t1-35);
    glVertex2d (s1-40,t1-15);
    glEnd();
    glColor3f (0.0,0.0,0.4);//CarS.1L
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
    glVertex2d (s1,t1);
    glVertex2d (s1+40,t1-20);
    glVertex2d (s1,t1-35);
    glVertex2d (s1-40,t1-15);
    glEnd();
    car_wheel(s1-70,t1-36);
    car_wheel(s1-15,t1-65);
    ////Car2.1
    glColor3f (0.0,0.6,0.0);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (S,T-35);
    glVertex2d (S-40,T-15);
    glVertex2d (S-70,T-25);
    glVertex2d (S+10,T-75);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.2
    glBegin(GL_POLYGON);
    glVertex2d (S-40,T-18);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (S-68,T-30);
    glVertex2d (S+8,T-75);
    glVertex2d (S-4,T-35);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.2
    glBegin(GL_LINE_LOOP);
    glVertex2d (S,T-35);
    glVertex2d (S-40,T-15);
    glVertex2d (S-70,T-25);
    glVertex2d (S+10,T-75);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.3
    glBegin(GL_POLYGON);
    glVertex2d (S+78,T-40);
    glVertex2d (S+15,T-71);
    glColor3f (0.0,1.0,0.0);
    glVertex2d (S+15,T-81);
    glVertex2d (S+78,T-50);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.3
    glBegin(GL_LINE_LOOP);
    glVertex2d (S+15,T-71);
    glVertex2d (S+15,T-81);
    glVertex2d (S+78,T-50);
    glVertex2d (S+78,T-40);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (S+40,T-20);
    glVertex2d (S,T-35);
    glVertex2d (S+10,T-75);
    glVertex2d (S+70,T-35);
    glEnd();
    glColor3f (0.0,1.0,1.0);//CarS.4
    glBegin(GL_POLYGON);
    glVertex2d (S+1,T-37);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (S+10,T-75);
    glVertex2d (S+74,T-35);
    glVertex2d (S+39,T-22);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.4L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (S+40,T-20);
    glVertex2d (S,T-35);
    glVertex2d (S+10,T-75);
    glVertex2d (S+70,T-35);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.5
    glBegin(GL_POLYGON);
    glVertex2d (S+10,T-75);
    glVertex2d (S+78,T-40);
    glColor3f (0.0,1.0,0.0);
    glVertex2d (S+70,T-35);
    glVertex2d (S+10,T-65);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.5L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (S+70,T-35);
    glVertex2d (S+10,T-65);
    glVertex2d (S+10,T-75);
    glVertex2d (S+75,T-40);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.6
    glBegin(GL_POLYGON);
    glVertex2d (S+15,T-70);
    glVertex2d (S-98,T-10);
    glColor3f (0.0,1.0,0.0);
    glVertex2d (S-98,T-20);
    glVertex2d (S+15,T-80);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.6L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (S+15,T-70);
    glVertex2d (S-98,T-10);
    glVertex2d (S-98,T-20);
    glVertex2d (S+15,T-80);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.7
    glBegin(GL_POLYGON);
    glVertex2d (S-5,T-2);
    glColor3f (0.0,1.0,0.0);
    glVertex2d (S-35,T+10);
    glVertex2d (S-98,T-10);
    glVertex2d (S-69,T-24);
    glEnd();
    glColor3f (0.0,1.0,0.0); //8.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (S-22,T-25);
    glColor3f(0.0,0.0,0.0);
    glVertex2d (S-29,T-45);
    glEnd();
    glColor3f (0.0,0.0,0.0);//CarS.7L
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (S-35,T+10);
    glVertex2d (S-98,T-10);
    glVertex2d (S-69,T-24);
    glVertex2d (S-5,T-2);
    glEnd();
    glColor3f (0.0,0.6,0.0);//CarS.1
    glBegin(GL_POLYGON);
    glVertex2d (S,T);
    glVertex2d (S+40,T-20);
    glVertex2d (S,T-35);
    glVertex2d (S-40,T-15);
    glEnd();
    glColor3f (0.0,0.8,0.0);//CarS.1L
    glLineWidth(1);
    glBegin(GL_LINE_LOOP);
    glVertex2d (S,T);
    glVertex2d (S+40,T-20);
    glVertex2d (S,T-35);
    glVertex2d (S-40,T-15);
    glEnd();
    car_wheel(S-70,T-36);
    car_wheel(S-15,T-65);

    ////////////man
    manH(M+7,N+8);
    man(M+7,N+4);
    glColor3f (0.0,0.0,0.9);
    glBegin(GL_POLYGON);
    glVertex2d (M+15, N);
    glVertex2d (M+15, N-20);
    glVertex2d (M,    N-20);
    glVertex2d (M,    N);
    glEnd();
    glColor3f (0.0,0.0,0.7);
    glBegin(GL_POLYGON);
    glVertex2d (M,  N);
    glVertex2d (M,  N-2);
    glVertex2d (M-2,N-3);
    glVertex2d (M-2,N-22);
    glVertex2d (M-6,N-22);
    glEnd();
    glColor3f (0.0,0.0,0.7);
    glBegin(GL_POLYGON);
    glVertex2d (M+15,N);
    glVertex2d (M+15,N-2);
    glVertex2d (M+17,N-3);
    glVertex2d (M+17,N-22);
    glVertex2d (M+21,N-22);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (M+15,N-20);
    glVertex2d (M+15,N-27);
    glVertex2d (M,   N-27);
    glVertex2d (M,   N-20);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (M+15, N-27);
    glVertex2d (M+15, N-47);
    glVertex2d (M+8,  N-47);
    glVertex2d (M+8,  N-27);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (M,   N-27);
    glVertex2d (M,   N-47);
    glVertex2d (M+6, N-47);
    glVertex2d (M+6, N-27);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Road Light1
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1310,235);
    glVertex2d (1310,335);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (1300,335);
    glVertex2d (1300,235);
    glEnd();

    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1270,340);
    glVertex2d (1280,340);
    glColor3f (1.0,0.0,0.0);
    glVertex2d (1280,350);
    glVertex2d (1270,350);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1310,335);
    glVertex2d (1300,335);
    glVertex2d (1270,360);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (1270,350);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Road Light1.1
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1110,135);
    glVertex2d (1110,235);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (1100,235);
    glVertex2d (1100,135);
    glEnd();

    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1120,250);
    glVertex2d (1130,250);
    glColor3f (1.0,0.0,0.0);
    glVertex2d (1130,260);
    glVertex2d (1120,260);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1130,260);
    glVertex2d (1110,235);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (1100,235);
    glVertex2d (1130,270);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Road Light2
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1027,460);
    glVertex2d (1027,380);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (1020,380);
    glVertex2d (1020,460);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (993,465);
    glVertex2d (1000,465);
    glColor3f (1.0,0.0,0.0);
    glVertex2d (1000,475);
    glVertex2d (993,475);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (1027,460);
    glVertex2d (1020,460);
    glVertex2d (993,480);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (993,473);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Road Light3
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (705,545);
    glVertex2d (705,605);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (700,605);
    glVertex2d (700,545);
    glEnd();

    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (680,610);
    glVertex2d (685,610);
    glColor3f (1.0,0.0,0.0);
    glVertex2d (685,615);
    glVertex2d (680,615);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (705,605);
    glVertex2d (700,605);
    glVertex2d (680,620);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (680,615);
    glEnd();

    glColor3f (0.0,0.0,0.0);//Road Light4
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (404,685);
    glVertex2d (404,745);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (400,745);
    glVertex2d (400,685);
    glEnd();

    glColor3f (0.0,0.0,0.0);//Traffic Light4
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (600,590);
    glVertex2d (600,645);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (594,645);
    glVertex2d (594,590);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Traffic Light4
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (607,630);
    glVertex2d (607,665);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (592,665);
    glVertex2d (592,630);
    glEnd();
    lightR(600,659);
    glEnd();
    lightY(600,649);
    glEnd();
    lightG(600,639);
    glEnd();
    ////Bus1
    glColor3f (0.137255,0.419608,0.556863);//BUS.1
    glBegin(GL_POLYGON);
    glVertex2d (B+25,G-14);
    glVertex2d (B+75,G+5);
    glVertex2d (B+250,G-80);
    glVertex2d (B+200,G-100);
    glEnd();
    glColor3f (0.0,0.0,0.0);//BUS.1
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (B+25,G-14);
    glVertex2d (B+75,G+5);
    glVertex2d (B+250,G-80);
    glVertex2d (B+200,G-100);
    glEnd();
    glColor3f (0.137255,0.419608,0.556863);//BUS.2
    glBegin(GL_POLYGON);
    glVertex2d (B,G-42);
    glVertex2d (B+25,G-14);
    glVertex2d (B+200,G-100);
    glVertex2d (B+200,G-170);
    glVertex2d (B,G-70);
    glEnd();
    glColor3f (0.0,0.0,0.0);//BUS.2
    glBegin(GL_LINE_LOOP);
    glVertex2d (B,G-42);
    glVertex2d (B+25,G-14);
    glVertex2d (B+200,G-100);
    glVertex2d (B+200,G-170);
    glVertex2d (B,G-70);
    glEnd();
    glColor3f (0.0,1.0,1.0);//BUS.2.1
    glBegin(GL_POLYGON);
    glVertex2d (B+30,G-24);
    glVertex2d (B+195,G-104);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (B+195,G-134);
    glVertex2d (B+10,G-42);
    glEnd();
    glColor3f (0.0,0.0,0.0);//BUS.2.1
    glBegin(GL_LINE_LOOP);
    glVertex2d (B+30,G-24);
    glVertex2d (B+195,G-104);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (B+195,G-134);
    glVertex2d (B+10,G-42);
    glEnd();
    glColor3f (0.137255,0.419608,0.556863);//BUS.2.1
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (B+26,G-14);
    glVertex2d (B+26,G-56);
    glVertex2d (B+50,G-26);
    glVertex2d (B+50,G-65);
    glVertex2d (B+75,G-42);
    glVertex2d (B+75,G-78);
    glVertex2d (B+100,G-54);
    glVertex2d (B+100,G-94);
    glVertex2d (B+125,G-66);
    glVertex2d (B+125,G-110);
    glVertex2d (B+150,G-80);
    glVertex2d (B+150,G-125);
    glVertex2d (B+175,G-92);
    glVertex2d (B+175,G-141);
    glEnd();
    glColor3f (0.0,0.0,1.0);//BUS.3
    glBegin(GL_POLYGON);
    glVertex2d (B+250,G-80);
    glVertex2d (B+200,G-100);
    glVertex2d (B+200,G-170);
    glVertex2d (B+250,G-150);
    glEnd();
    glColor3f (0.0,0.0,0.0);//BUS.3.1
    glBegin(GL_LINE_LOOP);
    glVertex2d (B+245,G-87);
    glVertex2d (B+205,G-104);
    glVertex2d (B+205,G-130);
    glVertex2d (B+245,G-113);
    glEnd();
    glColor3f (0.0,1.0,1.0);//BUS.3.1
    glBegin(GL_POLYGON);
    glVertex2d (B+245,G-87);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (B+205,G-104);
    glVertex2d (B+205,G-130);
    glVertex2d (B+245,G-113);
    glEnd();
    wheel(B+40,G-90);
    wheel(B+150,G-140);
    glColor3f (0.90,0.91,0.8);//11
    glBegin(GL_POLYGON);
    glVertex2d (0,295);
    glVertex2d (100,328);
    glVertex2d (100,700);
    glVertex2d (70,700);
    glVertex2d (0,680);
    glEnd();
    glColor3f (1.0,1.0,1.0);//11
    glBegin(GL_POLYGON);
    glVertex2d (0,680);
    glColor3f (0.90,0.91,0.98);
    glVertex2d (70,700);
    glVertex2d (0,700);
    glEnd();
    glColor3f (0.4588,0.58824,0.635294);//11
    glBegin(GL_POLYGON);
    glVertex2d (0,309);
    glVertex2d (90,338);
    glColor3f (0.258824,0.258824,0.435294);
    glVertex2d (90,680);
    glVertex2d (0,650);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (10,312);
    glVertex2d (10,654);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (20,316);
    glVertex2d (20,656);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (30,319);
    glVertex2d (30,658);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (40,322);
    glVertex2d (40,660);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (50,325);
    glVertex2d (50,664);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (50,328);
    glVertex2d (50,667);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (60,328);
    glVertex2d (60,670);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (70,331);
    glVertex2d (70,673);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (80,335);
    glVertex2d (80,674);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,369);
    glVertex2d (90,398);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,399);
    glVertex2d (90,428);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,429);
    glVertex2d (90,458);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,459);
    glVertex2d (90,488);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,489);
    glVertex2d (90,518);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,519);
    glVertex2d (90,548);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,549);
    glVertex2d (90,578);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,579);
    glVertex2d (90,608);
    glEnd();
    glColor3f(0.258824,0.258824,0.435294); //11.0
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (0,612);
    glVertex2d (90,641);
    glEnd();
    glColor3f (0.8,0.8,0.8);//10.1
    glBegin(GL_POLYGON);
    glVertex2d (0,295);
    glVertex2d (100,328);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (100,380);
    glVertex2d (0,349);
    glEnd();
    glColor3f (1.0,1.0,1.0);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (0,352);
    glVertex2d (94,381);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10.0
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (0,347);
    glVertex2d (100,378);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10
    glBegin(GL_POLYGON);
    glVertex2d (150,335);
    glVertex2d (330,395);
    glVertex2d (330,685);
    glVertex2d (150,640);
    glEnd();
    glColor3f (1.0,1.0,1.0);//10
    glBegin(GL_POLYGON);
    glVertex2d (150,335);
    glVertex2d (100,365);
    glVertex2d (100,665);
    glVertex2d (150,640);
    glEnd();
    glColor3f (1.0,1.0,1.0);//10
    glBegin(GL_POLYGON);
    glVertex2d (100,665);
    glVertex2d (150,640);
    glVertex2d (330,685);
    glVertex2d (285,700);
    glVertex2d (100,700);
    glEnd();
    glColor3f (0.972549,0.972549,1.0);//10
    glBegin(GL_POLYGON);
    glVertex2d (100,675);
    glVertex2d (150,650);
    glVertex2d (310,688);
    glVertex2d (275,700);
    glVertex2d (100,700);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (140,593);
    glVertex2d (100,619);
    glColor3f (0.0,0.0,0.5);
    glVertex2d (100,644);
    glVertex2d (140,620);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (140,550);
    glVertex2d (100,575);
    glColor3f (0.0,0.0,0.5);
    glVertex2d (100,600);
    glVertex2d (140,575);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (140,505);
    glVertex2d (100,530);
    glColor3f (0.0,0.0,0.5);
    glVertex2d (100,555);
    glVertex2d (140,530);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (140,460);
    glVertex2d (100,485);
    glColor3f (0.0,0.0,0.5);
    glVertex2d (100,510);
    glVertex2d (140,485);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (140,415);
    glVertex2d (100,440);
    glColor3f (0.0,0.0,0.5);
    glVertex2d (100,465);
    glVertex2d (140,440);
    glEnd();
    glColor3f (0.8,0.8,0.8);//11
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2d (100,667);
    glVertex2d (150,640);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (160,593);
    glVertex2d (320,638);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (320,662);
    glVertex2d (160,619);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (160,548);
    glVertex2d (320,593);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (320,617);
    glVertex2d (160,574);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (160,503);
    glVertex2d (320,548);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (320,572);
    glVertex2d (160,529);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (160,458);
    glVertex2d (320,503);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (320,527);
    glVertex2d (160,484);
    glEnd();
    glColor3f (0.258824,0.258824,0.435294);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (160,413);
    glVertex2d (320,458);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (320,482);
    glVertex2d (160,439);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (150,335);
    glVertex2d (330,392);
    glVertex2d (330,442);
    glVertex2d (150,389);
    glEnd();
    glColor3f (0.8,0.8,0.8);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (150,335);
    glVertex2d (100,365);
    glVertex2d (100,420);
    glVertex2d (150,389);
    glEnd();
    glColor3f (1.0,1.0,1.0);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (120,415);
    glVertex2d (120,640);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (192,630);
    glVertex2d (192,420);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (224,640);
    glVertex2d (224,430);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (256,650);
    glVertex2d (256,430);
    glEnd();
    glColor3f (0.90,0.91,0.8);//10.0
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2d (288,660);
    glVertex2d (288,440);
    glEnd();

    glColor3f (0.8,0.0,0.6);//10.0
    glBegin(GL_POLYGON);
    glVertex2d (303,678);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (158,640);
    glVertex2d (158,678);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (303,708);
    glEnd();
    glColor3f (1.0,0.0,0.0);//10.0
    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glVertex2d (158,640);
    glVertex2d (158,678);
    glVertex2d (303,708);
    glVertex2d (303,678);
    glEnd();
    text11(165,653);//C
    text22(184,656);//i
    text33(190,657);//t
    text44(198,660);//y
    text55(220,670);//M
    text66(243,672);//a
    text77(253,673);//r
    text88(261,676);//k
    text99(273,678);//e
    text10(283,680);//t
    glColor3f (0.0,0.0,0.0);//Road Light2.1
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (787,350);
    glVertex2d (787,300);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (780,300);
    glVertex2d (780,350);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (813,355);
    glVertex2d (807,355);
    glColor3f (1.0,0.0,0.0);
    glVertex2d (807,365);
    glVertex2d (813,365);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (813,363);
    glVertex2d (787,350);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (780,350);
    glVertex2d (813,370);
    glEnd();
    glColor3f (1.0,1.0,1.0);//13.1
    glBegin(GL_POLYGON);
    glVertex2d (510,320);
    glVertex2d (670,380);
    glVertex2d (805,320);
    glVertex2d (640,250);
    glEnd();
    glColor3f (0.972549,0.972549,1.0);//13.1.1
    glBegin(GL_POLYGON);
    glVertex2d (530,319);
    glVertex2d (670,373);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (790,320);
    glVertex2d (640,258);
    glEnd();
    glColor3f (1.0,0.9411765,0.9607843);//13.2
    glBegin(GL_POLYGON);
    glVertex2d (510,320);
    glVertex2d (640,250);
    glVertex2d (640,150);
    glVertex2d (510,220);
    glEnd();
    glColor3f (1.0,0.854902,0.72549);//13.3
    glBegin(GL_POLYGON);
    glVertex2d (640,250);
    glVertex2d (640,150);
    glVertex2d (805,220);
    glVertex2d (805,320);
    glEnd();
    glColor3f (0.8,0.498039,0.196078);//13.4
    glBegin(GL_POLYGON);
    glVertex2d (650,165);
    glVertex2d (800,229);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (800,300);
    glVertex2d (650,235);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (800,300);
    glVertex2d (650,235);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (650,165);
    glVertex2d (800,229);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.1
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (660,239);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (660,170);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.2
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (670,243);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (670,174);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.3
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (680,247);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (680,179);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.4
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (690,252);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (690,183);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (700,256);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (700,187);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.6
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (710,260);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (710,192);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.7
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (720,265);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (720,196);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.8
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (730,270);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (730,200);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.9
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (740,274);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (740,205);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.10
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (750,278);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (750,209);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.11
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (760,282);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (760,213);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.12
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (770,286);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (770,217);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.13
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (780,291);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (780,222);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.4.14
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (790,295);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (790,226);
    glEnd();
    glColor3f (1.0,0.9411765,0.9607843);//13.4
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (805,253);
    glVertex2d (635,184);
    glEnd();
    glColor3f (1.0,0.9411765,0.9607843);//13.4
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (805,277);
    glVertex2d (635,209);
    glEnd();
    glColor3f (0.8,0.498039,0.196078);//13.5
    glBegin(GL_POLYGON);
    glVertex2d (630,235);
    glVertex2d (630,165);
    glColor3f (1.0,1.0,0.0);
    glVertex2d (525,220);
    glVertex2d (525,290);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (525,220);
    glVertex2d (525,290);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (630,235);
    glVertex2d (630,165);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (625,167);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (625,238);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (535,215);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (535,285);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (545,210);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (545,280);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (555,204);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (555,274);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (565,199);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (565,268);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (575,194);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (575,264);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (585,188);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (585,258);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (595,183);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (595,253);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (605,178);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (605,249);
    glEnd();
    glColor3f (0.8,0.8,0.8);//13.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (615,173);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (615,243);
    glEnd();
    glColor3f (1.0,0.9411765,0.9607843);//13.5
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (520,244);
    glVertex2d (635,184);
    glEnd();
    glColor3f (1.0,0.9411765,0.9607843);//13.5
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (520,268);
    glVertex2d (635,209);
    glEnd();
    /////
    glColor3f (0.0,0.0,0.0);//Traffic Light5
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (138,295);
    glVertex2d (138,350);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (130,350);
    glVertex2d (130,295);
    glEnd();
    glColor3f (0.0,0.0,0.0);//Traffic Light5
    glLineWidth(10);
    glBegin(GL_POLYGON);
    glVertex2d (142,340);
    glVertex2d (142,390);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (125,390);
    glVertex2d (125,340);
    glEnd();
    lightr(134,380);
    glEnd();
    lighty(134,365);
    glEnd();
    lightg(134,350);
    glEnd();
    ///////
    manH(m+7,n+8);
    man(m+7,n+4);
    glColor3f (0.6,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m+15,n);
    glVertex2d (m+15,n-20);
    glVertex2d (m,n-20);
    glVertex2d (m,n);
    glEnd();
    glColor3f (0.8,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m,n);
    glVertex2d (m,n-2);
    glVertex2d (m-2,n-3);
    glVertex2d (m-2,n-22);
    glVertex2d (m-6,n-22);
    glEnd();
    glColor3f (0.8,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m+15,n);
    glVertex2d (m+15,n-2);
    glVertex2d (m+17,n-3);
    glVertex2d (m+17,n-22);
    glVertex2d (m+21,n-22);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m+15,n-20);
    glVertex2d (m+15,n-27);
    glVertex2d (m,n-27);
    glVertex2d (m,n-20);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m+15,n-27);
    glVertex2d (m+15,n-47);
    glVertex2d (m+8,n-47);
    glVertex2d (m+8,n-27);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (m,n-27);
    glVertex2d (m,n-47);
    glVertex2d (m+6,n-47);
    glVertex2d (m+6,n-27);
    glEnd();
    glColor3f (1.0,1.0,1.0);//12.1
    glBegin(GL_POLYGON);
    glVertex2d (250,589);
    glVertex2d (390,630);
    glVertex2d (522,570);
    glVertex2d (380,510);
    glEnd();
    glColor3f (0.972549,0.972549,1.0);//12.2
    glBegin(GL_POLYGON);
    glVertex2d (270,585);
    glVertex2d (388,622);
    glVertex2d (503,570);
    glVertex2d (380,520);
    glEnd();
    glColor3f (1.0,1.0,1.0);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (250,589);
    glColor3f (1.0,0.854902,0.7254902);
    glVertex2d (250,154);
    glVertex2d (380,65);
    glColor3f (1.0,0.854902,0.7254902);
    glVertex2d (380,510);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (375,505);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (255,579);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (255,241);
    glVertex2d (375,165);
    glEnd();
    glColor3f (1.0,0.6470588,0.3098039);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (522,570);
    glVertex2d (380,510);
    glVertex2d (380,65);
    glVertex2d (522,125);
    glEnd();
    glColor3f (0.658824,0.658824,0.658824);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (517,226);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (385,165);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (385,505);
    glColor3f (1.0,1.0,1.0);
    glVertex2d (517,562);
    glColor3f (1.0,1.0,1.0);
    glEnd();
    glColor3f (0.556863,0.419608,0.137255);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (522,121);
    glVertex2d (380,65);
    glColor3f (1.0,0.6470588,0.3098039);
    glVertex2d (380,140);
    glVertex2d (522,196);
    glEnd();
    glColor3f (0.803922,0.407843,0.2235294);//12.3
    glBegin(GL_POLYGON);
    glVertex2d (380,65);
    glVertex2d (250,154);
    glColor3f (1.0,0.854902,0.7254902);
    glVertex2d (250,229);
    glVertex2d (380,140);
    glEnd();
    glColor3f (0.0,0.0,0.933);//12.5
    glBegin(GL_POLYGON);
    glVertex2d (370,200);
    glVertex2d (260,271);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (260,246);
    glVertex2d (370,175);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (260,296);
    glVertex2d (370,225);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (370,250);
    glVertex2d (260,321);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (282,230);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (282,309);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (304,216);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (304,296);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (326,202);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (326,282);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (348,188);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (348,267);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (260,391);
    glVertex2d (370,325);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (370,350);
    glVertex2d (260,416);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (260,441);
    glVertex2d (370,375);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (370,400);
    glVertex2d (260,466);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (260,491);
    glVertex2d (370,425);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (370,450);
    glVertex2d (260,518);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (260,541);
    glVertex2d (370,475);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (370,500);
    glVertex2d (260,566);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (282,376);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (282,555);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (304,363);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (304,542);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (326,350);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (326,529);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (348,337);
    glColor3f (0.8,0.8,0.8);
    glVertex2d (348,516);
    glEnd();
    glColor3f (0.0,0.0,0.933);//12.5
    glBegin(GL_POLYGON);
    glVertex2d (390,200);
    glVertex2d (512,256);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (512,231);
    glVertex2d (390,175);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,328);
    glVertex2d (390,275);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,300);
    glVertex2d (512,353);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,278);
    glVertex2d (390,225);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,250);
    glVertex2d (512,302);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,376);
    glVertex2d (390,325);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,350);
    glVertex2d (512,401);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,426);
    glVertex2d (390,375);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,400);
    glVertex2d (512,451);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,476);
    glVertex2d (390,425);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,450);
    glVertex2d (512,501);
    glEnd();
    glColor3f (0.0,0.0,0.933);
    glBegin(GL_POLYGON);
    glVertex2d (512,527);
    glVertex2d (390,475);
    glColor3f (0.0,1.0,1.0);
    glVertex2d (390,500);
    glVertex2d (512,552);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (416,512);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (416,185);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (440,522);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (440,195);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (466,533);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (466,207);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex2d (489,544);
    glColor3f (0.658824,0.658824,0.658824);
    glVertex2d (489,217);
    glEnd();
    glColor3f (1.0,1.0,1.0);//14.1
    glBegin(GL_POLYGON);
    glVertex2d (400,215);
    glVertex2d (530,272);
    glVertex2d (700,185);
    glVertex2d (570,120);
    glEnd();
    glColor3f (0.97,0.97,0.97);//14.1.1
    glBegin(GL_POLYGON);
    glVertex2d (420,213);
    glVertex2d (530,262);
    glVertex2d (680,185);
    glVertex2d (570,130);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2
    glBegin(GL_POLYGON);
    glVertex2d (400,215);
    glVertex2d (400,25);
    glVertex2d (438,0);
    glVertex2d (570,0);
    glVertex2d (570,120);
    glEnd();
    glColor3f (0.0,1.0,1.0);//14.2.1
    glBegin(GL_POLYGON);
    glVertex2d (420,190);
    glColor3f (0.0,0.0,0.1);
    glVertex2d (420,25);
    glColor3f (0.0,0.0,0.1);
    glVertex2d (455,0);
    glVertex2d (560,0);
    glColor3f (0.0,0.0,0.1);
    glVertex2d (560,112);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.2.2
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (437,13);
    glVertex2d (437,180);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.2.3
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (454,11);
    glVertex2d (454,170);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.2.4
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (471,6);
    glVertex2d (471,161);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.2.5
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (488,0);
    glVertex2d (488,151);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.2.6
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (543,0);
    glVertex2d (543,120);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.7
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (420,163);
    glVertex2d (560,85);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.8
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (420,136);
    glVertex2d (560,58);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.9
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (420,109);
    glVertex2d (560,31);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.10
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (420,82);
    glVertex2d (560,0);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.11
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (420,55);
    glVertex2d (560,-34);
    glEnd();
    glColor3f (1.0,0.882353,1.0);//14.2.4
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glVertex2d (505,0);
    glVertex2d (505,143);
    glVertex2d (525,132);
    glVertex2d (525,0);
    glEnd();
    glColor3f (0.803921,0.709804,0.803921);//14.3
    glBegin(GL_POLYGON);
    glVertex2d (570,120);
    glVertex2d (700,185);
    glVertex2d (700,25);
    glVertex2d (650,0);
    glVertex2d (570,0);
    glEnd();
    glColor3f (0.0,1.0,1.0);//14.3
    glBegin(GL_POLYGON);
    glVertex2d (580,110);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (690,165);
    glVertex2d (690,28);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (635,0);
    glVertex2d (580,0);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.3.1
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (602,0);
    glVertex2d (602,120);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.3.2
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (624,0);
    glVertex2d (624,131);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.3.3
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (646,6);
    glVertex2d (646,143);
    glEnd();
    glColor3f (0.0,0.0,0.0);//14.3.4
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2d (668,17);
    glVertex2d (668,154);
    glEnd();
    glColor3f (0.803921,0.709804,0.803921);//14.3.5
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (580,83);
    glVertex2d (690,138);
    glEnd();
    glColor3f (0.803921,0.709804,0.803921);//14.3.6
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (580,56);
    glVertex2d (690,111);
    glEnd();
    glColor3f (0.803921,0.709804,0.803921);//14.3.7
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (580,29);
    glVertex2d (690,84);
    glEnd();
    glColor3f (0.803921,0.709804,0.803921);//14.3.8
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2d (580,2);
    glVertex2d (690,57);
    glEnd();
    glColor3f (0.0,0.4,0.0);//14.2.4
    glLineWidth(2);
    glBegin(GL_POLYGON);
    glVertex2d (575,124);
    glVertex2d (575,160);
    glVertex2d (682,215);
    glVertex2d (682,177);
    glEnd();
    glColor3f (1.0,1.0,1.0);//14.2.4
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2d (577,127);
    glVertex2d (577,158);
    glVertex2d (680,212);
    glVertex2d (680,179);
    glEnd();
    text21(579,140);//L
    text12(593,145);//a
    text13(605,150);//b
    text14(623,165);//A
    text15(643,170);//i
    text16(653,175);//d
    text17(666,183);//+
    int x1=0,y1=20,p1=0;
    while(x1<y1)
    {
        if (p1<0)
        {
            x1=x1+1;
            y1=y1;
            p1=p1+(2*x1)+1;
        }
        else
        {
            x1=x1+1;
            y1=y1-1;
            p1=p1+(2*x1)+1-(2*y1);
        }
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a7,  y1+b7);
        glVertex2i( y1+a7,  x1+b7);
        glVertex2i( x1+a7, -y1+b7);
        glVertex2i( y1+a7, -x1+b7);
        glVertex2i(-x1+a7, -y1+b7);
        glVertex2i(-y1+a7, -x1+b7);
        glVertex2i(-y1+a7,  x1+b7);
        glVertex2i(-x1+a7,  y1+b7);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a8,  y1+b8);
        glVertex2i( y1+a8,  x1+b8);
        glVertex2i( x1+a8, -y1+b8);
        glVertex2i( y1+a8, -x1+b8);
        glVertex2i(-x1+a8, -y1+b8);
        glVertex2i(-y1+a8, -x1+b8);
        glVertex2i(-y1+a8,  x1+b8);
        glVertex2i(-x1+a8,  y1+b8);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a9,  y1+b9);
        glVertex2i( y1+a9,  x1+b9);
        glVertex2i( x1+a9, -y1+b9);
        glVertex2i( y1+a9, -x1+b9);
        glVertex2i(-x1+a9, -y1+b9);
        glVertex2i(-y1+a9, -x1+b9);
        glVertex2i(-y1+a9,  x1+b9);
        glVertex2i(-x1+a9,  y1+b9);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a10,  y1+b10);
        glVertex2i( y1+a10,  x1+b10);
        glVertex2i( x1+a10, -y1+b10);
        glVertex2i( y1+a10, -x1+b10);
        glVertex2i(-x1+a10, -y1+b10);
        glVertex2i(-y1+a10, -x1+b10);
        glVertex2i(-y1+a10,  x1+b10);
        glVertex2i(-x1+a10,  y1+b10);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a11,  y1+b11);
        glVertex2i( y1+a11,  x1+b11);
        glVertex2i( x1+a11, -y1+b11);
        glVertex2i( y1+a11, -x1+b11);
        glVertex2i(-x1+a11, -y1+b11);
        glVertex2i(-y1+a11, -x1+b11);
        glVertex2i(-y1+a11,  x1+b11);
        glVertex2i(-x1+a11,  y1+b11);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a12,  y1+b12);
        glVertex2i( y1+a12,  x1+b12);
        glVertex2i( x1+a12, -y1+b12);
        glVertex2i( y1+a12, -x1+b12);
        glVertex2i(-x1+a12, -y1+b12);
        glVertex2i(-y1+a12, -x1+b12);
        glVertex2i(-y1+a12,  x1+b12);
        glVertex2i(-x1+a12,  y1+b12);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a13,  y1+b13);
        glVertex2i( y1+a13,  x1+b13);
        glVertex2i( x1+a13, -y1+b13);
        glVertex2i( y1+a13, -x1+b13);
        glVertex2i(-x1+a13, -y1+b13);
        glVertex2i(-y1+a13, -x1+b13);
        glVertex2i(-y1+a13,  x1+b13);
        glVertex2i(-x1+a13,  y1+b13);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a14,  y1+b14);
        glVertex2i( y1+a14,  x1+b14);
        glVertex2i( x1+a14, -y1+b14);
        glVertex2i( y1+a14, -x1+b14);
        glVertex2i(-x1+a14, -y1+b14);
        glVertex2i(-y1+a14, -x1+b14);
        glVertex2i(-y1+a14,  x1+b14);
        glVertex2i(-x1+a14,  y1+b14);
        glEnd();
        glColor3f (0.137255,0.556863,0.137255);
        glBegin(GL_POLYGON);
        glVertex2i( x1+a15,  y1+b15);
        glVertex2i( y1+a15,  x1+b15);
        glVertex2i( x1+a15, -y1+b15);
        glVertex2i( y1+a15, -x1+b15);
        glVertex2i(-x1+a15, -y1+b15);
        glVertex2i(-y1+a15, -x1+b15);
        glVertex2i(-y1+a15,  x1+b15);
        glVertex2i(-x1+a15,  y1+b15);
        glEnd();
        int x1=0,y1=5,p1=0;
        while(x1<y1)
        {
            if (p1<0)
            {
                x1=x1+1;
                y1=y1;
                p1=p1+(2*x1)+1;
            }
            else
            {
                x1=x1+1;
                y1=y1-1;
                p1=p1+(2*x1)+1-(2*y1);
            }
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7,  y1+b7);
            glVertex2i( y1+a7,  x1+b7);
            glVertex2i( x1+a7, -y1+b7);
            glVertex2i( y1+a7, -x1+b7);
            glVertex2i(-x1+a7, -y1+b7);
            glVertex2i(-y1+a7, -x1+b7);
            glVertex2i(-y1+a7,  x1+b7);
            glVertex2i(-x1+a7,  y1+b7);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7,  y1+b7+10);
            glVertex2i( y1+a7,  x1+b7+10);
            glVertex2i( x1+a7, -y1+b7+10);
            glVertex2i( y1+a7, -x1+b7+10);
            glVertex2i(-x1+a7, -y1+b7+10);
            glVertex2i(-y1+a7, -x1+b7+10);
            glVertex2i(-y1+a7,  x1+b7+10);
            glVertex2i(-x1+a7,  y1+b7+10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7,  y1+b7-10);
            glVertex2i( y1+a7,  x1+b7-10);
            glVertex2i( x1+a7, -y1+b7-10);
            glVertex2i( y1+a7, -x1+b7-10);
            glVertex2i(-x1+a7, -y1+b7-10);
            glVertex2i(-y1+a7, -x1+b7-10);
            glVertex2i(-y1+a7,  x1+b7-10);
            glVertex2i(-x1+a7,  y1+b7-10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7-13,  y1+b7-10);
            glVertex2i( y1+a7-13,  x1+b7-10);
            glVertex2i( x1+a7-13, -y1+b7-10);
            glVertex2i( y1+a7-13, -x1+b7-10);
            glVertex2i(-x1+a7-13, -y1+b7-10);
            glVertex2i(-y1+a7-13, -x1+b7-10);
            glVertex2i(-y1+a7-13,  x1+b7-10);
            glVertex2i(-x1+a7-13,  y1+b7-10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7-13,  y1+b7+7);
            glVertex2i( y1+a7-13,  x1+b7+7);
            glVertex2i( x1+a7-13, -y1+b7+7);
            glVertex2i( y1+a7-13, -x1+b7+7);
            glVertex2i(-x1+a7-13, -y1+b7+7);
            glVertex2i(-y1+a7-13, -x1+b7+7);
            glVertex2i(-y1+a7-13,  x1+b7+7);
            glVertex2i(-x1+a7-13,  y1+b7+7);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7+15,  y1+b7+6);
            glVertex2i( y1+a7+15,  x1+b7+6);
            glVertex2i( x1+a7+15, -y1+b7+6);
            glVertex2i( y1+a7+15, -x1+b7+6);
            glVertex2i(-x1+a7+15, -y1+b7+6);
            glVertex2i(-y1+a7+15, -x1+b7+6);
            glVertex2i(-y1+a7+15,  x1+b7+6);
            glVertex2i(-x1+a7+15,  y1+b7+6);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a7+15,  y1+b7-6);
            glVertex2i( y1+a7+15,  x1+b7-6);
            glVertex2i( x1+a7+15, -y1+b7-6);
            glVertex2i( y1+a7+15, -x1+b7-6);
            glVertex2i(-x1+a7+15, -y1+b7-6);
            glVertex2i(-y1+a7+15, -x1+b7-6);
            glVertex2i(-y1+a7+15,  x1+b7-6);
            glVertex2i(-x1+a7+15,  y1+b7-6);
            glEnd();///////////////
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8,  y1+b8);
            glVertex2i( y1+a8,  x1+b8);
            glVertex2i( x1+a8, -y1+b8);
            glVertex2i( y1+a8, -x1+b8);
            glVertex2i(-x1+a8, -y1+b8);
            glVertex2i(-y1+a8, -x1+b8);
            glVertex2i(-y1+a8,  x1+b8);
            glVertex2i(-x1+a8,  y1+b8);
            glEnd();
            glColor3f (1.0,0.9,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8,  y1+b8+10);
            glVertex2i( y1+a8,  x1+b8+10);
            glVertex2i( x1+a8, -y1+b8+10);
            glVertex2i( y1+a8, -x1+b8+10);
            glVertex2i(-x1+a8, -y1+b8+10);
            glVertex2i(-y1+a8, -x1+b8+10);
            glVertex2i(-y1+a8,  x1+b8+10);
            glVertex2i(-x1+a8,  y1+b8+10);
            glEnd();
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8,  y1+b8-10);
            glVertex2i( y1+a8,  x1+b8-10);
            glVertex2i( x1+a8, -y1+b8-10);
            glVertex2i( y1+a8, -x1+b8-10);
            glVertex2i(-x1+a8, -y1+b8-10);
            glVertex2i(-y1+a8, -x1+b8-10);
            glVertex2i(-y1+a8,  x1+b8-10);
            glVertex2i(-x1+a8,  y1+b8-10);
            glEnd();
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8-13,  y1+b8-10);
            glVertex2i( y1+a8-13,  x1+b8-10);
            glVertex2i( x1+a8-13, -y1+b8-10);
            glVertex2i( y1+a8-13, -x1+b8-10);
            glVertex2i(-x1+a8-13, -y1+b8-10);
            glVertex2i(-y1+a8-13, -x1+b8-10);
            glVertex2i(-y1+a8-13,  x1+b8-10);
            glVertex2i(-x1+a8-13,  y1+b8-10);
            glEnd();
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8-13,  y1+b8+7);
            glVertex2i( y1+a8-13,  x1+b8+7);
            glVertex2i( x1+a8-13, -y1+b8+7);
            glVertex2i( y1+a8-13, -x1+b8+7);
            glVertex2i(-x1+a8-13, -y1+b8+7);
            glVertex2i(-y1+a8-13, -x1+b8+7);
            glVertex2i(-y1+a8-13,  x1+b8+7);
            glVertex2i(-x1+a8-13,  y1+b8+7);
            glEnd();
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8+15,  y1+b8+6);
            glVertex2i( y1+a8+15,  x1+b8+6);
            glVertex2i( x1+a8+15, -y1+b8+6);
            glVertex2i( y1+a8+15, -x1+b8+6);
            glVertex2i(-x1+a8+15, -y1+b8+6);
            glVertex2i(-y1+a8+15, -x1+b8+6);
            glVertex2i(-y1+a8+15,  x1+b8+6);
            glVertex2i(-x1+a8+15,  y1+b8+6);
            glEnd();
            glColor3f (1.0,1.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a8+15,  y1+b8-6);
            glVertex2i( y1+a8+15,  x1+b8-6);
            glVertex2i( x1+a8+15, -y1+b8-6);
            glVertex2i( y1+a8+15, -x1+b8-6);
            glVertex2i(-x1+a8+15, -y1+b8-6);
            glVertex2i(-y1+a8+15, -x1+b8-6);
            glVertex2i(-y1+a8+15,  x1+b8-6);
            glVertex2i(-x1+a8+15,  y1+b8-6);
            glEnd();////////////
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9,  y1+b9);
            glVertex2i( y1+a9,  x1+b9);
            glVertex2i( x1+a9, -y1+b9);
            glVertex2i( y1+a9, -x1+b9);
            glVertex2i(-x1+a9, -y1+b9);
            glVertex2i(-y1+a9, -x1+b9);
            glVertex2i(-y1+a9,  x1+b9);
            glVertex2i(-x1+a9,  y1+b9);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9,  y1+b9+10);
            glVertex2i( y1+a9,  x1+b9+10);
            glVertex2i( x1+a9, -y1+b9+10);
            glVertex2i( y1+a9, -x1+b9+10);
            glVertex2i(-x1+a9, -y1+b9+10);
            glVertex2i(-y1+a9, -x1+b9+10);
            glVertex2i(-y1+a9,  x1+b9+10);
            glVertex2i(-x1+a9,  y1+b9+10);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9,  y1+b9-10);
            glVertex2i( y1+a9,  x1+b9-10);
            glVertex2i( x1+a9, -y1+b9-10);
            glVertex2i( y1+a9, -x1+b9-10);
            glVertex2i(-x1+a9, -y1+b9-10);
            glVertex2i(-y1+a9, -x1+b9-10);
            glVertex2i(-y1+a9,  x1+b9-10);
            glVertex2i(-x1+a9,  y1+b9-10);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9-13,  y1+b9-10);
            glVertex2i( y1+a9-13,  x1+b9-10);
            glVertex2i( x1+a9-13, -y1+b9-10);
            glVertex2i( y1+a9-13, -x1+b9-10);
            glVertex2i(-x1+a9-13, -y1+b9-10);
            glVertex2i(-y1+a9-13, -x1+b9-10);
            glVertex2i(-y1+a9-13,  x1+b9-10);
            glVertex2i(-x1+a9-13,  y1+b9-10);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9-13,  y1+b9+7);
            glVertex2i( y1+a9-13,  x1+b9+7);
            glVertex2i( x1+a9-13, -y1+b9+7);
            glVertex2i( y1+a9-13, -x1+b9+7);
            glVertex2i(-x1+a9-13, -y1+b9+7);
            glVertex2i(-y1+a9-13, -x1+b9+7);
            glVertex2i(-y1+a9-13,  x1+b9+7);
            glVertex2i(-x1+a9-13,  y1+b9+7);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9+15,  y1+b9+6);
            glVertex2i( y1+a9+15,  x1+b9+6);
            glVertex2i( x1+a9+15, -y1+b9+6);
            glVertex2i( y1+a9+15, -x1+b9+6);
            glVertex2i(-x1+a9+15, -y1+b9+6);
            glVertex2i(-y1+a9+15, -x1+b9+6);
            glVertex2i(-y1+a9+15,  x1+b9+6);
            glVertex2i(-x1+a9+15,  y1+b9+6);
            glEnd();
            glColor3f (1.0,0.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a9+15,  y1+b9-6);
            glVertex2i( y1+a9+15,  x1+b9-6);
            glVertex2i( x1+a9+15, -y1+b9-6);
            glVertex2i( y1+a9+15, -x1+b9-6);
            glVertex2i(-x1+a9+15, -y1+b9-6);
            glVertex2i(-y1+a9+15, -x1+b9-6);
            glVertex2i(-y1+a9+15,  x1+b9-6);
            glVertex2i(-x1+a9+15,  y1+b9-6);
            glEnd();////////////
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10,  y1+b10);
            glVertex2i( y1+a10,  x1+b10);
            glVertex2i( x1+a10, -y1+b10);
            glVertex2i( y1+a10, -x1+b10);
            glVertex2i(-x1+a10, -y1+b10);
            glVertex2i(-y1+a10, -x1+b10);
            glVertex2i(-y1+a10,  x1+b10);
            glVertex2i(-x1+a10,  y1+b10);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10,  y1+b10+10);
            glVertex2i( y1+a10,  x1+b10+10);
            glVertex2i( x1+a10, -y1+b10+10);
            glVertex2i( y1+a10, -x1+b10+10);
            glVertex2i(-x1+a10, -y1+b10+10);
            glVertex2i(-y1+a10, -x1+b10+10);
            glVertex2i(-y1+a10,  x1+b10+10);
            glVertex2i(-x1+a10,  y1+b10+10);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10,  y1+b10-10);
            glVertex2i( y1+a10,  x1+b10-10);
            glVertex2i( x1+a10, -y1+b10-10);
            glVertex2i( y1+a10, -x1+b10-10);
            glVertex2i(-x1+a10, -y1+b10-10);
            glVertex2i(-y1+a10, -x1+b10-10);
            glVertex2i(-y1+a10,  x1+b10-10);
            glVertex2i(-x1+a10,  y1+b10-10);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10-13,  y1+b10-10);
            glVertex2i( y1+a10-13,  x1+b10-10);
            glVertex2i( x1+a10-13, -y1+b10-10);
            glVertex2i( y1+a10-13, -x1+b10-10);
            glVertex2i(-x1+a10-13, -y1+b10-10);
            glVertex2i(-y1+a10-13, -x1+b10-10);
            glVertex2i(-y1+a10-13,  x1+b10-10);
            glVertex2i(-x1+a10-13,  y1+b10-10);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10-13,  y1+b10+7);
            glVertex2i( y1+a10-13,  x1+b10+7);
            glVertex2i( x1+a10-13, -y1+b10+7);
            glVertex2i( y1+a10-13, -x1+b10+7);
            glVertex2i(-x1+a10-13, -y1+b10+7);
            glVertex2i(-y1+a10-13, -x1+b10+7);
            glVertex2i(-y1+a10-13,  x1+b10+7);
            glVertex2i(-x1+a10-13,  y1+b10+7);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10+15,  y1+b10+6);
            glVertex2i( y1+a10+15,  x1+b10+6);
            glVertex2i( x1+a10+15, -y1+b10+6);
            glVertex2i( y1+a10+15, -x1+b10+6);
            glVertex2i(-x1+a10+15, -y1+b10+6);
            glVertex2i(-y1+a10+15, -x1+b10+6);
            glVertex2i(-y1+a10+15,  x1+b10+6);
            glVertex2i(-x1+a10+15,  y1+b10+6);
            glEnd();
            glColor3f (0.6,0.0,0.4);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a10+15,  y1+b10-6);
            glVertex2i( y1+a10+15,  x1+b10-6);
            glVertex2i( x1+a10+15, -y1+b10-6);
            glVertex2i( y1+a10+15, -x1+b10-6);
            glVertex2i(-x1+a10+15, -y1+b10-6);
            glVertex2i(-y1+a10+15, -x1+b10-6);
            glVertex2i(-y1+a10+15,  x1+b10-6);
            glVertex2i(-x1+a10+15,  y1+b10-6);
            glEnd();////////
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11,  y1+b11);
            glVertex2i( y1+a11,  x1+b11);
            glVertex2i( x1+a11, -y1+b11);
            glVertex2i( y1+a11, -x1+b11);
            glVertex2i(-x1+a11, -y1+b11);
            glVertex2i(-y1+a11, -x1+b11);
            glVertex2i(-y1+a11,  x1+b11);
            glVertex2i(-x1+a11,  y1+b11);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11,  y1+b11+10);
            glVertex2i( y1+a11,  x1+b11+10);
            glVertex2i( x1+a11, -y1+b11+10);
            glVertex2i( y1+a11, -x1+b11+10);
            glVertex2i(-x1+a11, -y1+b11+10);
            glVertex2i(-y1+a11, -x1+b11+10);
            glVertex2i(-y1+a11,  x1+b11+10);
            glVertex2i(-x1+a11,  y1+b11+10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11,  y1+b11-10);
            glVertex2i( y1+a11,  x1+b11-10);
            glVertex2i( x1+a11, -y1+b11-10);
            glVertex2i( y1+a11, -x1+b11-10);
            glVertex2i(-x1+a11, -y1+b11-10);
            glVertex2i(-y1+a11, -x1+b11-10);
            glVertex2i(-y1+a11,  x1+b11-10);
            glVertex2i(-x1+a11,  y1+b11-10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11-13,  y1+b11-10);
            glVertex2i( y1+a11-13,  x1+b11-10);
            glVertex2i( x1+a11-13, -y1+b11-10);
            glVertex2i( y1+a11-13, -x1+b11-10);
            glVertex2i(-x1+a11-13, -y1+b11-10);
            glVertex2i(-y1+a11-13, -x1+b11-10);
            glVertex2i(-y1+a11-13,  x1+b11-10);
            glVertex2i(-x1+a11-13,  y1+b11-10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11-13,  y1+b11+7);
            glVertex2i( y1+a11-13,  x1+b11+7);
            glVertex2i( x1+a11-13, -y1+b11+7);
            glVertex2i( y1+a11-13, -x1+b11+7);
            glVertex2i(-x1+a11-13, -y1+b11+7);
            glVertex2i(-y1+a11-13, -x1+b11+7);
            glVertex2i(-y1+a11-13,  x1+b11+7);
            glVertex2i(-x1+a11-13,  y1+b11+7);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11+15,  y1+b11+6);
            glVertex2i( y1+a11+15,  x1+b11+6);
            glVertex2i( x1+a11+15, -y1+b11+6);
            glVertex2i( y1+a11+15, -x1+b11+6);
            glVertex2i(-x1+a11+15, -y1+b11+6);
            glVertex2i(-y1+a11+15, -x1+b11+6);
            glVertex2i(-y1+a11+15,  x1+b11+6);
            glVertex2i(-x1+a11+15,  y1+b11+6);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a11+15,  y1+b11-6);
            glVertex2i( y1+a11+15,  x1+b11-6);
            glVertex2i( x1+a11+15, -y1+b11-6);
            glVertex2i( y1+a11+15, -x1+b11-6);
            glVertex2i(-x1+a11+15, -y1+b11-6);
            glVertex2i(-y1+a11+15, -x1+b11-6);
            glVertex2i(-y1+a11+15,  x1+b11-6);
            glVertex2i(-x1+a11+15,  y1+b11-6);
            glEnd();//////
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12,  y1+b12);
            glVertex2i( y1+a12,  x1+b12);
            glVertex2i( x1+a12, -y1+b12);
            glVertex2i( y1+a12, -x1+b12);
            glVertex2i(-x1+a12, -y1+b12);
            glVertex2i(-y1+a12, -x1+b12);
            glVertex2i(-y1+a12,  x1+b12);
            glVertex2i(-x1+a12,  y1+b12);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12,  y1+b12+10);
            glVertex2i( y1+a12,  x1+b12+10);
            glVertex2i( x1+a12, -y1+b12+10);
            glVertex2i( y1+a12, -x1+b12+10);
            glVertex2i(-x1+a12, -y1+b12+10);
            glVertex2i(-y1+a12, -x1+b12+10);
            glVertex2i(-y1+a12,  x1+b12+10);
            glVertex2i(-x1+a12,  y1+b12+10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12,  y1+b12-10);
            glVertex2i( y1+a12,  x1+b12-10);
            glVertex2i( x1+a12, -y1+b12-10);
            glVertex2i( y1+a12, -x1+b12-10);
            glVertex2i(-x1+a12, -y1+b12-10);
            glVertex2i(-y1+a12, -x1+b12-10);
            glVertex2i(-y1+a12,  x1+b12-10);
            glVertex2i(-x1+a12,  y1+b12-10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12-13,  y1+b12-10);
            glVertex2i( y1+a12-13,  x1+b12-10);
            glVertex2i( x1+a12-13, -y1+b12-10);
            glVertex2i( y1+a12-13, -x1+b12-10);
            glVertex2i(-x1+a12-13, -y1+b12-10);
            glVertex2i(-y1+a12-13, -x1+b12-10);
            glVertex2i(-y1+a12-13,  x1+b12-10);
            glVertex2i(-x1+a12-13,  y1+b12-10);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12-13,  y1+b12+7);
            glVertex2i( y1+a12-13,  x1+b12+7);
            glVertex2i( x1+a12-13, -y1+b12+7);
            glVertex2i( y1+a12-13, -x1+b12+7);
            glVertex2i(-x1+a12-13, -y1+b12+7);
            glVertex2i(-y1+a12-13, -x1+b12+7);
            glVertex2i(-y1+a12-13,  x1+b12+7);
            glVertex2i(-x1+a12-13,  y1+b12+7);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12+15,  y1+b12+6);
            glVertex2i( y1+a12+15,  x1+b12+6);
            glVertex2i( x1+a12+15, -y1+b12+6);
            glVertex2i( y1+a12+15, -x1+b12+6);
            glVertex2i(-x1+a12+15, -y1+b12+6);
            glVertex2i(-y1+a12+15, -x1+b12+6);
            glVertex2i(-y1+a12+15,  x1+b12+6);
            glVertex2i(-x1+a12+15,  y1+b12+6);
            glEnd();
            glColor3f (1.0,0.0,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a12+15,  y1+b12-6);
            glVertex2i( y1+a12+15,  x1+b12-6);
            glVertex2i( x1+a12+15, -y1+b12-6);
            glVertex2i( y1+a12+15, -x1+b12-6);
            glVertex2i(-x1+a12+15, -y1+b12-6);
            glVertex2i(-y1+a12+15, -x1+b12-6);
            glVertex2i(-y1+a12+15,  x1+b12-6);
            glVertex2i(-x1+a12+15,  y1+b12-6);
            glEnd();/////
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13,  y1+b13);
            glVertex2i( y1+a13,  x1+b13);
            glVertex2i( x1+a13, -y1+b13);
            glVertex2i( y1+a13, -x1+b13);
            glVertex2i(-x1+a13, -y1+b13);
            glVertex2i(-y1+a13, -x1+b13);
            glVertex2i(-y1+a13,  x1+b13);
            glVertex2i(-x1+a13,  y1+b13);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13,  y1+b13+10);
            glVertex2i( y1+a13,  x1+b13+10);
            glVertex2i( x1+a13, -y1+b13+10);
            glVertex2i( y1+a13, -x1+b13+10);
            glVertex2i(-x1+a13, -y1+b13+10);
            glVertex2i(-y1+a13, -x1+b13+10);
            glVertex2i(-y1+a13,  x1+b13+10);
            glVertex2i(-x1+a13,  y1+b13+10);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13,  y1+b13-10);
            glVertex2i( y1+a13,  x1+b13-10);
            glVertex2i( x1+a13, -y1+b13-10);
            glVertex2i( y1+a13, -x1+b13-10);
            glVertex2i(-x1+a13, -y1+b13-10);
            glVertex2i(-y1+a13, -x1+b13-10);
            glVertex2i(-y1+a13,  x1+b13-10);
            glVertex2i(-x1+a13,  y1+b13-10);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13-13,  y1+b13-10);
            glVertex2i( y1+a13-13,  x1+b13-10);
            glVertex2i( x1+a13-13, -y1+b13-10);
            glVertex2i( y1+a13-13, -x1+b13-10);
            glVertex2i(-x1+a13-13, -y1+b13-10);
            glVertex2i(-y1+a13-13, -x1+b13-10);
            glVertex2i(-y1+a13-13,  x1+b13-10);
            glVertex2i(-x1+a13-13,  y1+b13-10);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13-13,  y1+b13+7);
            glVertex2i( y1+a13-13,  x1+b13+7);
            glVertex2i( x1+a13-13, -y1+b13+7);
            glVertex2i( y1+a13-13, -x1+b13+7);
            glVertex2i(-x1+a13-13, -y1+b13+7);
            glVertex2i(-y1+a13-13, -x1+b13+7);
            glVertex2i(-y1+a13-13,  x1+b13+7);
            glVertex2i(-x1+a13-13,  y1+b13+7);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13+15,  y1+b13+6);
            glVertex2i( y1+a13+15,  x1+b13+6);
            glVertex2i( x1+a13+15, -y1+b13+6);
            glVertex2i( y1+a13+15, -x1+b13+6);
            glVertex2i(-x1+a13+15, -y1+b13+6);
            glVertex2i(-y1+a13+15, -x1+b13+6);
            glVertex2i(-y1+a13+15,  x1+b13+6);
            glVertex2i(-x1+a13+15,  y1+b13+6);
            glEnd();
            glColor3f (1.0,0.5,0.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a13+15,  y1+b13-6);
            glVertex2i( y1+a13+15,  x1+b13-6);
            glVertex2i( x1+a13+15, -y1+b13-6);
            glVertex2i( y1+a13+15, -x1+b13-6);
            glVertex2i(-x1+a13+15, -y1+b13-6);
            glVertex2i(-y1+a13+15, -x1+b13-6);
            glVertex2i(-y1+a13+15,  x1+b13-6);
            glVertex2i(-x1+a13+15,  y1+b13-6);
            glEnd();/////////
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14,  y1+b14);
            glVertex2i( y1+a14,  x1+b14);
            glVertex2i( x1+a14, -y1+b14);
            glVertex2i( y1+a14, -x1+b14);
            glVertex2i(-x1+a14, -y1+b14);
            glVertex2i(-y1+a14, -x1+b14);
            glVertex2i(-y1+a14,  x1+b14);
            glVertex2i(-x1+a14,  y1+b14);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14,  y1+b14+10);
            glVertex2i( y1+a14,  x1+b14+10);
            glVertex2i( x1+a14, -y1+b14+10);
            glVertex2i( y1+a14, -x1+b14+10);
            glVertex2i(-x1+a14, -y1+b14+10);
            glVertex2i(-y1+a14, -x1+b14+10);
            glVertex2i(-y1+a14,  x1+b14+10);
            glVertex2i(-x1+a14,  y1+b14+10);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14,  y1+b14-10);
            glVertex2i( y1+a14,  x1+b14-10);
            glVertex2i( x1+a14, -y1+b14-10);
            glVertex2i( y1+a14, -x1+b14-10);
            glVertex2i(-x1+a14, -y1+b14-10);
            glVertex2i(-y1+a14, -x1+b14-10);
            glVertex2i(-y1+a14,  x1+b14-10);
            glVertex2i(-x1+a14,  y1+b14-10);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14-13,  y1+b14-10);
            glVertex2i( y1+a14-13,  x1+b14-10);
            glVertex2i( x1+a14-13, -y1+b14-10);
            glVertex2i( y1+a14-13, -x1+b14-10);
            glVertex2i(-x1+a14-13, -y1+b14-10);
            glVertex2i(-y1+a14-13, -x1+b14-10);
            glVertex2i(-y1+a14-13,  x1+b14-10);
            glVertex2i(-x1+a14-13,  y1+b14-10);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14-13,  y1+b14+7);
            glVertex2i( y1+a14-13,  x1+b14+7);
            glVertex2i( x1+a14-13, -y1+b14+7);
            glVertex2i( y1+a14-13, -x1+b14+7);
            glVertex2i(-x1+a14-13, -y1+b14+7);
            glVertex2i(-y1+a14-13, -x1+b14+7);
            glVertex2i(-y1+a14-13,  x1+b14+7);
            glVertex2i(-x1+a14-13,  y1+b14+7);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14+15,  y1+b14+6);
            glVertex2i( y1+a14+15,  x1+b14+6);
            glVertex2i( x1+a14+15, -y1+b14+6);
            glVertex2i( y1+a14+15, -x1+b14+6);
            glVertex2i(-x1+a14+15, -y1+b14+6);
            glVertex2i(-y1+a14+15, -x1+b14+6);
            glVertex2i(-y1+a14+15,  x1+b14+6);
            glVertex2i(-x1+a14+15,  y1+b14+6);
            glEnd();
            glColor3f (0.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a14+15,  y1+b14-6);
            glVertex2i( y1+a14+15,  x1+b14-6);
            glVertex2i( x1+a14+15, -y1+b14-6);
            glVertex2i( y1+a14+15, -x1+b14-6);
            glVertex2i(-x1+a14+15, -y1+b14-6);
            glVertex2i(-y1+a14+15, -x1+b14-6);
            glVertex2i(-y1+a14+15,  x1+b14-6);
            glVertex2i(-x1+a14+15,  y1+b14-6);
            glEnd();//////////////
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15,  y1+b15);
            glVertex2i( y1+a15,  x1+b15);
            glVertex2i( x1+a15, -y1+b15);
            glVertex2i( y1+a15, -x1+b15);
            glVertex2i(-x1+a15, -y1+b15);
            glVertex2i(-y1+a15, -x1+b15);
            glVertex2i(-y1+a15,  x1+b15);
            glVertex2i(-x1+a15,  y1+b15);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15,  y1+b15+10);
            glVertex2i( y1+a15,  x1+b15+10);
            glVertex2i( x1+a15, -y1+b15+10);
            glVertex2i( y1+a15, -x1+b15+10);
            glVertex2i(-x1+a15, -y1+b15+10);
            glVertex2i(-y1+a15, -x1+b15+10);
            glVertex2i(-y1+a15,  x1+b15+10);
            glVertex2i(-x1+a15,  y1+b15+10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15,  y1+b15-10);
            glVertex2i( y1+a15,  x1+b15-10);
            glVertex2i( x1+a15, -y1+b15-10);
            glVertex2i( y1+a15, -x1+b15-10);
            glVertex2i(-x1+a15, -y1+b15-10);
            glVertex2i(-y1+a15, -x1+b15-10);
            glVertex2i(-y1+a15,  x1+b15-10);
            glVertex2i(-x1+a15,  y1+b15-10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15-13,  y1+b15-10);
            glVertex2i( y1+a15-13,  x1+b15-10);
            glVertex2i( x1+a15-13, -y1+b15-10);
            glVertex2i( y1+a15-13, -x1+b15-10);
            glVertex2i(-x1+a15-13, -y1+b15-10);
            glVertex2i(-y1+a15-13, -x1+b15-10);
            glVertex2i(-y1+a15-13,  x1+b15-10);
            glVertex2i(-x1+a15-13,  y1+b15-10);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15-13,  y1+b15+7);
            glVertex2i( y1+a15-13,  x1+b15+7);
            glVertex2i( x1+a15-13, -y1+b15+7);
            glVertex2i( y1+a15-13, -x1+b15+7);
            glVertex2i(-x1+a15-13, -y1+b15+7);
            glVertex2i(-y1+a15-13, -x1+b15+7);
            glVertex2i(-y1+a15-13,  x1+b15+7);
            glVertex2i(-x1+a15-13,  y1+b15+7);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15+15,  y1+b15+6);
            glVertex2i( y1+a15+15,  x1+b15+6);
            glVertex2i( x1+a15+15, -y1+b15+6);
            glVertex2i( y1+a15+15, -x1+b15+6);
            glVertex2i(-x1+a15+15, -y1+b15+6);
            glVertex2i(-y1+a15+15, -x1+b15+6);
            glVertex2i(-y1+a15+15,  x1+b15+6);
            glVertex2i(-x1+a15+15,  y1+b15+6);
            glEnd();
            glColor3f (1.0,1.0,1.0);
            glBegin(GL_POLYGON);
            glVertex2i( x1+a15+15,  y1+b15-6);
            glVertex2i( y1+a15+15,  x1+b15-6);
            glVertex2i( x1+a15+15, -y1+b15-6);
            glVertex2i( y1+a15+15, -x1+b15-6);
            glVertex2i(-x1+a15+15, -y1+b15-6);
            glVertex2i(-y1+a15+15, -x1+b15-6);
            glVertex2i(-y1+a15+15,  x1+b15-6);
            glVertex2i(-x1+a15+15,  y1+b15-6);
            glEnd();
        }
    }

    /////////
    glColor3f (1.0,0.75686,0.1451);
    glBegin(GL_POLYGON);
    glVertex2d (van,cav);
    glVertex2d (van+40,cav+5);
    glVertex2d (van+90,cav-20);
    glVertex2d (van+45,cav-35);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2d (van,cav);
    glVertex2d (van+40,cav+5);
    glVertex2d (van+90,cav-20);
    glVertex2d (van+45,cav-35);
    glEnd();
    glColor3f (1.0,0.75686,0.1451);
    glBegin(GL_POLYGON);
    glVertex2d (van+15,cav-55);
    glVertex2d (van,cav);//tl
    glVertex2d (van+45,cav-35);//bl
    glVertex2d (van+45,cav-105);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2d (van+15,cav-55);
    glVertex2d (van,cav);//tl
    glVertex2d (van+45,cav-35);//bl
    glVertex2d (van+45,cav-105);
    glEnd();
    glColor3f (1.0,0.75686,0.1451);
    glBegin(GL_POLYGON);
    glVertex2d (van+120,cav-75);
    glVertex2d (van+120,cav-40);
    glVertex2d (van+90,cav-20);
    glVertex2d (van+45,cav-30);
    glVertex2d (van+45,cav-103);
    glEnd();

    glColor3f (0.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d (van+110,cav-50);
    glVertex2d (van+110,cav-40);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (van+80,cav-20);
    glVertex2d (van+50,cav-30);
    glVertex2d (van+50,cav-70);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2d (van+110,cav-50);
    glVertex2d (van+110,cav-40);
    glColor3f (0.0,0.0,0.0);
    glVertex2d (van+80,cav-20);
    glVertex2d (van+50,cav-30);
    glVertex2d (van+50,cav-70);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINE_LOOP);
    glVertex2d (van+120,cav-75);
    glVertex2d (van+120,cav-40);
    glVertex2d (van+90,cav-20);
    glVertex2d (van+45,cav-30);
    glVertex2d (van+45,cav-103);
    glEnd();
    glColor3f (1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d (van+15,cav-55);
    glVertex2d (van-35,cav-72);
    glVertex2d (van-35,cav-130);
    glVertex2d (van+45,cav-103);
    glEnd();
    glColor3f (0.0,0.0,0.0);
    glLineWidth(10);
    glBegin(GL_LINE_LOOP);
    glVertex2d (van+15,cav-55);
    glVertex2d (van-35,cav-72);
    glVertex2d (van-35,cav-125);
    glVertex2d (van+44,cav-98);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (van+15,cav-55);
    glVertex2d (van+9,cav-32);
    glVertex2d (van-33,cav-45);
    glVertex2d (van-33,cav-72);
    glEnd();
    glColor3f (1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (van+45,cav-70);
    glVertex2d (van+46,cav-106);
    glVertex2d (van-33,cav-134);
    glVertex2d (van-33,cav-100);
    glEnd();
    car_wheel(van+65,cav-95);
    car_wheel(van-15,cav-125);
    glColor3f (1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d (825,669);
    glVertex2d (825,698);
    glVertex2d (940,640);
    glVertex2d (940,611);
    glEnd();
    glColor3f (0.0,0.0,1.0);
    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glVertex2d (825,669);
    glVertex2d (825,698);
    glVertex2d (940,640);
    glVertex2d (940,611);
    glEnd();
    text(827,669);//P
    text2(841,663);//i
    text3(849,658);//Z
    text4(866,653);//z
    text5(876,648);//a
    text6(886,641);//H
    text7(905,632);//u
    text8(919,621);//T
    if(s<1420&&t>150)
    {
        t=t-0.6;
        s=s+1.2;
    }
    else
    {
        s=200;
        t=700;
    }
    glutPostRedisplay();
    if(s1>0&&t1<1100)
    {
        t1=t1+0.6;
        s1=s1-1.2;
    }
    else
    {
        s1=1380;
        t1=200;
    }
    glutPostRedisplay();
    if(S>0&&T<1100)
    {
        S=S-1.2;
        T=T+0.6;
    }
    else
    {
        S=1380;
        T=200;
    }
    glutPostRedisplay();
    if(ss<1420&&tt>150)
    {
        tt=tt-0.6;
        ss=ss+1.2;
    }
    else
    {
        ss=200;
        tt=700;
    }
    glutPostRedisplay();
    if(sS<1420&&tT>150)
    {
        tT=tT-0.6;
        sS=sS+1.2;
    }
    else
    {
        sS=200;
        tT=700;
    }
    glutPostRedisplay();
    if(B>0&&G<1100)
    {
        B=B-1.2;
        G=G+0.6;
    }
    else
    {
        B=1380;
        G=200;
    }
    glutPostRedisplay();
    if(M>790&&N<600)
    {
        M=M-0.4;
        N=N+0.2;
    }
    else
    {
        M=1350;
        N=320;
    }
    glutPostRedisplay();
    if(van<130&&cav<270)
    {
        van=van+0.2;
        cav=cav+0.1;
    }
    else
    {
        van=30;
        cav=270;
    }
    glutPostRedisplay();
    if(m<630&&n>210)
    {
        m=m+0.4;
        n=n-0.2;
    }
    else
    {
        m=60;
        n=350;
    }
    glutPostRedisplay();

    glFlush();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (1.0, 1.0, 1.0,1.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,1320,0,700);
}

int main(int argc, char** argv)
{
    printf("City Scenery");
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1320,700);
    glutInitWindowPosition (0,0);
    glutCreateWindow ("City Scenery");
    init ();
    glutDisplayFunc(display);
    PlaySound(TEXT("Horn.wav"),NULL,SND_ASYNC | SND_LOOP);
    glutMainLoop();
    return 0;
}





