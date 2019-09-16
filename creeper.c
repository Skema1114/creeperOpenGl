#include <glut.h>
#include <stdlib.h>


GLfloat r,g,b;


void init(void);
void display(void);
void keyboard(unsigned char key, int x, int y);
void mouse(int button, int state, int x, int y);


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1920, 1080);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Preenchendo regiões");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}


void init(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glOrtho (0, 1920, 0, 1080, -1 ,1);
    r=0; g=1; b=0;
}


void display(void){
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glDisable(GL_POLYGON_STIPPLE);
    
    //borda preta cabeça
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(40,540);  glVertex2i(280,540); glVertex2i(280,300); glVertex2i(40,300); 
    glEnd();
    
    //verde cabeça  
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(60,520);  glVertex2i(260,520); glVertex2i(260,320); glVertex2i(60,320); 
    glEnd();
    
    //olho esquerdo  
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(100,480);  glVertex2i(140,480); glVertex2i(140,440); glVertex2i(100,440); 
    glEnd();
    
    //olho direito  
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(180,480);  glVertex2i(220,480); glVertex2i(220,440); glVertex2i(180,440); 
    glEnd();
    
    //nariz  
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(140,440);  glVertex2i(180,440); glVertex2i(180,420); glVertex2i(140,420); 
    glEnd();
    
    //boca 
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(120,420);  glVertex2i(200,420); glVertex2i(200,380); glVertex2i(120,380); 
    glEnd();
    
    //barba esquerda
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(120,380);  glVertex2i(140,380); glVertex2i(140,360); glVertex2i(120,360); 
    glEnd();
    
    //barba esquerda
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(180,380);  glVertex2i(200,380); glVertex2i(200,360); glVertex2i(180,360); 
    glEnd();
    
    //barda corpo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(60,300);  glVertex2i(260,300); glVertex2i(260,20); glVertex2i(60,20); 
    glEnd();
    
    //corpo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(80,300);  glVertex2i(240,300); glVertex2i(240,40); glVertex2i(80,40); 
    glEnd();
    
    //borda pé esquerdo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,120);  glVertex2i(120,120); glVertex2i(120,0); glVertex2i(0,0); 
    glEnd();
    
    //pé esquerdo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(20,100);  glVertex2i(100,100); glVertex2i(100,20); glVertex2i(20,20); 
    glEnd();
    
    //borda pé direito
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(200,120);  glVertex2i(320,120); glVertex2i(320,0); glVertex2i(200,0); 
    glEnd();
    
    //pé direito
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(220,100);  glVertex2i(300,100); glVertex2i(300,20); glVertex2i(220,20); 
    glEnd();
    
    
    //dedo esquerdo pé esquerdo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(20,40);  glVertex2i(40,40); glVertex2i(40,20); glVertex2i(20,20); 
    glEnd();
   
    //dedo esquerdo pé esquerdo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(60,40);  glVertex2i(80,40); glVertex2i(80,20); glVertex2i(60,20); 
    glEnd();
    
    //detalhes pé esquerdo
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);//verde escuro
    glBegin(GL_POLYGON);
    glVertex2i(20,100);  glVertex2i(40,100); glVertex2i(40,80); glVertex2i(20,80); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(60,80);  glVertex2i(80,80); glVertex2i(80,60); glVertex2i(60,60); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(20,80);  glVertex2i(40,80); glVertex2i(40,60); glVertex2i(20,60); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(40,40);  glVertex2i(60,40); glVertex2i(60,20); glVertex2i(40,20); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(80,40);  glVertex2i(100,40); glVertex2i(100,20); glVertex2i(80,20); 
    glEnd();
    
    //detalhes pé direito
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);//verde escuro
    glBegin(GL_POLYGON);
    glVertex2i(220,40);  glVertex2i(240,40); glVertex2i(240,20); glVertex2i(220,20); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(260,40);  glVertex2i(280,40); glVertex2i(280,20); glVertex2i(260,20); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(240,40);  glVertex2i(260,40); glVertex2i(260,20); glVertex2i(240,20); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(280,40);  glVertex2i(300,40); glVertex2i(300,20); glVertex2i(280,20); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(220,100);  glVertex2i(240,100); glVertex2i(240,80); glVertex2i(220,80); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);//verde escuro
    glBegin(GL_POLYGON);
    glVertex2i(240,80);  glVertex2i(260,80); glVertex2i(260,60); glVertex2i(240,60); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(280,100);  glVertex2i(300,100); glVertex2i(300,80); glVertex2i(280,80); 
    glEnd();
   
    //brancos da cabeça
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(80,520);  glVertex2i(100,520); glVertex2i(100,500); glVertex2i(80,500); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(160,520);  glVertex2i(180,520); glVertex2i(180,500); glVertex2i(160,500); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(180,500);  glVertex2i(200,500); glVertex2i(200,480); glVertex2i(180,480); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(140,460);  glVertex2i(160,460); glVertex2i(160,440); glVertex2i(140,440); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(60,420);  glVertex2i(80,420); glVertex2i(80,400); glVertex2i(60,400); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(220,360);  glVertex2i(240,360); glVertex2i(240,340); glVertex2i(220,340); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(180,340);  glVertex2i(200,340); glVertex2i(200,320); glVertex2i(180,320); 
    glEnd();
    
    //verdes escuros da cabeça
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(80,500);  glVertex2i(100,500); glVertex2i(100,480); glVertex2i(80,480); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(240,460);  glVertex2i(260,460); glVertex2i(260,360); glVertex2i(240,360); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(220,440);  glVertex2i(240,440); glVertex2i(240,420); glVertex2i(220,420); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(80,400);  glVertex2i(100,400); glVertex2i(100,380); glVertex2i(80,380); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(220,400);  glVertex2i(240,400); glVertex2i(240,380); glVertex2i(220,380); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(60,360);  glVertex2i(80,360); glVertex2i(80,340); glVertex2i(60,340); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(100,340);  glVertex2i(120,340); glVertex2i(120,320); glVertex2i(100,320); 
    glEnd();
    
    glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(0.2, 0.4, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(220,340);  glVertex2i(240,340); glVertex2i(240,320); glVertex2i(220,320); 
    glEnd();
   
    
    
    glFlush();
    glutSwapBuffers();
    
}


void keyboard(unsigned char key, int x, int y){
    switch (key) {
        case 27:
            exit(0);
            break;
    }
}


void mouse(int button, int state, int x, int y){
    switch (button) {
        case GLUT_LEFT_BUTTON:
            if (state == GLUT_DOWN) {
                r=(GLfloat)rand()/(RAND_MAX+1.0);
                g=(GLfloat)rand()/(RAND_MAX+1.0);
                b=(GLfloat)rand()/(RAND_MAX+1.0);
                glutPostRedisplay();
            }
            break;
    }
}
