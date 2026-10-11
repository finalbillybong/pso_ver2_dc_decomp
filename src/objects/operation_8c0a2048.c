typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c46ee80 S_g8c46ee80;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
struct S_g8c46ee80 {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    int f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x4];
    short f64;
};
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c46efc8 g_8c46efc8;
void operation_8c0a2048(void)
{
    (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -0x21;
    (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -0x81;
    (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -0x801;
    if ((((&g_8c46efc8)->f08 & 2)) != 0) {
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -3;
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x100;
    } else {
        if ((((&g_8c46efc8)->f08 & 0x100)) != 0) {
            (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 | 0x80;
            (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -0x101;
        }
    }
    if ((((&g_8c46efc8)->f08 & 0x40)) != 0) {
        (&g_8c46efc8)->f08 = (&g_8c46efc8)->f08 & -0x41;
    }
    if ((((&g_8c46efc8)->f08 & 0x100)) == 0) {
        if ((((&g_8c46efc8)->f08 & 0x80)) == 0) {
            if (g_8c46ee80 != 0) {
                g_8c46ee80->f20 = 0;
                g_8c46ee80->f24 = 0;
                g_8c46ee80->f28 = 0;
                g_8c46ee80->f2c = 0.0f;
                g_8c46ee80->f30 = 0.0f;
                g_8c46ee80->f34 = 0;
                g_8c46ee80->f64 = 0;
                g_8c46ee80->f38 = 0.0f;
                g_8c46ee80->f3c = 0.0f;
                g_8c46ee80->f40 = 0.0f;
                g_8c46ee80->f44 = 0.0f;
                g_8c46ee80->f48 = 0.0f;
                g_8c46ee80->f4c = 0.0f;
                g_8c46ee80->f50 = 0.0f;
                g_8c46ee80->f54 = 0.0f;
                g_8c46ee80->f58 = 0.0f;
                g_8c46ee80->f5c = 0.0f;
            }
        }
    }
}
