typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db130 S_g8c4db130;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern void *call_8c220ce0(void);
extern void *call_8c106760(Object *);
extern void *call_8c106798(Object *);
extern void call_8c220b80(void *, int);
void operation_8c15c6cc(Object *o)
{
    void *t1;
    void *t2;
    void *t3;
    t1 = call_8c220ce0();
    if (t1 != 0) {
        t2 = call_8c106760(o);
        if (t2 == 0) {
            t3 = call_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        call_8c220b80(*(S_g8c4db130 **)0x8c4db130, 1);
        o->f24 = *(int *)0x8c4db134;
    }
}
