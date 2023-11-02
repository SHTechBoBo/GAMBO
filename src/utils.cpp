#include "utils.h"

void buildWindow(GLFWwindow *&window, const int width, const int height){
    // initialize and configure
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // window creation
    window = glfwCreateWindow(width, height, "OpenGL_Template", NULL, NULL);
    glfwMakeContextCurrent(window);

    // load all OpenGL function pointers
    gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}
