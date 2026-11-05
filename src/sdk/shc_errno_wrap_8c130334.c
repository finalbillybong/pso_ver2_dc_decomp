extern float fimpl_8c12e2a0(float);
extern volatile int errno;

float errno_wrap_8c130334(float x)
{
    float r;

    r = fimpl_8c12e2a0(x);
    if ((*(long *)&r & 0x7f800000) == 0x7f800000) {
        if (*(long *)&r & 0x007fffff)
            errno = 0x44d;
        else
            errno = 0x44c;
    }
    return r;
}
