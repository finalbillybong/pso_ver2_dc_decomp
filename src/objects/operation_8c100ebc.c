typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_4 Arg0_4;
struct Object {
    int tag;
    Arg0_4 *f04;
    char unknown8[0x24];
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37dc90(void *, int);
extern void call_8c37e390(void *);
extern void call_8c100e4c(void *, float);
extern void call_8c100ebc(void *, float);
extern void call_8c38ad10(void);
void operation_8c100ebc(Object *o, float f0)
{
    char *v1;
    v1 = (char *)o->tag;
    call_8c38ae68();
    if ((((int)(v1) & 1)) == 0) {
        call_8c382a40((void *)(((char *)o + 0x8)));
    }
    if ((((int)(v1) & 2)) == 0) {
        call_8c37dc90((void *)(((char *)o + 0x14)), (int)((int)(v1) & 0x20));
    }
    if ((((int)(v1) & 4)) == 0) {
        call_8c37e390((void *)(((char *)o + 0x20)));
    }
    if ((((int)(v1) & 8)) == 0 && o->f04 != 0) {
        call_8c100e4c((void *)(o->f04), -f0);
    }
    if (o->f2c != 0) {
        call_8c100ebc((void *)(o->f2c), f0);
    }
    call_8c38ad10();
    if (o->f30 != 0) {
        call_8c100ebc((void *)(o->f30), f0);
    }
}
