#include <stdio.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1280, 720);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("glstat\n");

    GLint maxbuffers;
    glGetIntegerv(GL_MAX_DRAW_BUFFERS, &maxbuffers);
    printf("Max supported draw buffers: %d\n", maxbuffers);

    GLint maxattribs;
    glGetIntegerv(GL_MAX_VERTEX_ATTRIBS, &maxattribs);
    printf("Max supported vertex attributes: %d\n", maxattribs);

    GLint maxvertex;
    glGetIntegerv(GL_MAX_ELEMENTS_VERTICES, &maxvertex);
    printf("Max supported element vertices: %d\n", maxvertex);
}
