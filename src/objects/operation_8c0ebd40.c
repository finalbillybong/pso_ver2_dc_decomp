typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x125];
    char f151;
};
extern int g_8c4703c0;
extern int g_8c4dbaec;
extern int g_8c4e2e24;
extern void operation_8c1cc690(void);
extern int operation_8c0ebc00(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c0ec0e8(void *);
extern void operation_8c0ec300(void *);
extern void select_mode7_8c1cc540(void);
extern void operation_8c01c244(int);
extern void select_mode5_8c1cc510(void);
extern void select_mode0_8c1cc49c(void);
extern void call_8c0ebf64(Object *);
extern void operation_8c0ec020(void *);
void operation_8c0ebd40(Object *o)
{
    int v1;
    int t1;
    operation_8c1cc690();
    switch (o->f151) {
    case 0:
        t1 = operation_8c0ebc00((void *)o);
        o->f28 = (int)(t1);
        if (o->f28 != 1) {
            if (o->f28 == 2) {
                goto L_8c0ebd90;
            }
            goto L_8c0ebe16;
        }
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f151 = 1;
        operation_8c0ec0e8((void *)o);
        goto L_8c0ebe16;
L_8c0ebd90:;
        call_8c05fbf8(0x50016, 0, 0, 0);
        o->f151 = 1;
        operation_8c0ec0e8((void *)o);
        break;
    case 1:
        v1 = (int)((int)o->f20 + 1);
        o->f20 = (int)(v1);
        if ((float)v1 > 5.5f) {
            if (g_8c4dbaec == 0) {
                if (g_8c4e2e24 != 0) {
                    operation_8c0ec300((void *)o);
                }
                switch (o->f28) {
                case 1:
                    if (o->f24 != 0) {
                        if (o->f24 == 1) {
                            goto L_8c0ebdfa;
                        }
                        goto L_8c0ebe16;
                    }
                    select_mode7_8c1cc540();
                    goto L_8c0ebe16;
L_8c0ebdfa:;
                    g_8c4703c0 = 0;
                    operation_8c01c244(0xf);
                    select_mode5_8c1cc510();
                    break;
                case 2:
                    select_mode0_8c1cc49c();
                }
            }
        }
    }
L_8c0ebe16:;
    call_8c0ebf64(o);
    operation_8c0ec020((void *)o);
}
