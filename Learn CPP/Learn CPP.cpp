// Input Output Stream
#include <iostream>

#include <GLFW/glfw3.h>

// STD => SHORT FOR STANDARD LIBRARY

// << is for input. || >> is for output! (at least in the std stuff

int main() {

	GLFWwindow* window;

	if (!glfwInit()) {
		std::cout << "GLFW was unable to initialize.";
		return -1;
	}
	else std::cout << "GLFW was initialized succesfully.";
	
	window = glfwCreateWindow(640, 520, "C++", NULL, NULL);
	
	if (!window) {
		std::cout << "Window or OpenGL context creation failed.";
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	while(!glfwWindowShouldClose(window)) {
		// Render here
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2f(+0.5, -0.5);
		glVertex2f(0.0, +0.5);
		glVertex2f(-0.5, -0.5);
		glEnd();

		// Swaps front and back buffers
		glfwSwapBuffers(window);

		// Poll for and Process Events
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}