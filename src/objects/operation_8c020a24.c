typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_24 S_frame_24;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
typedef struct S_vv20 S_vv20;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_c S_vv4_c;
typedef struct S_vv7 S_vv7;
typedef struct Block_frame_8 {
    float f00;
    float f04;
    float f08;
} Block_frame_8;
struct Frame {
    char f00;
    char f01;
    short f02;
    int f04;
    Block_frame_8 f08;
    Vector3 f14;
    int f20;
    char unknown24[0x64];
};
struct S_g8c44be9c {
    char unknown0[0x14];
    int f14;
};
struct S_vv4 {
    int f00;
    char unknown4[0x8];
    S_vv4_c *f0c;
    char unknown10[0x5c];
    float f6c;
    char unknown70[0x18];
    int f88;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x2a0];
    short f308;
};
struct S_vv7 {
    short f00;
    char unknown2[0x2];
    S_vv4 *f04;
};
struct S_vv20 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
};
extern void call_8c18e044(void *, void *, int, int, int);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern int call_8c12b944(void);
extern void operation_8c0368a8(void *);
void operation_8c020a24(Object *o)
{
    Frame frame;
    int v1;
    int v6;
    int v5;
    int v2;
    S_vv4 *v4;
    int v3;
    S_vv7 *v7;
    S_vv20 *v20;
    int v21;
    int v22;
    int v28;
    int v24;
    int t1;
    float t2;
    int t3;
    call_8c18e044((void *)(&(&frame)->f20), (void *)((void *)0x8c020bc0), 0, 8, 0xd);
    v1 = (int)0;
    v2 = (int)(*(S_g8c44be9c **)0x8c44be9c)->f14;
    v3 = (int)&(&frame)->f20;
    v4 = (S_vv4 *)v2;
    while (v4 != 0) {
        v5 = (int)((int)v4->f00 == *(int *)0x8c300198);
        if (v5 != 0 && v4->f88 == 0) {
            v7 = (S_vv7 *)v3;
            v6 = (int)0;
            while (0xc > v6) {
                if (v6 != o->f20) {
                    t1 = lookup_low_id(v6);
                    if (t1 != 0) {
                        t2 = squared_distance_xz((void *)((int)v4 + 0x3c), (void *)(t1 + 0x3c));
                        if (t2 > 2500.0f) {
                            v7->f00 = (int)v4->f6c;
                            v7->f04 = v4;
                            v3 = (int)((int)v7 + 8);
                            v1 = (int)(v1 + 1);
                            goto L_8c020ab8;
                        }
                    }
                }
                v6 = (int)(v6 + 1);
            }
            v3 = (int)v7;
        }
L_8c020ab8:;
        if (v1 > 4) {
            goto L_8c020ac4;
        }
        v4 = (S_vv4 *)v4->f0c;
    }
L_8c020ac4:;
    (&frame)->f00 = 0x1a;
    (&frame)->f01 = 1;
    (&frame)->f04 = 0;
    (&frame)->f08.f08 = 0.0f;
    (&frame)->f08.f04 = 0.0f;
    (&frame)->f08.f00 = 0.0f;
    (&frame)->f00 = 0x24;
    (&frame)->f01 = 5;
    t3 = call_8c12b944();
    v20 = (S_vv20 *)*(S_frame_24 **)((char *)((char *)(&frame) + 0x24) + ((int)((float)v1 * ((float)t3 / 32768.0f)) << 3));
    if (v20 == 0 || v1 == 0) {
        v21 = (int)o->f64;
        *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&o->f3c;
        v24 = (int)v21;
        goto L_8c020b4a;
    }
    v22 = (int)v20->f64;
    *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&v20->f3c;
    v24 = (int)v22;
L_8c020b4a:;
    if (o != 0) {
        v28 = (int)(o->f308 == 2);
        if (v28 != 0) {
            return;
        }
    }
    (&frame)->f02 = o->f20;
    (&frame)->f04 = (int)(v24);
    *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&(&frame)->f14;
    operation_8c0368a8((void *)(&frame));
}
