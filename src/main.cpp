#include "utils.h"

// global settings
GLFWwindow* window;
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main(){
    // build window
    buildWindow(window, SCR_WIDTH, SCR_HEIGHT);

    // main loop
    while (!glfwWindowShouldClose(window)){
        // render background
        glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // swap buffers and poll IO events
        glfwPollEvents();
        glfwSwapBuffers(window);
    }

    // terminate and clearing alresources
    glfwTerminate();
    return 0;
}
