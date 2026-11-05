extern float fimpl_8c12dfac(float);
extern volatile int errno;

float errno_wrap_8c1302e4(float x)
{
    float r;

    r = fimpl_8c12dfac(x);
    if ((*(long *)&r & 0x7f800000) == 0x7f800000) {
        if (*(long *)&r & 0x007fffff)
            errno = 0x44d;
        else
            errno = 0x44c;
    }
    return r;
}
