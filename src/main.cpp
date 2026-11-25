#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include <iostream>

int main()
{
    const glm::vec3 vector(1.0f, 0.0f, 0.0f);
    std::cout << "Vector: (" << vector.x << ", " << vector.y << ", "
              << vector.z << ")\n";

    if (glfwInit() != GLFW_TRUE)
    {
        std::cerr << "Failed to initialize GLFW.\n";
        return 1;
    }

    std::cout << "GLFW initialized successfully.\n";
    glfwTerminate();
    return 0;
}
