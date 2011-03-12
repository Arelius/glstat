#include <stdio.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("glstat\n");

#define GL_INTEGER(x) { GLint i; glGetIntegerv(x, &i); printf(#x ": %d\n", i); }

    GL_INTEGER(GL_MAX_DRAW_BUFFERS);
    GL_INTEGER(GL_MAX_VERTEX_ATTRIBS);
    GL_INTEGER(GL_MAX_ELEMENTS_VERTICES);

    return 0;
}
