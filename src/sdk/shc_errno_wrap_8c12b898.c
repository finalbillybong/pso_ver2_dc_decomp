extern float fimpl_8c12e588(float *, float);
extern volatile int errno;

float errno_wrap_8c12b898(float x, float *ip)
{
    float r;
    float i;

    r = fimpl_8c12e588(&i, x);
    *ip = i;
    if ((*(long *)&r & 0x7f800000) == 0x7f800000) {
        if (*(long *)&r & 0x007fffff)
            errno = 0x44d;
        else
            errno = 0x44c;
    }
    return r;
}
