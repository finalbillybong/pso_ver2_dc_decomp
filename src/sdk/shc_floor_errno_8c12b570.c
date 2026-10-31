extern float floorf_impl(float);
extern volatile int errno;

float floor_e(float x)
{
    float r;

    r = floorf_impl(x);
    if ((*(long *)&r & 0x7f800000) == 0x7f800000) {
        if (*(long *)&r & 0x007fffff)
            errno = 0x44d;
        else
            errno = 0x44c;
    }
    return r;
}
