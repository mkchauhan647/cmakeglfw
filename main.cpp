// #include <iostream>
// #include <GLFW/glfw3.h>
// int main(){

//     std::cout<<"Hello World";
//     GLFWwindow *window;

//     int width, height;

//     if( !glfwInit() )
//     {
//         fprintf( stderr, "Failed to initialize GLFW\n" );
//         exit( EXIT_FAILURE );
//     }

//     glfwWindowHint(GLFW_DEPTH_BITS, 16);
//     glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);

//     window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
//     if (!window)
//     {
//         fprintf( stderr, "Failed to open GLFW window\n" );
//         glfwTerminate();
//         exit( EXIT_FAILURE );
//     }

//     // Set callback functions
//     // glfwSetFramebufferSizeCallback(window, reshape);
//     // glfwSetKeyCallback(window, key);

//     // glfwMakeContextCurrent(window);
//     // gladLoadGL(glfwGetProcAddress);
//     // glfwSwapInterval( 1 );

//     // glfwGetFramebufferSize(window, &width, &height);
//     // reshape(window, width, height);

//     // Parse command-line options

//     // Main loop
//     while( !glfwWindowShouldClose(window) )
//     {
       

//         // Swap buffers
//         glfwSwapBuffers(window);
//         glfwPollEvents();
//     }

//     // Terminate GLFW
//     glfwTerminate();

//     // Exit program
//     exit( EXIT_SUCCESS );

//     // return 0;


// }


#include <opencv2/opencv.hpp>

int main(int argc, char** argv) {
  // Read the image file
  cv::Mat image = cv::imread("image.jpg");

  // Check if the image was successfully read
  if (image.empty()) {
    std::cout << "Failed to read the image file" << std::endl;
    return 1;
  }

  // Display the image
  cv::imshow("image", image);
  cv::waitKey(0);
  cv::destroyAllWindows();

  return 0;
}
