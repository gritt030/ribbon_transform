#include <iostream>

#include "./pngwriter/png_writer.h"

int main(int argc, char **argv) {
    std::cout << "Hello, world!" << std::endl;
    
    char* img1 = "/home/owner/workspace/ribbon_transform/pics/test.png";
    
    PngWriter* w = new PngWriter();
    
    w->create_image(img1, 100, 100);
    w->set_pixel(50, 50, 0x00ff00ff);
    w->output_image();
    
    return 0;
}
