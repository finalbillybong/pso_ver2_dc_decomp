typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    int f04;
    char unknown8[0x24];
    int f2c;
    int f30;
};
extern int g_8c4d9e00;
extern char g_8c4d9e04;
extern int g_8c4d9e08;
extern char g_8c4d9e0c;
extern int g_8c4d9e10;
extern char g_8c4d9e14;
extern int g_8c4d9e18;
extern char g_8c4d9e1c;
extern int call_8c13f2ac(int);
int operation_8c13f2ac(Object *o)
{
    unsigned int v13;
    unsigned int v14;
    char *v28;
    int t1;
    int t2;
    if (((o->tag & -0x400)) != 0) {
        return 0;
    }
    if (g_8c4d9e04 == 0) {
        g_8c4d9e00 = 0;
        g_8c4d9e04 = 1;
    }
    if (g_8c4d9e0c == 0) {
        g_8c4d9e08 = 0x200000;
        g_8c4d9e0c = 1;
    }
    if (g_8c4d9e14 == 0) {
        g_8c4d9e10 = 0;
        g_8c4d9e14 = 1;
    }
    if (g_8c4d9e1c == 0) {
        g_8c4d9e18 = 0x200000;
        g_8c4d9e1c = 1;
    }
    v13 = (unsigned int)o->f2c;
    v14 = (unsigned int)g_8c4d9e00;
    if (v13 > v14 && (unsigned int)g_8c4d9e08 > v13) {
        goto L_8c13f342;
    }
    if ((unsigned int)o->f30 > v14 && (unsigned int)o->f30 < (unsigned int)g_8c4d9e08) {
        goto L_8c13f342;
    }
    if ((unsigned int)g_8c4d9e10 < (unsigned int)o->f04 && (unsigned int)o->f04 < (unsigned int)g_8c4d9e18) {
L_8c13f342:;
        return 0;
    }
    if (v13 != 0) {
        t1 = call_8c13f2ac(v13);
        if (t1 == 0) {
            return 0;
        }
    }
    v28 = (char *)o->f30;
    if (v28 != 0) {
        t2 = call_8c13f2ac((int)(v28));
        if (t2 == 0) {
            return 0;
        }
    }
    return 1;
}
