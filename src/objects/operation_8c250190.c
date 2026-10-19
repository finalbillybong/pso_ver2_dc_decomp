typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_10 S_frame_10;
typedef struct S_frame_14 S_frame_14;
typedef struct S_frame_4 S_frame_4;
typedef struct S_frame_8 S_frame_8;
typedef struct S_frame_c S_frame_c;
typedef struct S_g8c33f778 S_g8c33f778;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_538 S_g8c467180_2c_538;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_18 S_vv8_18;
typedef struct S_vv8_78 S_vv8_78;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x538];
    S_g8c467180_2c_538 *f538;
};
struct S_vv7 {
    int f00;
};
struct S_vv8 {
    char unknown0[0x18];
    S_vv8_18 *f18;
};
struct S_vv11 {
    S_vv11_0 *f00;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    S_frame_8 *f08;
    S_frame_c *f0c;
    S_frame_10 *f10;
    S_frame_14 *f14;
    int f18;
    char unknown1c[0xc];
    int f28;
    char unknown2c[0xc];
};
extern char g_8c339ca0[];
extern char g_8c33f788[];
extern void call_8c12b048(void *, void *, ...);
extern int lookup_low_id(int);
extern void call_8c12b084(void *, int);
extern int call_8c2383dc(void *);
extern int call_8c238458(void *);
extern void operation_8c238204(int, void *, void *, void *);
void operation_8c250190(int a0, int a1)
{
    Frame frame;
    S_vv7 *v7;
    int v3;
    S_vv8 *v8;
    S_vv11 *v11;
    int v9;
    int v12;
    int v1;
    int v2;
    int v10;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)(a1 + -2);
    call_8c12b048((void *)((void *)0x8c511020), (void *)((g_8c33f788 + 0x26)), (*(S_g8c467180 **)0x8c467180)->f2c->f538, v1 + 1, 0xff);
    v3 = (int)0;
    v2 = (int)(v1 << 2);
    v7 = (S_vv7 *)(g_8c339ca0 + 0x274);
    while (4 > v3) {
        if (v7->f00 != 0) {
            t1 = lookup_low_id((int)(v3));
            call_8c12b084((void *)((void *)0x8c511020), (int)(t1 + 0x7e4));
            call_8c12b084((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x31));
            v8 = (S_vv8 *)((int)v7 + 4);
            t2 = call_8c2383dc((void *)(v8->f18));
            if (t2 == 0) {
                call_8c12b084((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x35));
            } else {
                v9 = (int)0;
                v10 = (int)0;
                v11 = (S_vv11 *)((int)v8 + 0x78);
                while (9 > v10) {
                    t5 = call_8c238458((void *)(v11->f00));
                    v12 = (int)(v9 + t5);
                    v9 = (int)v12;
                    v10 = (int)(v10 + 1);
                    v11 = (S_vv11 *)((char *)v11 + 4);
                }
                t3 = call_8c2383dc((void *)(v8->f18));
                operation_8c238204(v9, (void *)(&(&frame)->f14), (void *)(&(&frame)->f10), (void *)(&(&frame)->f0c));
                call_8c12b048((void *)(&(&frame)->f28), (void *)((g_8c33f788 + 0x42)), (&frame)->f14, (&frame)->f10, (&frame)->f0c, *(S_g8c33f778 **)((char *)0x8c33f778 + (t3 << 2)));
                call_8c12b084((void *)((void *)0x8c511020), (int)(&(&frame)->f28));
            }
            call_8c12b084((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x54));
            t4 = call_8c238458((void *)(*(S_vv8_78 **)((char *)((char *)v8 + 0x78) + (v2))));
            if (t4 == 0) {
                call_8c12b084((void *)((void *)0x8c511020), (int)(g_8c33f788 + 0x57));
            } else {
                operation_8c238204(t4, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (void *)(&frame));
                call_8c12b048((void *)(&(&frame)->f18), (void *)((g_8c33f788 + 0x60)), (&frame)->f08, (&frame)->f04, (&frame)->f00);
                call_8c12b084((void *)((void *)0x8c511020), (int)(&(&frame)->f18));
            }
        }
        v3 = (int)(v3 + 1);
        v7 = (S_vv7 *)((int)v7 + 0xa4);
    }
}
