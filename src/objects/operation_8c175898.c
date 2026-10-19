typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_28 Arg0_20_28;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x18];
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
};
struct Arg0_20 {
    char unknown0[0x28];
    Arg0_20_28 *f28;
    char unknown2c[0x1a8];
    int f1d4;
};
extern void apply_resource_3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, void *);
extern void call_8c37e02c(int, void *);
extern void call_8c3aa716(int);
extern void call_8c38ad10(void);
void operation_8c175898(Object *o)
{
    char *v1;
    Arg0_20 *p = o->f20;
    void *r;
    v1 = (char *)p->f1d4;
    r = (void *)(p->f28);
    if (v1 != 0) {
        apply_resource_3827d8(r);
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x30)));
        call_8c37df90(0, (void *)(o->f40));
        call_8c37dd28(0, (void *)(o->f3c));
        call_8c37e02c(0, (void *)(o->f44));
        call_8c3aa716((int)(v1));
        call_8c38ad10();
    }
}
