typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    Arg0_3c *f3c;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void apply_resource_3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e02c(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c37e390(void *);
extern void call_8c38c0f0(void *);
extern void call_8c3aa716(void *);
extern void call_8c38ad10(void);
void operation_8c137ec8(Object *o)
{
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    if (o->f3c != 0 && o->f38 != 0) {
        apply_resource_3827d8((void *)(o->f3c));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x2c)));
        call_8c37df90(0, (void *)(o->f24));
        call_8c37e02c(0, (void *)(o->f28));
        call_8c37dd28(0, (void *)(o->f20));
        call_8c37e390((void *)(((char *)o + 0x50)));
        call_8c38c0f0((void *)(((char *)o + 0x40)));
        call_8c3aa716((void *)(o->f38));
        call_8c38c0f0((void *)((void *)0x8c305fd8));
    }
    call_8c38ad10();
    g_8c575570 = (int)(g_8c46f560);
}
