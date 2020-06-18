#include <iostream>
#include <glut.h>


void display() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);
	



	glBegin(GL_POLYGON);//kolom  pertama
	glVertex2f(-10.0,10.0);
	glVertex2f(-8.0, 10.0);
	glVertex2f(-8.0, 8.0);
	glVertex2f(-10.0, 8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 10.0);
	glVertex2f(-4.0, 10.0);
	glVertex2f(-4.0, 8.0);
	glVertex2f(-6.0, 8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-2.0, 10.0);
	glVertex2f(0.0, 10.0);
	glVertex2f(0.0, 8.0);
	glVertex2f(-2.0, 8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.0, 10.0);
	glVertex2f(4.0, 10.0);
	glVertex2f(4.0, 8.0);
	glVertex2f(2.0, 8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6.0, 10.0);
	glVertex2f(8.0, 10.0);
	glVertex2f(8.0, 8.0);
	glVertex2f(6.0, 8.0);
	glEnd();

	glBegin(GL_POLYGON);//kolom kedua
	glVertex2f(-8.0, 8.0);
	glVertex2f(-6.0, 8.0);
	glVertex2f(-6.0, 6.0);
	glVertex2f(-8.0, 6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4.0, 8.0);
	glVertex2f(-2.0, 8.0);
	glVertex2f(-2.0, 6.0);
	glVertex2f(-4.0, 6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0, 8.0);
	glVertex2f(2.0, 8.0);
	glVertex2f(2.0, 6.0);
	glVertex2f(0.0, 6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.0, 8.0);
	glVertex2f(6.0, 8.0);
	glVertex2f(6.0, 6.0);
	glVertex2f(4.0, 6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8.0, 8.0);
	glVertex2f(10.0, 8.0);
	glVertex2f(10.0, 6.0);
	glVertex2f(8.0, 6.0);
	glEnd();

	glBegin(GL_POLYGON);//kolom ke tiga
	glVertex2f(-10.0, 6.0);
	glVertex2f(-8.0, 6.0);
	glVertex2f(-8.0, 4.0);
	glVertex2f(-10.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 6.0);
	glVertex2f(-4.0, 6.0);
	glVertex2f(-4.0, 4.0);
	glVertex2f(-6.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-2.0, 6.0);
	glVertex2f(0.0, 6.0);
	glVertex2f(0.0, 4.0);
	glVertex2f(-2.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.0, 6.0);
	glVertex2f(4.0, 6.0);
	glVertex2f(4.0, 4.0);
	glVertex2f(2.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6.0, 6.0);
	glVertex2f(8.0, 6.0);
	glVertex2f(8.0, 4.0);
	glVertex2f(6.0, 4.0);
	glEnd();

	glBegin(GL_POLYGON);//kolom ke 4
	glVertex2f(-8.0, 4.0);
	glVertex2f(-6.0, 4.0);
	glVertex2f(-6.0, 2.0);
	glVertex2f(-8.0, 2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4.0, 4.0);
	glVertex2f(-2.0, 4.0);
	glVertex2f(-2.0, 2.0);
	glVertex2f(-4.0, 2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0, 4.0);
	glVertex2f(2.0, 4.0);
	glVertex2f(2.0, 2.0);
	glVertex2f(0.0, 2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.0, 4.0);
	glVertex2f(6.0, 4.0);
	glVertex2f(6.0, 2.0);
	glVertex2f(4.0, 2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8.0, 4.0);
	glVertex2f(10.0, 4.0);
	glVertex2f(10.0, 2.0);
	glVertex2f(8.0, 2.0);
	glEnd();

	glBegin(GL_POLYGON);// kolom ke 5
	glVertex2f(-10.0, 2.0);
	glVertex2f(-8.0, 2.0);
	glVertex2f(-8.0, 0.0);
	glVertex2f(-10.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0, 2.0);
	glVertex2f(-4.0, 2.0);
	glVertex2f(-4.0, 0.0);
	glVertex2f(-6.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-2.0, 2.0);
	glVertex2f(0.0, 2.0);
	glVertex2f(0.0, 0.0);
	glVertex2f(-2.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.0, 2.0);
	glVertex2f(4.0, 2.0);
	glVertex2f(4.0, 0.0);
	glVertex2f(2.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6.0, 2.0);
	glVertex2f(8.0, 2.0);
	glVertex2f(8.0, 0.0);
	glVertex2f(6.0, 0.0);
	glEnd();

	glBegin(GL_POLYGON); //kolom ke 6
	glVertex2f(-8.0, 0.0);
	glVertex2f(-6.0, 0.0);
	glVertex2f(-6.0, -2.0);
	glVertex2f(-8.0, -2.0);
	glEnd();


	glBegin(GL_POLYGON); 
	glVertex2f(-4.0, 0.0);
	glVertex2f(-2.0, 0.0);
	glVertex2f(-2.0, -2.0);
	glVertex2f(-4.0, -2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0, 0.0);
	glVertex2f(2.0, 0.0);
	glVertex2f(2.0, -2.0);
	glVertex2f(0.0, -2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.0, 0.0);
	glVertex2f(6.0, 0.0);
	glVertex2f(6.0, -2.0);
	glVertex2f(4.0, -2.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8.0, 0.0);
	glVertex2f(10.0, 0.0);
	glVertex2f(10.0, -2.0);
	glVertex2f(8.0, -2.0);
	glEnd();

	glBegin(GL_POLYGON); //kolom ke 7
	glVertex2f(-10.0, -2.0);
	glVertex2f(-8.0, -2.0);
	glVertex2f(-8.0, -4.0);
	glVertex2f(-10.0, -4.0);
	glEnd();

	glBegin(GL_POLYGON); 
	glVertex2f(-6.0, -2.0);
	glVertex2f(-4.0, -2.0);
	glVertex2f(-4.0, -4.0);
	glVertex2f(-6.0, -4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-2.0, -2.0);
	glVertex2f(0.0, -2.0);
	glVertex2f(0.0, -4.0);
	glVertex2f(-2.0, -4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.0, -2.0);
	glVertex2f(4.0, -2.0);
	glVertex2f(4.0, -4.0);
	glVertex2f(2.0, -4.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6.0, -2.0);
	glVertex2f(8.0, -2.0);
	glVertex2f(8.0, -4.0);
	glVertex2f(6.0, -4.0);
	glEnd();

	glBegin(GL_POLYGON);// kolom ke 8
	glVertex2f(-8.0, -4.0);
	glVertex2f(-6.0, -4.0);
	glVertex2f(-6.0, -6.0);
	glVertex2f(-8.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4.0, -4.0);
	glVertex2f(-2.0, -4.0);
	glVertex2f(-2.0, -6.0);
	glVertex2f(-4.0, -6.0);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.0, -4.0);
	glVertex2f(2.0, -4.0);
	glVertex2f(2.0, -6.0);
	glVertex2f(0.0, -6.0);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(4.0, -4.0);
	glVertex2f(6.0, -4.0);
	glVertex2f(6.0, -6.0);
	glVertex2f(4.0, -6.0);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(8.0, -4.0);
	glVertex2f(10.0, -4.0);
	glVertex2f(10.0, -6.0);
	glVertex2f(8.0, -6.0);
	glEnd();

	glBegin(GL_POLYGON);// kolom ke 9
	glVertex2f(-10.0, -6.0);
	glVertex2f(-8.0, -6.0);
	glVertex2f(-8.0, -8.0);
	glVertex2f(-10.0, -8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-6.0, -6.0);
	glVertex2f(-4.0, -6.0);
	glVertex2f(-4.0, -8.0);
	glVertex2f(-6.0, -8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-2.0, -6.0);
	glVertex2f(0.0, -6.0);
	glVertex2f(0.0, -8.0);
	glVertex2f(-2.0, -8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(2.0, -6.0);
	glVertex2f(4.0, -6.0);
	glVertex2f(4.0, -8.0);
	glVertex2f(2.0, -8.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(6.0, -6.0);
	glVertex2f(8.0, -6.0);
	glVertex2f(8.0, -8.0);
	glVertex2f(6.0, -8.0);
	glEnd();

	glBegin(GL_POLYGON);// kolom ke 10
	glVertex2f(-8.0, -8.0);
	glVertex2f(-6.0, -8.0);
	glVertex2f(-6.0, -10.0);
	glVertex2f(-8.0, -10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-4.0, -8.0);
	glVertex2f(-2.0, -8.0);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-4.0, -10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.0, -8.0);
	glVertex2f(2.0, -8.0);
	glVertex2f(2.0, -10.0);
	glVertex2f(0.0, -10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(4.0, -8.0);
	glVertex2f(6.0, -8.0);
	glVertex2f(6.0, -10.0);
	glVertex2f(4.0, -10.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(8.0, -8.0);
	glVertex2f(10.0, -8.0);
	glVertex2f(10.0, -10.0);
	glVertex2f(8.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-8.0, 10.0);
	glVertex2f(-8.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-6.0, 10.0);
	glVertex2f(-6.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-4.0, 10.0);
	glVertex2f(-4.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-2.0, 10.0);
	glVertex2f(-2.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 10.0);
	glVertex2f(0.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(2.0, 10.0);
	glVertex2f(2.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(4.0, 10.0);
	glVertex2f(4.0, -10.0);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(6.0, 10.0);
	glVertex2f(6.0, -10.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(8.0, 10.0);
	glVertex2f(8.0, -10.0);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, 8.0);
	glVertex2f(10.0, 8.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, 6.0);
	glVertex2f(10.0, 6.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, 4.0);
	glVertex2f(10.0, 4.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, 2.0);
	glVertex2f(10.0, 2.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -0.0);
	glVertex2f(10.0, -0.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -2.0);
	glVertex2f(10.0, -2.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -4.0);
	glVertex2f(10.0, -4.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -6.0);
	glVertex2f(10.0, -6.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -8.0);
	glVertex2f(10.0, -8.0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-10.0, -10.0);
	glVertex2f(10.0, -10.0);
	glEnd();

	
	glutSwapBuffers();
}


void myinit() {
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(2.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Tugas animasi");
	glutDisplayFunc(display);

	myinit();


	glutMainLoop();

	return 0;
}