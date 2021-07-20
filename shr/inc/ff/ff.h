#include <inttypes.h>

typedef uint16_t u16;
struct FFPixel { u16 r, g, b, a; } ;
typedef struct FFPixel FFPixel;

int ff_is_little_endian(void);
void ff_swap_endian(void *data, unsigned int size);
void ff_swap_pixel_endian(FFPixel *p);
void ff_swap_pixels_endian(FFPixel *ps, unsigned int n);

int ff_colorname_to_pixel(FFPixel *px, char *cn);
