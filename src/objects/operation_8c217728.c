typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c20a5bc S_c8c20a5bc;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x44];
    Arg0_44 *f44;
    char unknown48[0x8];
    Arg0_50 *f50;
    int f54;
};
struct S_c8c20a5bc {
    char unknown0[0x4];
    int f04;
    char unknown8[0xa9];
    char fb1;
};
extern int operation_8c051d18(void *);
extern void call_8c2069b4(int, void *);
extern void call_8c20a644(void *, void *);
extern void call_8c18de08(int);
extern S_c8c20a5bc *recordb4_8c20a5bc(int);
void operation_8c217728(Object *o)
{
    int v1;
    int v2;
    int t1;
    S_c8c20a5bc *t2;
    t1 = operation_8c051d18((void *)(o->f44));
    call_8c2069b4(t1, (void *)((void *)0x8c4dbe40));
    call_8c20a644((void *)(o->f50), (void *)((void *)0x8c4dbe40));
    call_8c18de08(t1);
    v1 = (int)0;
    v2 = (int)*(int *)0x8c504a24;
    while (v2 > v1) {
        t2 = recordb4_8c20a5bc(v1);
        if (o->f54 == t2->f04) {
            t2->fb1 &= -0xb;
            t2->fb1 |= 4;
            return;
        }
        v1 = (int)(v1 + 1);
    }
}
