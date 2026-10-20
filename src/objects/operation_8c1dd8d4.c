typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    char f2c;
    char unknown2d[0x23];
    Arg0_50 *f50;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern int g_8c4e3044;
extern S_L8c41cba0 g_8c41cba0;
extern void operation_8c1cc690(void);
extern int operation_8c01d8a8(void *, int);
extern void request_resource_release(void *);
extern void operation_8c199b14(void);
extern void select_mode4_8c1cc4f8(void);
extern void select_mode0_8c1cc49c(void);
extern float call_8c37eb0c(int);
void operation_8c1dd8d4(Object *o)
{
    int v22;
    char *pad;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float t6;
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            pad = (char *)&g_8c41cba0 + 0x110;
            t1 = operation_8c01d8a8((void *)pad, 4);
            if (t1 == 0) {
                if ((((&g_8c41cba0)->f28 & 2)) == 0) {
                    t2 = operation_8c01d8a8((void *)pad, 2);
                    if (t2 == 0) {
                        if ((((&g_8c41cba0)->f28 & 0x400)) == 0) {
                            t3 = operation_8c01d8a8((void *)pad, 0x400);
                            if (t3 == 0) {
                                if ((((&g_8c41cba0)->f28 & 0x200)) == 0) {
                                    t4 = operation_8c01d8a8((void *)pad, 0x200);
                                    if (t4 == 0) {
                                        if ((((&g_8c41cba0)->f28 & 8)) == 0) {
                                            t5 = operation_8c01d8a8((void *)pad, 8);
                                            if (t5 == 0) {
                                                goto L_8c1dd9b8;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
            o->f50 = (Arg0_50 *)0;
        }
        operation_8c199b14();
        o->f20 = 1;
        break;
    case 1:
        v22 = (int)o->f28;
        o->f28 = v22 + 1;
        if ((float)v22 > 4.5f) {
            switch (g_8c4e3044) {
            case 0:
                select_mode4_8c1cc4f8();
                break;
            case 1:
                select_mode0_8c1cc49c();
            }
        }
    }
L_8c1dd9b8:;
    if (++o->f24 > 0x3c) {
        o->f24 = 0;
    }
    t6 = call_8c37eb0c((int)((int)((float)(o->f24 * 6) * 65536.0f / 360.0f)));
    o->f2c = (unsigned int)((t6 + 1.0f) * 255.0f / 2.0f);
}
