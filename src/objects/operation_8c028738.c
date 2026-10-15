typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
};
extern int check_range_8c01cf68(void *);
extern int call_8c1a74e8(Object *);
extern void operation_8c02a764(int, int);
extern void create_effect_777c(void *, int);
extern int call_8c1a750c(Object *);
extern int call_8c1a7484(Object *);
void operation_8c028738(Object *o, float f0, float f1)
{
    int v1;
    int v22;
    int v23;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)(o->f308 == 2);
    if (v1 == 0) {
        t1 = check_range_8c01cf68((void *)o);
        if (t1 == 0) {
            t2 = ((int (*)(void *, float))check_range_8c01cf68)((void *)(o), f1);
            if (t2 == 0) {
                return;
            }
        }
        v22 = (int)(((o->f350 & 0x800)) != 0);
        if (v22 != 0) {
            t3 = call_8c1a74e8(o);
            operation_8c02a764((int)o, t3);
            create_effect_777c((void *)((int)((char *)o + 0x540) + 0x18), 0x49);
            return;
        }
        v23 = (int)(((o->f350 & 0x1000)) != 0);
        if (v23 != 0) {
            t4 = call_8c1a750c(o);
            operation_8c02a764((int)o, t4);
            create_effect_777c((void *)((int)((char *)o + 0x540) + 0x18), 0x65);
            return;
        }
        t5 = call_8c1a7484(o);
        operation_8c02a764((int)o, t5);
    }
}
