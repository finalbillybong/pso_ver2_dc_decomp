typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469c88 S_g8c469c88;
typedef struct S_g8c469c88_42c S_g8c469c88_42c;
typedef struct S_g8c469c88_42c_28 S_g8c469c88_42c_28;
typedef struct S_g8c469c88_42c_38 S_g8c469c88_42c_38;
typedef struct S_g8c469c8c S_g8c469c8c;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
};
struct S_g8c469c88 {
    char unknown0[0x42c];
    S_g8c469c88_42c *f42c;
};
struct S_g8c469c88_42c {
    char unknown0[0x28];
    S_g8c469c88_42c_28 *f28;
    char unknown2c[0xc];
    S_g8c469c88_42c_38 *f38;
};
extern S_g8c469c88 *g_8c469c88;
extern S_g8c469c8c *g_8c469c8c;
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c085310(Object *o)
{
    if (g_8c469c88 != 0) {
        switch (o->f30a) {
        case 0:
            call_8c3827d8(g_8c469c8c);
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(o->f64));
            call_8c3aa716((void *)(g_8c469c88->f42c->f28));
            call_8c38ad10();
            return;
        case 1:
            call_8c3827d8(g_8c469c8c);
            call_8c38ae68();
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37df90(0, (void *)(o->f64));
            call_8c3aa716((void *)(g_8c469c88->f42c->f38));
            call_8c38ad10();
        }
    }
}
