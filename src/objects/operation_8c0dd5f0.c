typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x4e];
    Arg0_70 *f70;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
extern void call_8c0dc79c(void *);
extern void call_8c0dc710(void *);
extern void call_8c226880(void *, float, float);
void operation_8c0dd5f0(Object *o)
{
    if (((o->f20 & 1)) != 0) {
        call_8c0dc79c(o->f70);
        return;
    }
    call_8c0dc710(o->f70);
    if ((((*(S_g8c4dbde0 **)0x8c4dbde0)->f20 & 1)) != 0) {
        call_8c226880(o->f70, 368.0f, 152.0f);
        return;
    }
    call_8c226880(o->f70, 368.0f, 228.0f);
}
