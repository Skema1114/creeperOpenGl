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

/* FUNÇÃO NAO TESTADA MAS COM A LOGICA FUNCIONAL */
void montarQuadrado(int xInicio, int xFim, int yCima, int yBaixo, float r, float g, float b){
glPolygonMode(GL_BACK, GL_FILL);
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    glVertex2i(xInicio,yCima);  glVertex2i(xFim,yCima); 
	glVertex2i(xFim,yBaixo); glVertex2i(xInicio,yBaixo); 
    glEnd();
}


void display(void){
    int i;
    glClear(GL_COLOR_BUFFER_BIT);
    glDisable(GL_POLYGON_STIPPLE);
    
    //borda preta cabeça
	montarQuadrado(40,280,540,300,0.0,0.0,0.0);

    
    //verde cabeça  
	montarQuadrado(60,260,520,320,0.0,1.0,0.0);

    
    //olho esquerdo 
	montarQuadrado(100,140,480,440,0.0,0.0,0.0);	

    
    //olho direito  
	montarQuadrado(180,220,480,440,0.0,0.0,0.0);

    
    //nariz  
	montarQuadrado(140,180,440,420,0.0,0.0,0.0);

    
    //boca 
	montarQuadrado(120,200,420,380,0.0,0.0,0.0);
	
    
    //barba esquerda
	montarQuadrado(120,140,380,360,0.0,0.0,0.0);
	
    
    //barba esquerda
	montarQuadrado(180,200,380,360,0.0,0.0,0.0);
	
    
    //barda corpo
	montarQuadrado(60,260,300,20,0.0,0.0,0.0);
	
    
    //corpo
	montarQuadrado(80,240,300,40,0.0,1.0,0.0);

    
    //borda pé esquerdo
	montarQuadrado(0,120,120,0,0.0,0.0,0.0);

    
    //pé esquerdo
	montarQuadrado(20,100,100,20,0.0,1.0,0.0);

    
    //borda pé direito
	montarQuadrado(200,320,120,0,0.0,0.0,0.0);
	
    
    //pé direito
	montarQuadrado(220,300,100,20,0.0,1.0,0.0);
    
    
    //dedo esquerdo pé esquerdo
	montarQuadrado(20,40,40,20,0.0,0.0,0.0);
	
   
    //dedo esquerdo pé esquerdo
	montarQuadrado(60,80,40,20,0.0,0.0,0.0);

    
    //detalhes pé esquerdo
	montarQuadrado(20,40,100,80,0.2,0.4,0.3); //verde escuro
	
	montarQuadrado(60,80,80,60,0.2,0.4,0.3);
    
	montarQuadrado(20,40,80,60,1.0,1.0,1.0);
    
	montarQuadrado(40,60,40,20,0.2,0.4,0.3);
    
    montarQuadrado(80,100,40,20,0.2,0.4,0.3);
    
    
    //detalhes pé direito
	montarQuadrado(220,280,40,20,0.2,0.4,0.3);
    
	montarQuadrado(260,280,40,20,0.2,0.4,0.3);    
    
    montarQuadrado(240,260,40,20,1.0,1.0,1.0);
    
	montarQuadrado(280,300,40,20,1.0,1.0,1.0);

	montarQuadrado(220,240,100,80,1.0,1.0,1.0);    
    
	montarQuadrado(240,260,80,60,0.2,0.4,0.3);
    
    montarQuadrado(280,300,100,80,0.2,0.4,0.3);
   
   
    //brancos da cabeça
	montarQuadrado(80,100,520,500,1.0,1.0,1.0);
    
	montarQuadrado(160,180,520,500,1.0,1.0,1.0);
  
	montarQuadrado(180,200,500,480,1.0,1.0,1.0);  
    
	montarQuadrado(140,160,460,440,1.0,1.0,1.0);

	montarQuadrado(60,80,420,400,1.0,1.0,1.0);
    
	montarQuadrado(220,240,360,340,1.0,1.0,1.0);
 
	montarQuadrado(180,200,340,320,1.0,1.0,1.0);
	
    
    //verdes escuros da cabeça
	montarQuadrado(80,100,500,480,0.2,0.4,0.3);

	montarQuadrado(240,260,460,360,0.2,0.4,0.3);
   
	montarQuadrado(220,240,440,420,0.2,0.4,0.3); 

	montarQuadrado(80,100,400,380,0.2,0.4,0.3);
   
	montarQuadrado(220,240,400,380,0.2,0.4,0.3); 

    montarQuadrado(60,80,360,340,0.2,0.4,0.3);
    
    montarQuadrado(100,120,340,320,0.2,0.4,0.3);
    
    montarQuadrado(220,240,340,320,0.2,0.4,0.3);
     
    
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