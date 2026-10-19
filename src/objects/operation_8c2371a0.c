typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339628 S_L8c339628;
typedef struct S_L8c339628_10 S_L8c339628_10;
typedef struct S_L8c339628_14 S_L8c339628_14;
typedef struct S_g8c510b28 S_g8c510b28;
typedef struct S_g8c510b28_42c S_g8c510b28_42c;
typedef struct S_g8c510b28_42c_48 S_g8c510b28_42c_48;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct S_L8c339628 {
    char unknown0[0x10];
    S_L8c339628_10 *f10;
    S_L8c339628_14 *f14;
};
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    char unknown3c[0x18];
    int f54;
};
struct S_g8c510b28 {
    char unknown0[0x42c];
    S_g8c510b28_42c *f42c;
};
struct S_g8c510b28_42c {
    char unknown0[0x48];
    S_g8c510b28_42c_48 *f48;
};
extern S_g8c510b28 *g_8c510b28;
extern S_L8c339628 g_8c339628;
extern char g_8c510b2c[];
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e2e4(int, float, float, float);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c2371a0(Object *o)
{
    if (g_8c510b28 == 0 && (&g_8c339628)->f10 == 0) {
        return;
    }
    if (*(unsigned short *)(g_8c510b2c + 0x48) != 6) {
        if (o->f54 == 1) {
            call_8c3827d8((void *)((&g_8c339628)->f10));
        } else {
            call_8c3827d8((void *)((&g_8c339628)->f14));
        }
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x20)));
        call_8c37df90(0, (void *)(o->f38));
        call_8c37e2e4(0, 1.5f, 1.5f, 1.5f);
        call_8c3a944a((void *)(g_8c510b28->f42c->f48));
        call_8c38ad10();
    }
}
