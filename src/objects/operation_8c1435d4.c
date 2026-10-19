typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_g8c4da370_42c_2c S_g8c4da370_42c_2c;
typedef struct S_g8c4da3a8 S_g8c4da3a8;
typedef struct S_g8c4da5f0 S_g8c4da5f0;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x2c];
    S_g8c4da370_42c_2c *f2c;
};
struct Object {
    char unknown0[0x638];
    int f638;
};
struct S_vv1 {
    int f00;
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
    S_vv1_30 *f30;
};
extern S_g8c4da370 *g_8c4da370;
extern S_g8c4da3a8 *g_8c4da3a8;
extern S_g8c4da5f0 *g_8c4da5f0;
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c38a714(int, void *);
extern void call_8c3aa702(void *);
extern void call_8c38ad10(void);
extern void operation_8c143528(void *);
void operation_8c1435d4(Object *o)
{
    S_vv1 *v1;
    int v2;
    call_8c3827d8((void *)(g_8c4da370->f42c->f2c));
    g_8c4da3a8 = (S_g8c4da3a8 *)((int)o->f638 + 0x40);
    v1 = (S_vv1 *)g_8c4da5f0;
    do {
        call_8c38ae68();
        call_8c38a714(0, g_8c4da3a8);
        g_8c4da3a8 = (S_g8c4da3a8 *)((int)g_8c4da3a8 + 0x40);
        v2 = (int)v1->f00;
        if (((v2 & 8)) == 0) {
            call_8c3aa702((void *)(v1->f04));
        }
        call_8c38ad10();
        if (((v2 & 0x10)) == 0) {
            operation_8c143528((void *)(v1->f2c));
        }
        v1 = (S_vv1 *)v1->f30;
    } while (v1 != 0);
}
