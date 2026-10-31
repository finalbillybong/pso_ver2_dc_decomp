extern const float d_8c28620c;

float floorf_impl(float x)
{
    volatile union {
        float f;
        long l;
    } u;
    long l;
    long sign;
    float y;
    float t;

    t = x;
    u.f = t;
    sign = l = u.l;
    sign &= 0x80000000;
    if ((l &= 0x7f800000) < 0x4b000000)
        u.f = (float)(long)t;
    u.l |= sign;
    if (*(long *)&x & (y = u.f, 0x80000000)) {
        if (x != y)
            y = d_8c28620c + y;
    }
    return y;
}
