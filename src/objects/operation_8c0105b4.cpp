typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
class Object;
struct Frame {
    char f00;
    char unknown1[0x1f];
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(Frame *);
};
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c12b880(Frame *, int, int);
extern "C" void call_8c12b154(Frame *, int, int);
extern "C" int call_8c1fbac0(Frame *);
extern "C" int call_8c1fbb36(int, void *);
extern "C" void call_8c01daf0(void);
extern "C" int call_8c01e180(void);
extern "C" void time_hierarchy_visit(void *);
extern "C" void hierarchy_output_cycle(void *);
extern "C" void call_8c2280f0(void);
extern "C" void call_8c380516(void);
extern "C" void call_8c1fbb28(int);
extern "C" int call_8c130384(int);
static inline int char_class(int c)
{
    return *(unsigned char *)((char *)0x8c285e40 + (unsigned char)c) & 3;
}
extern "C" int operation_8c0105b4(Object *o, int a1)
{
    Frame frame;
    int v1;
    int v4;
    int v5;
    char v7;
    char *v6;
    int v11;
    int t1;
    int t2;
    int t3;
    int t4;
    v6 = (char *)&frame;
    call_8c12b880((Frame *)v6, 0, 0x20);
    call_8c12b154((Frame *)v6, a1, 0x1f);
    if (char_class((&frame)->f00) != 0) {
        o->v4((Frame *)v6);
        t1 = call_8c1fbac0((Frame *)v6);
        if (t1 == -1) {
            return 1;
        }
        v1 = (int)-2;
        do {
            t3 = call_8c1fbb36(t1, (void *)(((char *)o + 0x20)));
            call_8c01daf0();
            t2 = call_8c01e180();
            if ((char)t2 != 0) {
                goto L_8c010648;
            }
            time_hierarchy_visit((void *)((void *)0x8c44bec8));
            hierarchy_output_cycle((void *)((void *)0x8c44bec8));
            call_8c2280f0();
            call_8c380516();
        } while (t3 == v1);
L_8c010648:;
        switch (t3) {
        case 0:
            call_8c1fbb28(t1);
            return 0;
        case -6:
            return 2;
        case -1:
            return 3;
        }
        return 3;
    }
    v4 = (int)0;
    v5 = (int)0;
    while (4 > v5) {
        v7 = (char)*(char *)((char *)((char *)v4 + 0x0) + ((int)((&frame))));
        if (v7 == 0x2e || v7 == 0) {
            *(char *)((char *)((char *)v4 + 0x0) + ((int)((&frame)))) = 0;
            t4 = call_8c130384((int)(v6));
            *(char *)((char *)((char *)o + 0x20) + (v5)) = t4;
            v5 = (int)(v5 + 1);
            v11 = (int)(v4 + 1 + (int)(&frame));
        } else {
            v11 = (int)v6;
        }
        v6 = (char *)v11;
        v4 = (int)(v4 + 1);
    }
    return 0;
}
