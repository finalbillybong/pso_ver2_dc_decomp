typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x398];
    int f398;
    char unknown39c[0xc];
    short f3a8;
};
extern short g_8c4d9b74;
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c151adc(Object *);
extern void emit_effects_8c151b40(void *);
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
extern int lookup_object_by_id(unsigned short, int, int);
extern void operation_8c151b98(void *);
void operation_8c151938(Object *o)
{
    int v5;
    int v2;
    int v3;
    int v4;
    int v1;
    int v6;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                return;
            }
            return;
        }
        call_8c05fbf8(0x30004, (void *)(((char *)o + 0x3c)), 0, 0);
        call_8c151adc(o);
        emit_effects_8c151b40((void *)o);
        *(char *)((char *)0x8c4da6ec + (o->f3a8)) = 1;
        v1 = (int)o->f3a8;
        t1 = call_8c18e8a0(v1, 4);
        if (t1 > 0) {
            t2 = call_8c18e768(v1, 4);
            v2 = (int)((t2 << 2) + 1);
            v3 = (int)1;
            while (((t2 << 2) + 4) > v2) {
                v4 = (int)v3;
                if (*(char *)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c4da6ec))) == 0) {
                    v4 = (int)0;
                }
                v3 = (int)v4;
                v2 = (int)(v2 + 1);
            }
            if (v3 == 0) {
                goto L_8c151a04;
            }
            t3 = lookup_object_by_id((unsigned short)(g_8c4d9b74 + (t2 << 2)), (int)(t2 << 2), v3);
            v2 = (int)/* ? clobbered */ 0;
            if (t3 == 0) {
                goto L_8c151a04;
            }
            operation_8c151b98((void *)t3);
        } else {
            v6 = (int)(v1 + 1);
            v5 = (int)0x3a8;
            while ((*(short *)((char *)((char *)o + 0x0) + (v5)) + 4) > v6) {
                t4 = ((int (*)(unsigned short))lookup_object_by_id)(g_8c4d9b74 + v6);
                if (t4 != 0) {
                    operation_8c151b98((void *)t4);
                }
                v6 = (int)(v6 + 1);
            }
        }
        v2 = (int)/* ? clobbered */ 0;
L_8c151a04:;
        o->f398 = 1;
    }
}
