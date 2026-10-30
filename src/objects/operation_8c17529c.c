typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a8];
    int f3a8;
    char unknown3ac[0x10];
    int f3bc;
    float f3c0;
    float f3c4;
    char unknown3c8[0x4];
    float f3cc;
    float f3d0;
    float f3d4;
};
extern char g_8c2866d0[];
void operation_8c17529c(Object *o)
{
    float v1;
    float v16;
    float v15;
    char *v5;
    char *v9;
    char *v13;
    if (((o->f3a8 & 1)) != 0) {
        o->f3c0 = 0.0f;
        o->f3bc = 0;
        return;
    }
    o->f3bc = -0x1000000;
    v1 = (float)o->f3c4;
    if (v1 > 0.0f) {
        v16 = (float)(v1 * 255.0f);
        v15 = (float)((1.0f - v1) * 255.0f);
        o->f3bc |= (unsigned char)(unsigned int)(*(float *)(g_8c2866d0 + 0x4) * v15 + o->f3cc * v16) << 0x10;
        o->f3bc |= (unsigned char)(unsigned int)(*(float *)(g_8c2866d0 + 0x8) * v15 + o->f3d0 * v16) << 8;
        o->f3bc |= (unsigned char)(unsigned int)(*(float *)(g_8c2866d0 + 0xc) * v15 + o->f3d4 * v16);
        o->f3c4 -= 0.05f;
        if (!(0.0f > o->f3c4)) {
            return;
        }
        o->f3c4 = 0.0f;
        return;
    }
    o->f3bc |= 0xffffff;
}
