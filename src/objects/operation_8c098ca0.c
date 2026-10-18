typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c285064 S_g8c285064;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    int f3c;
    char unknown40[0x8];
    float f48;
};
struct Frame {
    float f00;
    float f04;
};
extern void operation_195990(int, void *, float, float);
void operation_8c098ca0(Object *o)
{
    Frame frame;
    float v1;
    int v3;
    char *v6;
    int v2;
    int v5;
    int v7;
    int v4;
    v1 = (float)o->f48;
    if (v1 > 0.66f) {
        v1 = (float)(v1 - 0.66f);
        v1 = (float)(v1 / 0.339999974f);
        (&frame)->f00 = 113.0f;
        v1 = (float)(v1 * v1);
        v2 = (int)1;
        (&frame)->f04 = 152.0f;
        v3 = (int)0;
        v4 = (int)0;
        while (o->f38 > v4) {
            v5 = (int)o->f3c;
            v6 = (char *)v3;
            while (((v2 & v5)) == 0) {
                v7 = (int)(v2 << 1);
                v6 = (char *)(v6 + 1);
                v2 = (int)v7;
            }
            operation_195990((int)(*(S_g8c285064 **)((char *)0x8c285064 + ((int)(v6) << 2))), (void *)(&frame), -3.4f, v1);
            (&frame)->f00 += 17.0f;
            v4 = (int)(v4 + 1);
            v2 = (int)(v2 << 1);
            v3 = (int)(v6 + 1);
        }
    }
}
