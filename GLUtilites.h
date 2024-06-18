#ifndef GLUTILITIES_H
#define GLUTILITIES_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

bool initGLFW();
GLFWwindow* createWindow(int width, int height, const char* title);
bool initGLEW();
GLuint loadShaders(const char* vertex_file_path, const char* fragment_file_path);

#endif // GLUTILITIES_H
