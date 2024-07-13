---
description: by Dorraj Machai and Daniel Motilla
---

# 🫖 NOTES FROM STUDY SESSIONS

We start with the image format; we use a PPM file which is quite simple to write.

P3

* "P3" means this is a RGB color image in ASCII
* "3 2" is the width and height of the image in pixels
* "255" is the maximum value for each color
* This, up through the "255" line below are the header.
* Everything after that is the image data: RGB triplets.
* In order: red, green, blue, yellow, white, and black.

| Width | Height |
| ----- | ------ |
| 3     | 2      |

| Maximum value for each color |
| ---------------------------- |
| 255                          |

| Red | Green | Blue |
| --- | ----- | ---- |
| 255 | 0     | 0    |
| 0   | 255   | 0    |
| 0   | 0     | 255  |
| 255 | 255   | 0    |
| 255 | 255   | 255  |
| 0   | 0     | 0    |

The PPM format is generally an intermediate format used for image work before converting to a more efficient format, for example the PNG format, without any loss of information in the intermediate step.

***

why?

```cpp
auto r = double(i) / (image_width-1);
int ir = int(255.999 * r);
```

what we are doing here is Normalization, Denormalization and Quantization

Normalization: Converting integer color values (0-255) to a floating-point range (0-1) by dividing by 255.

Denormalization: Denormalization, or inverse normalization, is the process of converting normalized RGB values from the range (0-1) back to their original scale of (0-255). This is typically done by multiplying the normalized values by 255.999 for precise rounding. This process effectively reverses normalization, restoring the data to its original scale.

Quantization: The process of mapping a large set of input values to a smaller set. In this context, it involves mapping floating-point values back to integer values.

