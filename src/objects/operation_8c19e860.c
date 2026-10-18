typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_10 Arg1_10;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    char unknownc[0xc];
    int dispatch;
    char f1c;
    char unknown1d[0x3];
    int f20;
    int f24;
};
struct Arg1 {
    unsigned char f00;
    char f01;
    char unknown2[0xe];
    Arg1_10 *f10;
};
extern int call_8c1c9c38(Arg1 *);
extern void operation_8c19f504(void *, int, unsigned char, char);
extern void call_8c1c770c(Arg1 *, void *);
extern void call_8c18de08(int);
extern int operation_8c257e2c(int);
extern int call_8c18de4c(int);
extern void call_8c12b154(int, void *, int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern void operation_8c19f5c0(void *, int);
void operation_8c19e860(Object *o, Arg1 *a1, int a2)
{
    void *v30;
    int v2;
    int v9;
    int v12;
    int v14;
    int v16;
    int v20;
    int v22;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    o->f08 = 11.0f;
    o->f1c = 0x2d;
    if (a1 != 0) {
        t5 = call_8c1c9c38(a1);
        v2 = (int)t5;
    } else {
        v2 = (int)0;
    }
    operation_8c19f504((void *)o, v2, a1->f00, a1->f01);
    v30 = (void *)0x8c4dbe40;
    if (a1 != 0) {
        call_8c1c770c(a1, v30);
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
    reset_text_cursor_8c18ea38();
    operation_8c18eb44((int)(a1->f10));
    v16 = (int)o->f24;
    if (v16 != 0 && ((o->tag & 0x10)) != 0) {
        o->tag &= -0x11;
        call_8c18de08(v16);
    }
    if ((void *)0x8c4dbe40 != 0) {
        t3 = operation_8c257e2c((int)((void *)0x8c4dbe40));
        t4 = call_8c18de4c((int)(t3 + 1));
        v22 = (int)t4;
        v20 = (int)(t3 + 1);
        call_8c12b154(t4, (void *)((void *)0x8c4dbe40), v20);
        o->tag |= 0x10;
    } else {
        v22 = (int)(void *)0x8c4dbe40;
    }
    o->f24 = (int)(v22);
    operation_8c19f5c0((void *)o, (int)a1);
    o->dispatch = a2;
    o->tag |= 0x45;
}
