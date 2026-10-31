typedef struct Glyph {
    float w;
    int f04;
} Glyph;
unsigned int operation_8c087268(char *s)
{
    float m;
    Glyph *t;
    unsigned int w;
    unsigned char c;
    m = 0.0f;
    w = 0;
    if (s == 0) {
        return w;
    }
    t = (Glyph *)(*(int *)0x8c469d20 - 0x100);
    while (*s != 0) {
        c = *s++;
        if (c == 0xa) {
            if ((float)w > m) {
                m = (float)w;
            }
            w = 0;
        } else if (c == 0x20) {
            w = (unsigned int)((float)w + 5.0f);
        } else {
            w += (int)*(float *)((int)t + (c << 3));
        }
    }
    if ((float)w > m) {
        m = (float)w;
    }
    return (unsigned int)m;
}
