typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char unknown1d[0x3];
    int f20;
    char unknown24[0xc];
    int f30;
    int f34;
};
struct Arg1 {
    unsigned char f00;
    char f01;
};
extern int call_8c1c9c38(Arg1 *);
extern void operation_8c19f504(void *, int, unsigned char, char);
extern void call_8c1c770c(Arg1 *, void *);
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
extern void operation_8c19f86c(int, int);
extern void operation_8c19f5c0(void *, int);
void operation_8c19e9a0(Object *o, Arg1 *a1, int a2, int a3)
{
    void *v20;
    int v2;
    int v9;
    int v12;
    int t1;
    int v14;
    int t2;
    int t3;
    o->f08 = 11.0f;
    o->f1c = 0x2d;
    if (a1 != 0) {
        t3 = call_8c1c9c38(a1);
        v2 = (int)t3;
    } else {
        v2 = (int)0;
    }
    operation_8c19f504((void *)o, v2, a1->f00, a1->f01);
    v20 = (void *)0x8c4dbe40;
    if (a1 != 0) {
        call_8c1c770c(a1, v20);
    }
    v9 = (int)o->f20;
    if (v9 != 0 && ((o->tag & 8)) != 0) {
        o->tag &= -9;
        call_8c18de08(v9);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t1 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        t2 = call_8c18de4c((int)(t1 + 1));
        v14 = (int)t2;
        v12 = (int)(t1 + 1);
        call_8c12b154(t2, (void *)((void *)0x8c4dbe40), v12);
        o->tag |= 8;
    } else {
        v14 = (int)(void *)0x8c4dbe40;
    }
    o->f20 = (int)(v14);
    operation_8c19f86c((int)o, a3);
    operation_8c19f5c0((void *)o, (int)a1);
    o->f34 = (int)(o->f30);
    o->dispatch = a2;
    o->tag |= 0x45;
}
