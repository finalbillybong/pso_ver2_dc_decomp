typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
extern int current_effect_mode(void);
extern void call_8c0e2c10(void *, int);
void operation_8c0e2b40(Object *o)
{
    char *v1;
    int v2;
    int t1;
    v1 = (char *)*(int *)0x8c418248;
    t1 = current_effect_mode();
    v2 = (int)v1;
    if (t1 == 0xf) {
        v2 = (int)0;
    }
    call_8c0e2c10((void *)(o->f30->f00), v2);
}
