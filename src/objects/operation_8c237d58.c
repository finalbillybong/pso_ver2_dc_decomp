typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c44bea0 S_g8c44bea0;
struct S_L8c339ca0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x18];
    int f24;
};
extern int g_8c44be04;
extern S_g8c44bea0 *g_8c44bea0;
extern S_L8c339ca0 g_8c339ca0;
extern int current_effect_mode(void);
extern void create_manager_8c25e570(void *);
extern void create_object_8c253358(void *);
extern void operation_8c237f48(int);
void operation_8c237d58(int a0)
{
    char *v1;
    int v4;
    int v3;
    int t1;
    t1 = current_effect_mode();
    if (t1 != 0) {
        if (t1 == 0xf) {
            goto L_8c237da4;
        }
        if (t1 == 0x10) {
            goto L_8c237dac;
        }
        if (t1 == 0x11) {
            goto L_8c237dac;
        }
    } else {
        v1 = (char *)(&g_8c339ca0)->f08;
        (&g_8c339ca0)->f08 = -1;
        if ((int)(v1) == -1) {
            return;
        }
        create_manager_8c25e570(g_8c44bea0);
        if ((&g_8c339ca0)->f24 != 0) {
            return;
        }
        create_object_8c253358(g_8c44bea0);
        return;
L_8c237da4:;
        (&g_8c339ca0)->f08 = -1;
        return;
L_8c237dac:;
        (&g_8c339ca0)->f08 = -1;
        return;
    }
    v3 = (int)g_8c44be04;
    v4 = (int)(&g_8c339ca0)->f08;
    if (v4 != v3) {
        (&g_8c339ca0)->f08 = (int)(v3);
        operation_8c237f48(a0);
    }
}
