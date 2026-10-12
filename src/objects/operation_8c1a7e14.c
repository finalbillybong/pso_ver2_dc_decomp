typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_20 Arg0_28_20;
struct Object {
    char tag;
    char unknown1[0x1f];
    Arg0_20 *f20;
    int f24;
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0x20];
    Arg0_28_20 *f20;
    int f24;
};
extern void set_fields_8c1a82a0(void);
extern int call_8c1a8224(int, int);
extern void call_8c34d8e4(void *, void *, int);
extern void call_8c12b154(Object *, Arg0_28 *, int);
extern int call_8c104d14(int);
extern int call_8c34d35e(int, int);
extern void drain_file_task_queue(void);
extern int call_8c03ed64(void);
extern int call_8c03ed10(void *);
Object *operation_8c1a7e14(Object *o, int a1, int a2)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    o->f20 = (Arg0_20 *)0;
    o->f28 = (Arg0_28 *)0;
    set_fields_8c1a82a0();
    t1 = call_8c1a8224(a1, 1);
    o->f28 = (Arg0_28 *)t1;
    if (o->f28 != 0) {
        o->f20 = (Arg0_20 *)*(int *)0x8c4df884;
        call_8c34d8e4(o->f20, o->f28->f20, 0);
        *(int *)0x8c4df8a0 = o->f28->f24;
        call_8c12b154(o, o->f28, 0x20);
    } else {
        t2 = call_8c104d14(a1);
        *(int *)0x8c4df8a0 = t2;
        if (t2 > 0) {
            t3 = call_8c34d35e(a1, 0);
            o->f20 = (Arg0_20 *)t3;
            call_8c12b154(o, (Arg0_28 *)a1, 0x20);
        } else {
            *(int *)0x8c4df8a0 = 0;
            o->tag = 0;
        }
    }
    o->f24 = a2;
    if (o->f24 == 0) {
        goto L_8c1a7ea2;
L_8c1a7e9c:;
        drain_file_task_queue();
L_8c1a7ea2:;
        t4 = call_8c03ed64();
        if (t4 == 0) {
            goto L_8c1a7e9c;
        }
        t5 = call_8c03ed10((void *)0x8c323ed4);
        *(int *)0x8c4df860 = t5;
    }
    return o;
}
