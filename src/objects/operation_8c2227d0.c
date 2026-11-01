typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_22b8 Arg0_22b8;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2288];
    int f22b0;
    char unknown22b4[0x4];
    Arg0_22b8 *f22b8;
    char unknown22bc[0x4];
    int f22c0;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c33747c;
extern Block8 g_8c337484;
extern int g_8c467188;
extern int operation_8c220ce0(void);
extern void operation_8c1cdc94(void *);
extern int operation_8c19fb18(int);
extern void TOHealGeneral_ctor_8c19fbe0(void *, int, int, int);
extern void operation_8c1cdc30(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
void operation_8c2227d0(Object *o)
{
    Frame frame;
    int v11;
    int off;
    int v10;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        if (o->f22b8 != 0) {
            operation_8c1cdc94((void *)(o->f22b8));
        } else {
            switch (g_8c467188) {
            case 0:
                o->f22b8 = (Arg0_22b8 *)operation_8c19fb18((int)((void *)0x8c2e1974));
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                o->f22b8 = (Arg0_22b8 *)operation_8c19fb18((int)((void *)0x8c2e1981));
                break;
            }
        }
        if (o->f22b8 != 0) {
            off = 0x22b8;
            v10 = (int)0x22ac;
            v11 = (int)0;
            while (*(int *)((char *)((char *)o + 0x0) + (v10)) > v11) {
                TOHealGeneral_ctor_8c19fbe0((void *)(*(Arg0_22b8 **)((char *)o + off)), 0x17, (int)((int)o + v11 * 0xb8 + 0x39), v11);
                v11 = (int)(v11 + 1);
            }
            operation_8c1cdc30((void *)(o->f22b8));
            o->f24 = 6;
        }
        if (o->f22c0 == 0) {
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c33747c;
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c337484;
            t3 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
            o->f22c0 = (int)(t3);
            operation_8c119764((int)(o->f22c0), (int)(((char *)o + 0x59)), 0x80);
            o->f22b0 = 0;
        }
    }
}
