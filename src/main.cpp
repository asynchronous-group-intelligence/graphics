#include <iostream>

int main() {
    int image_width = 256;
    int image_height = 256;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++) {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i < image_width; i++) {
            // colors in centimeters
            auto red = double(i) / (image_width - 1);
            auto green = double(j) / (image_height - 1);
            auto blue = 0.0;

            std::cout << red << ' ' << green << ' ' << blue << '\n';

            // colors in inches
            int internal_red = int(255.999 * red);
            int internal_green = int(255.999 * green);
            int internal_blue = int(255.999 * blue);

            std::cout << internal_red << ' ' << internal_green << ' ' << internal_blue << '\n';
        }
    }

    std::clog << "\rDone.                   \n";
}
