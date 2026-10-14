typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
};
extern void call_8c1cc690(void);
extern int operation_8c180ce0(void);
extern int operation_8c19b054(void);
extern int operation_8c181920(int);
extern void request_resource_release(void *);
extern void operation_8c0e9aac(int);
extern void operation_8c01c1a4(int);
void operation_8c23024c(Object *o)
{
    char *v1;
    int t1;
    int t2;
    int t3;
    call_8c1cc690();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c230284;
        }
        if (o->f20 == 2) {
            goto L_8c2302a2;
        }
        if (o->f20 == 3) {
            goto L_8c2302ba;
        }
        return;
    }
    if (o->f28 != 0) {
        t1 = operation_8c180ce0();
        if (t1 != 0) {
            o->f20 = 1;
            return;
L_8c230284:;
            t2 = operation_8c19b054();
            t3 = operation_8c181920((int)((char)t2));
            if (t3 == 0) {
                *(int *)0x8c4dbaec = 0xc;
                o->f20 = 2;
                return;
L_8c2302a2:;
                if (*(int *)0x8c4dbaec == 0) {
                    request_resource_release((void *)(o->f28));
                    o->f28 = (Arg0_28 *)0;
                    o->f20 = 3;
                    return;
L_8c2302ba:;
                    v1 = (char *)o->f24;
                    o->f24 += 1;
                    if ((float)(int)v1 > 4.5f) {
                        operation_8c0e9aac(1);
                        operation_8c01c1a4(6);
                    }
                }
            }
        }
    }
}
