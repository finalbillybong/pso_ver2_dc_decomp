typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x74];
    int f98;
    int f9c;
};
struct Object {
    char unknown0[0x2c];
    float f2c;
    char unknown30[0x28];
    float f58;
    float f5c;
    float f60;
};
extern S_L8c41cba0 g_8c41cba0;
extern float call_8c38c154(int);
extern float call_8c37eb0c(int);
void operation_8c0a3c80(Object *o)
{
    int v2;
    float v6;
    int v1;
    float t1;
    float t2;
    v1 = (int)0;
    v6 = (float)0.0f;
    v2 = (int)(&g_8c41cba0)->f98;
    if (((v2 & 0x30004)) == 0 && ((v2 & 0xf0)) != 0) {
        if (((v2 & 0x200)) != 0) {
            if (((v2 & 0x10)) != 0) {
                v6 = (float)(o->f2c * 2.1f);
            } else if (((v2 & 0x20)) != 0) {
                v6 = (float)(o->f2c * -2.1f);
            }
            o->f5c += v6;
            return;
        }
        if ((((&g_8c41cba0)->f9c & 0x200)) != 0) {
            if (((v2 & 0x10)) != 0) {
                if (((v2 & 0x40)) != 0) {
                    v1 = (int)(v1 + 0xa000);
                } else if ((((&g_8c41cba0)->f20 & 0x80)) != 0) {
                    v1 = (int)(v1 + 0x6000);
                } else {
                    v1 = (int)(v1 + 0x8000);
                }
            } else if (((v2 & 0x20)) != 0) {
                if (((v2 & 0x40)) != 0) {
                    v1 = (int)(v1 + 0xe000);
                } else if (((v2 & 0x80)) != 0) {
                    v1 = (int)(v1 + 0x2000);
                }
            } else if (((v2 & 0x40)) != 0) {
                v1 = (int)(v1 + 0xc000);
            } else if (((v2 & 0x80)) != 0) {
                v1 = (int)(v1 + 0x4000);
            }
            t1 = call_8c38c154(v1);
            o->f60 = o->f2c * (t1 * 2.1f) + o->f60;
            t2 = call_8c37eb0c(v1);
            o->f58 = o->f2c * (t2 * 2.1f) + o->f58;
        }
    }
}
