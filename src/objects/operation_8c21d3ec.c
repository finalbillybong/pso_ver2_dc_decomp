typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c4dbc28 S_g8c4dbc28;
typedef struct S_g8c4dbc28_0 S_g8c4dbc28_0;
typedef struct S_g8c504960 S_g8c504960;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
typedef struct Arg0_48 Arg0_48;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x18];
    Arg0_44 *f44;
    Arg0_48 *f48;
    char unknown4c[0x8];
    int f54;
};
struct S_g8c4dbc28 {
    S_g8c4dbc28_0 *f00;
};
struct S_g8c4dbc28_0 {
    int f00;
};
struct S_vv3 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_g8c504960 {
    char unknown0[0x1];
    unsigned char f01;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern int operation_8c220ce0(void);
extern int operation_8c19fb18(int);
extern void operation_8c1cdc94(void *);
extern void call_8c19fbe0(void *, int, int, int);
extern void call_8c1cdc30(void *);
extern int call_8c1196d4(void *, Frame *, int);
extern void operation_8c119764(int, int, int);
void operation_8c21d3ec(Object *o)
{
    Frame frame;
    char *v33;
    int v6;
    S_vv3 *v3;
    int v5;
    int v9;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        if (o->f44 == 0) {
            v33 = (char *)(*(S_g8c4dbc28 **)0x8c4dbc28)->f00->f00;
            t2 = operation_8c19fb18((int)(v33));
            o->f44 = (Arg0_44 *)t2;
        } else {
            operation_8c1cdc94((void *)(o->f44));
        }
        v3 = (S_vv3 *)*(S_g8c504960 **)0x8c504960;
        if (v3 != 0 && v3->f01 == 0) {
            o->f28 = 0xb;
            return;
        }
        if (v3 != 0) {
            v9 = (int)0;
            goto L_8c21d45e;
            v5 = (int)0;
            v6 = (int)/* ? clobbered */ 0;
L_8c21d442:;
            call_8c19fbe0((void *)(o->f44), 0x17, (int)(v6 + v5 * 0x98 + 0xc), v5);
            v9 = (int)(v5 + 1);
L_8c21d45e:;
            v5 = (int)v9;
            v6 = (int)*(int *)0x8c504960;
            if ((*(S_g8c504960 **)0x8c504960)->f01 > v9) {
                goto L_8c21d442;
            }
            call_8c1cdc30((void *)(o->f44));
        }
        if (o->f48 == 0) {
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c336694;
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c33669c;
            t3 = call_8c1196d4((void *)(&(&frame)->f08), (Frame *)((&frame)), 1);
            o->f48 = (Arg0_48 *)t3;
            operation_8c119764((int)(o->f48), (int)(((char *)*(S_g8c504960 **)0x8c504960 + 0x2c)), 0x80);
        } else {
            operation_8c119764((int)(o->f48), (int)(((char *)*(S_g8c504960 **)0x8c504960 + 0x2c)), 0x80);
        }
        o->f54 = 0;
        o->f28 = 3;
    }
}
