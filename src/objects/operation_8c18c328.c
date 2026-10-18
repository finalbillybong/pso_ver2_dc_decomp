typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct S_vv73 S_vv73;
typedef struct S_vv73_78 S_vv73_78;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2e];
    short f52;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_58 {
    char unknown0[0x4];
    short f04;
};
struct S_vv73 {
    short f00;
    char unknown2[0x50];
    short f52;
    short f54;
    char unknown56[0x22];
    S_vv73_78 *f78;
};
extern char g_8c41cba0[];
extern int operation_8c01d8a8(void *, int);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c18c768(void *);
extern void call_8c18cb7c(Object *);
extern void request_resource_release(void *);
extern void operation_8c18cb50(void *);
extern void operation_8c18c904(void *, void *, int);
extern void operation_8c18caac(void *);
extern void operation_8c18cd8c(void *, short);
extern void operation_8c18cdb4(void *, short);
extern void set_fields_8c18cddc(void *);
extern void operation_8c0dc610(void *, float);
typedef struct Row7c {
    int f00;
    int f04;
} Row7c;
void operation_8c18c328(Object *o)
{
    char *v78;
    int v74;
    S_vv73 *v73;
    int v72;
    int v76;
    int v77;
    int t1;
    if (((o->f20 & 1)) != 0 && ((o->f20 & 4)) == 0) {
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t1 == 0) {
                return;
            }
        }
        call_8c05fbf8(0x50016, 0, 0, 0);
        if (!(o->f52 > 0)) {
            operation_8c18c768((void *)o);
            return;
        }
        call_8c18cb7c(o);
        o->f52 -= 1;
        v73 = (S_vv73 *)o;
        (*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f52 << 2)))->f04 |= 0x10;
        for (v74 = 5; v74 >= (v77 = (int)v73->f52); v74--) {
            v72 = v74 << 2;
            v76 = *(int *)((char *)((char *)v73 + 0x58) + v72);
            if (v76 != 0) {
                request_resource_release((void *)v76);
                *(int *)((char *)((char *)v73 + 0x58) + v72) = 0;
            }
        }
        v73->f78 = (S_vv73_78 *)((Row7c *)((char *)v73 + (v77 << 3) + 0x7c))->f04;
        operation_8c18cb50((void *)v73);
        operation_8c18c904((void *)v73, (void *)(v73->f78), (int)(v73->f52));
        operation_8c18caac((void *)v73);
        v78 = (char *)*(int *)((char *)((char *)v73 + 0x58) + (v73->f54 << 2));
        operation_8c18cd8c((void *)v78, v73->f52);
        v73 = (S_vv73 *)((char *)v73 + 84);
        operation_8c18cdb4((void *)v78, v73->f00);
        set_fields_8c18cddc((void *)v78);
        operation_8c0dc610((void *)v78, 25.0f);
    }
}
