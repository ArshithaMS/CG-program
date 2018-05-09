// modified line.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"     
#include<stdio.h>
#include<GL/glut.h>
int p,i;
void drawLine(int x)
{
	glBegin(GL_LINES);
	glVertex2i(10+p,10);                                   
	glVertex2i(20+p,10);
	glEnd();
}
void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		if(p>500)
		{
			p=0;
			glutPostRedisplay();
		}
		else{
		p+=10;
	glutPostRedisplay();
}
	}
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	for(i=0;i<50;i++)
		drawLine(i);
	glFlush();
}
void init()
{
	glClearColor(0,0,0,1);
	gluOrtho2D(0,500,0,500);
}

void main()
{
glutInitDisplayMode(GLUT_RGB);
glutInitWindowSize (500,500);
glutCreateWindow("Line drawing");init();         
glutDisplayFunc(display);
glutMouseFunc(mouse);
glutMainLoop();
}





 