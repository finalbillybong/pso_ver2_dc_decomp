typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da280 S_g8c4da280;
typedef struct S_g8c4da280_42c S_g8c4da280_42c;
typedef struct S_g8c4da280_42c_a8 S_g8c4da280_42c_a8;
typedef struct S_g8c4da280_42c_a8_2c S_g8c4da280_42c_a8_2c;
typedef struct S_g8c4da280_42c_a8_2c_30 S_g8c4da280_42c_a8_2c_30;
typedef struct S_g8c4da608 S_g8c4da608;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
struct S_g8c4da280 {
    char unknown0[0x42c];
    S_g8c4da280_42c *f42c;
};
struct S_g8c4da280_42c {
    char unknown0[0xa8];
    S_g8c4da280_42c_a8 *fa8;
};
struct S_g8c4da280_42c_a8 {
    char unknown0[0x2c];
    S_g8c4da280_42c_a8_2c *f2c;
};
struct S_g8c4da280_42c_a8_2c {
    char unknown0[0x30];
    S_g8c4da280_42c_a8_2c_30 *f30;
};
struct S_vv2 {
    char unknown0[0x30];
    S_vv2_30 *f30;
};
struct S_vv2_30 {
    int f00;
};
struct S_g8c4da608 {
    int f00;
};
extern S_g8c4da280 *g_8c4da280;
extern int g_8c4da600;
extern S_vv2_30 *g_8c4da604;
extern S_g8c4da608 *g_8c4da608;
void operation_8c14b764(void)
{
    S_vv2 *v2;
    int v1;
    g_8c4da600 = 0;
    v2 = (S_vv2 *)g_8c4da280->f42c->fa8->f2c->f30;
    g_8c4da608 = (S_g8c4da608 *)v2;
    g_8c4da604 = v2->f30;
    v1 = -2;
    g_8c4da604->f00 &= v1;
    g_8c4da608->f00 = (unsigned int)g_8c4da608->f00 >> 1 << 1;
}
