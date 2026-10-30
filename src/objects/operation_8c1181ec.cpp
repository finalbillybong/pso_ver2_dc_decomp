typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3103bc S_L8c3103bc;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
class Arg1;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x7f0];
    int f828;
    int f82c;
    int f830;
    int f834;
};
struct S_L8c3103bc {
    int f00;
    int f04;
    int f08;
    int f0c;
};
class Arg1 {
public:
    char unknown0[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2(int);
    virtual void v3(int);
};
typedef struct Arg1Data {

} Arg1Data;
extern S_L8c3103bc g_8c3103bc;
extern S_L8c41cba0 g_8c41cba0;
extern "C" int operation_8c1181ec(Object *o, Arg1 *a1)
{
    int v26;
    int v1;
    int v2;
    int v6;
    int v17;
    int v22;
    int v14;
    int v16;
    int v30;
    int v31;
    int pm1;
    v14 = (int)0x200;
    v1 = !(*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x200);
    if (v1 != 0) {
        int v10;
        int v2;
        v6 = (int)1;
        v2 = (*(int *)((0x3c * o->f34) + (char *)&g_8c41cba0.f28));
        if (((v2 & (&g_8c3103bc)->f0c)) == 0 && !(o->f834 >= 5)) {
            v6 = (int)0;
        }
        if (v6 != 0) {
            v16 = (int)-1;
            goto L_8c11825a;
        }
        v10 = (int)1;
        if (((v2 & (&g_8c3103bc)->f08)) == 0 && !(o->f830 >= 5)) {
            v10 = (int)0;
        }
        if (v10 != 0) {
            v16 = (int)1;
            goto L_8c11825a;
        }
        v14 = (int)v6;
    }
    v16 = (int)0;
    v6 = (int)v14;
L_8c11825a:
    ;
    pm1 = (int)(void *)&g_8c41cba0;
    v30 = pm1;
    a1->v2(v16);
    v17 = !(*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x200);
    if (v17 != 0) {
        int v18;
        v6 = o->f34;
        v18 = (int)(*(int *)((char *)&g_8c41cba0.f28 + (v6 * 0x3c)));
        v22 = (int)1;
        if (((v18 & (&g_8c3103bc)->f00)) == 0 && !(o->f828 >= 5)) {
            v22 = (int)0;
        }
        if (v22 != 0) {
            v31 = (int)1;
            goto L_8c1182c6;
        }
        v26 = (int)1;
        if (((v18 & (&g_8c3103bc)->f04)) == 0 && !(o->f82c >= 5)) {
            v26 = (int)0;
        }
        if (v26 != 0) {
            v31 = (int)-1;
            goto L_8c1182c6;
        }
        v30 = (int)v22;
    }
    v31 = (int)0;
    v22 = (int)v30;
L_8c1182c6:
    ;
    a1->v3(v31);
    return (int)((int)(v31 != 0));
}
