typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Frame Frame;
typedef struct S_frame_8 S_frame_8;
typedef struct S_g8c460900 S_g8c460900;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct Object {
    char unknown0[0x50];
    float f50;
    char unknown54[0x1c];
    float f70;
    int f74;
    int f78;
    char unknown7c[0xc];
    int f88;
};
struct Frame {
    float f00;
    float f04;
    S_frame_8 *f08;
};
struct S_g8c460900 {
    char unknown0[0x34];
    int f34;
};
extern S_g8c460900 *g_8c460900;
extern int g_8c469e48;
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c09a658(void *, void *);
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern float call_8c09a6f4(void);
extern float call_8c09a710(void);
extern int operation_8c09a64c(int);
void operation_8c0968f4(Object *o)
{
    Frame frame;
    char *v89;
    int v18;
    float t1;
    float t2;
    float t3;
    float t4;
    int t5;
    if ((((&g_8c41cba0)->f20 & 0x10)) != 0) {
        if (!((o->f50 += 0.633333325f) > 20.0f)) {
            goto L_8c096940;
        }
        o->f50 = 20.0f;
    } else {
        if ((((&g_8c41cba0)->f20 & 0x20)) != 0 && 1.0f > (o->f50 -= 0.633333325f)) {
            o->f50 = 1.0f;
        }
    }
L_8c096940:;
    call_8c09a658((void *)(&(&frame)->f08), (void *)(&(&frame)->f04));
    if ((&frame)->f04 != 0.0f) {
        t1 = call_8c37eb0c((void *)((&frame)->f08));
        o->f78 = (int)((&frame)->f04 * 1092.0f * t1 + (float)o->f78);
        t2 = call_8c38c154((void *)((&frame)->f08));
        o->f74 = (int)((&frame)->f04 * 1092.0f * t2 + (float)o->f74);
        v18 = (int)0x2bbc;
        if (g_8c460900 != 0 && ((g_8c460900->f34 & 2)) != 0) {
            v18 = (int)0x7bc;
        }
        v89 = (char *)o->f74;
        if ((int)(v89) > v18) {
            o->f74 = (int)(v18);
            goto L_8c096a0a;
        }
        if (!(-v18 > (int)(v89))) {
            goto L_8c096a0a;
        }
        o->f74 = -v18;
    } else {
        if ((((&g_8c41cba0)->f20 & 0x80)) != 0) {
            o->f78 += 0x444;
        } else {
            if ((((&g_8c41cba0)->f20 & 0x40)) != 0) {
                o->f78 -= 0x444;
            }
        }
    }
L_8c096a0a:;
    t3 = call_8c09a6f4();
    o->f70 += t3;
    t4 = call_8c09a710();
    o->f70 -= t4;
    if (o->f70 > 80.0f) {
        o->f70 = 80.0f;
    } else {
        if (20.0f > o->f70) {
            o->f70 = 20.0f;
        }
    }
    call_8c09a658((void *)0, (void *)(&frame));
    if (!((&frame)->f00 > 0.0f)) {
        t5 = operation_8c09a64c(0x300f0);
        if (t5 == 0) {
            goto L_8c096a66;
        }
    }
    o->f88 = 0;
    return;
L_8c096a66:;
    if (++o->f88 > 0x96) {
        g_8c469e48 = 3;
    }
}
