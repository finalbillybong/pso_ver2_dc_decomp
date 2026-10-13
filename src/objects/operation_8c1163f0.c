typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_c8c122480 S_c8c122480;
typedef struct Object Object;
typedef struct Arg0_548 Arg0_548;
struct Object {
    char unknown0[0x3c];
    Block64 f3c;
    char unknown7c[0x4c4];
    int f540;
    char unknown544[0x4];
    Arg0_548 *f548;
};
struct S_c8c122480 {
    Block64 f00;
};
extern int call_8c11806c(void);
extern void call_8c122494(void *, void *);
extern S_c8c122480 *block64_8c122480(int);
extern void call_8c117ce0(Object *);
extern void set_fields_8c117e20(void *);
void operation_8c1163f0(Object *o)
{
    int t1;
    S_c8c122480 *t2;
    if (o->f540 == 1) {
        t1 = call_8c11806c();
        if (t1 != 0) {
            call_8c122494((void *)(o->f548), (void *)(&o->f3c));
            if (t1 >= 1) {
                o->f548 = (Arg0_548 *)((int)o->f548 + 1);
                if (!((int)(o->f548) >= 0x40)) {
                    goto L_8c11644c;
                }
                o->f548 = (Arg0_548 *)0;
            } else {
                if (-1 >= t1) {
                    o->f548 = (Arg0_548 *)((int)o->f548 + -1);
                    if (!((int)(o->f548) >= 0)) {
                        o->f548 = (Arg0_548 *)0x3f;
                    }
                }
            }
L_8c11644c:;
            t2 = block64_8c122480((int)(o->f548));
            o->f3c = t2->f00;
            call_8c117ce0(o);
            set_fields_8c117e20((void *)o);
        }
    }
}
