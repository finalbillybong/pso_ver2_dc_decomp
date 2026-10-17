typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_frame_10 S_frame_10;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_38 Arg0_38;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0x4];
} Block_frame_8;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
    Arg0_30 *f30;
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x20];
    int f5c;
};
struct Frame {
    Block8 f00;
    Block_frame_8 f08;
    S_frame_10 *f10;
    unsigned int f14;
    char unknown18[0x10];
};
struct Arg0_30 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c1cdc80(void *);
extern int call_8c15b448(int, void *);
extern void operation_8c1d5dfc(void *, int);
extern int operation_8c106798(Object *);
extern int operation_8c106760(Object *);
extern int call_8c15b510(int, void *, void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_selection_child(void *, void *, int, int, int);
extern int operation_8c156c6c(int);
void operation_8c1a6cb8(Object *o)
{
    Frame frame;
    char *v52;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    v52 = (char *)o->f2c;
    if (v52 != 0) {
        t1 = operation_8c1cdc80((void *)v52);
        if (o->f38 != 0 && t1 != o->f5c) {
            t2 = call_8c15b448(t1, (void *)(((char *)o + 0x3c)));
            if (t2 != 0) {
                operation_8c1d5dfc((void *)(o->f38), (int)(((char *)o + 0x3c)));
            }
            o->f5c = (int)(t1);
        }
    }
    t3 = operation_8c106798(o);
    if (t3 != 0) {
        o->f24 = 7;
        return;
    }
    t4 = operation_8c106760(o);
    if (t4 != 0) {
        t5 = operation_8c1cdc80((void *)(o->f2c));
        t6 = call_8c15b510(t5, (void *)(&(&frame)->f14), (void *)(&(&frame)->f10));
        if (t6 != 0) {
            if (*(unsigned char *)&(&frame)->f14 == 3 && (int)((&frame)->f10) > 1) {
                *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c31e6c4;
                t7 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x7c);
                if (t7 != 0) {
                    initialize_selection_child((void *)t7, (void *)(&(&frame)->f08.f00), 1, (int)((&frame)->f10), 1);
                }
                o->f34 = (int)(t7);
                o->f24 = 2;
                return;
            }
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31e6cc;
            t8 = operation_8c156c6c((int)(&frame));
            o->f30 = (Arg0_30 *)t8;
            o->f30->f80 = (o->f30->f80 & 0xffff) | 1;
            o->f24 = 3;
        }
    }
}
