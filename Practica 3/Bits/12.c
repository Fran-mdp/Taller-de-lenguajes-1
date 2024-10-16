#include <stdio.h>
#include <stdint.h>

typedef struct {
    unsigned int red : 8;
    unsigned int green: 8;
    unsigned int blue : 8;
} RGB24;

typedef struct {
    unsigned int blue : 5;
    unsigned int green : 6;
    unsigned int red : 5;
} RGB16;

RGB16 RGB24toRGB16(RGB24 color);
RGB24 RGB16toRGB24(RGB16 color);

int main() {
    RGB24 color24 = {255, 63, 31};
    RGB16 color16;

    color16 = RGB24toRGB16(color24);
    printf("RGB24: (%u, %u, %u) -> RGB16: (%u, %u, %u)\n",
           color24.red, color24.green, color24.blue,
           color16.red, color16.green, color16.blue);

    RGB24 newColor24 = RGB16toRGB24(color16);
    printf("RGB16: (%u, %u, %u) -> RGB24: (%u, %u, %u)\n",
           color16.red, color16.green, color16.blue,
           newColor24.red, newColor24.green, newColor24.blue);

    return 0;
}

RGB16 RGB24toRGB16(RGB24 color) {
    RGB16 result;
    result.red = color.red >> 3;
    result.green = color.green >> 2;
    result.blue = color.blue >> 3;
    return result;
}

RGB24 RGB16toRGB24(RGB16 color) {
    RGB24 result;
    result.red = color.red << 3;
    result.green = color.green << 2;
    result.blue = color.blue << 3;
    return result;
}
