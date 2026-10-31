/* SHC pool group 0x8c3c3fbc-0x8c3c4154: light table setters (mask bits,
   colours, positions) and a walk that submits each enabled light. */
typedef struct Mask7 {
    int bits[7];
} Mask7;

typedef struct Light {
    float v[3];
} Light;

typedef struct Spot {
    char unknown0[0xc];
    float range[2];
    float pos[3];
} Spot;

typedef struct Lights {
    Light dir[6];
    char unknown48[8];
    unsigned int mask;
    float ambient[3];
} Lights;

extern Mask7 d_8c3f8508;
extern Mask7 d_8c3f8524;
extern Lights lights_8c5c6220;
extern unsigned int light_mask_8c5c6270;
extern Spot spots_8c5c6280[];
extern float spot_range_8c5c628c[];
extern float spot_pos_8c5c6294[];
extern void call_8c3be280(int, Light *, Spot *);
extern void call_8c3be38c(int, Light *, Spot *);

void set_light_mode_8c3c3fbc(int mode)
{
    int t[7];
    int *p = t;
    unsigned int *m;
    *(Mask7 *)&t = d_8c3f8508;
    m = &light_mask_8c5c6270;
    *m = p[mode];
}

void set_light_bit_8c3c3fde(int bit, int on)
{
    int t[7];
    unsigned int *m;
    *(Mask7 *)t = d_8c3f8524;
    m = &light_mask_8c5c6270;
    if (on) *m |= t[bit];
    else *m &= ~t[bit];
}

void set_ambient_8c3c4016(float r, float g, float b)
{
    float *p = lights_8c5c6220.ambient;
    *p = r;
    p++;
    *p = g;
    p++;
    *p = b;
}

void set_spot_pos_8c3c4024(int n, float x, float y, float z)
{
    float *p = spot_pos_8c5c6294;
    p += (n - 1) * 8;
    *p = x;
    p++;
    *p = y;
    p++;
    *p = z;
}

void set_light_a_8c3c403c(int n, float x, float y, float z)
{
    Light *l = lights_8c5c6220.dir;
    float *p;
    unsigned int v;
    unsigned int *m;
    n--;
    l += n;
    p = l->v;
    *p = x;
    p++;
    *p = y;
    p++;
    *p = z;
    v = 2;
    v <<= n * 3;
    v = ~v;
    m = &lights_8c5c6220.mask;
    v &= *m;
    *m = v;
}

void set_light_1_8c3c4070(float x, float y, float z)
{
    set_light_a_8c3c403c(1, x, y, z);
}

void set_light_b_8c3c4074(int n, float x, float y, float z)
{
    Light *l = lights_8c5c6220.dir;
    float *p;
    unsigned int v;
    unsigned int *m;
    n--;
    l += n;
    p = l->v;
    *p = x;
    p++;
    *p = y;
    p++;
    *p = z;
    v = 2;
    v <<= n * 3;
    m = &lights_8c5c6220.mask;
    *m = v | *m;
}

void set_spot_range_8c3c40a6(int n, float a, float b)
{
    float *p = spot_range_8c5c628c;
    b *= b;
    a *= a;
    p += (n - 1) * 8;
    *p = b;
    p++;
    *p = a;
}

void submit_lights_8c3c40be(void)
{
    Lights *L = &lights_8c5c6220;
    Light *l = L->dir;
    Spot *s = spots_8c5c6280;
    unsigned int m = *(unsigned int *)((char *)L + 0x50);
    for (;;) {
        if (m & 1) {
            m >>= 1;
            if (m & 1) call_8c3be280(0, l, s);
            else call_8c3be38c(0, l, s);
        } else {
            m >>= 1;
        }
        m >>= 1;
        if (m & 1) break;
        m >>= 1;
        l++;
        s++;
    }
}
