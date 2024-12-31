#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <cmath>
#include <iostream>

void drawLetterY() {
    glBegin(GL_LINES);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.5f, 0.0f);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-0.25f, -0.5f, 0.0f);
    glVertex3f(0.25f, -0.5f, 0.0f);
    glEnd();
}

void drawLetterT() {
    glBegin(GL_LINES);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(0.5f, 0.5f, 0.0f);
    glVertex3f(0.0f, 0.5f, 0.0f);
    glVertex3f(0.0f, -0.5f, 0.0f);
    glEnd();
}

void drawLetterE() {
    glBegin(GL_LINES);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glVertex3f(-0.5f, 0.0f, 0.0f);
    glVertex3f(0.5f, 0.0f, 0.0f);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(0.5f, 0.5f, 0.0f);
    glEnd();
}

void drawLetterX() {
    glBegin(GL_LINES);
    glVertex3f(-0.5f, 0.5f, 0.0f);
    glVertex3f(0.5f, -0.5f, 0.0f);
    glVertex3f(0.5f, 0.5f, 0.0f);
    glVertex3f(-0.5f, -0.5f, 0.0f);
    glEnd();
}

void drawLetterT_2() {
    drawLetterT();
}

void setupOpenGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0f, 800.0f / 600.0f, 0.1f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
}

void updateColor(float &r, float &g, float &b, float delta) {
    r += delta;
    g += delta;
    b += delta;
    if (r > 1.0f) r = 0.0f;
    if (g > 1.0f) g = 0.0f;
    if (b > 1.0f) b = 0.0f;
}

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW!" << std::endl;
        return -1;
    }

    GLFWwindow *window = glfwCreateWindow(800, 600, "3D 'ytext' with RGB", nullptr, nullptr);// you can replace it with your own name too
    if (!window) {
        std::cerr << "Failed to create window!" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    setupOpenGL();

    float r = 0.0f, g = 0.0f, b = 0.0f;
    float delta = 0.005f;

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glLoadIdentity();
        glTranslatef(-1.5f, 0.0f, -6.0f);
        glColor3f(r, g, b);
        drawLetterY();

        glLoadIdentity();
        glTranslatef(-0.5f, 0.0f, -6.0f);
        glColor3f(r, g, b);
        drawLetterT();

        glLoadIdentity();
        glTranslatef(0.5f, 0.0f, -6.0f);
        glColor3f(r, g, b);
        drawLetterE();

        glLoadIdentity();
        glTranslatef(1.5f, 0.0f, -6.0f);
        glColor3f(r, g, b);
        drawLetterX();

        glLoadIdentity();
        glTranslatef(2.5f, 0.0f, -6.0f);
        glColor3f(r, g, b);
        drawLetterT_2();

        updateColor(r, g, b, delta);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
