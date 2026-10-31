extern const float g_poly_8c285e00[];

float poly_even_8c12c0e8(float x)
{
    float s;
    const float *p;
    float x2;
    int i;

    x2 = x * x;
    p = g_poly_8c285e00;
    s = *p++;
    i = 6; do
        { s = x2 * s + *p++; } while (--i > 0);
    return s;
}

