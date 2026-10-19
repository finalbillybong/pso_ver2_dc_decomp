typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbb28 S_g8c4dbb28;
typedef struct S_g8c4dbb2c S_g8c4dbb2c;
typedef struct S_g8c4dbb30 S_g8c4dbb30;
typedef struct S_g8c4dbb34 S_g8c4dbb34;
typedef struct S_vv13 S_vv13;
typedef struct S_vv19 S_vv19;
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
struct S_vv19 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4dbb28 *g_8c4dbb28;
extern S_g8c4dbb2c *g_8c4dbb2c;
extern S_g8c4dbb30 *g_8c4dbb30;
extern S_g8c4dbb34 *g_8c4dbb34;
extern int g_8c4dbb3c;
extern int hierarchy_is_active(void *);
extern void request_resource_release(void *);
extern void operation_8c1bec20(void);
extern void call_8c1981fc(void);
extern void call_8c04c2d4(void);
extern void clear_global_render_resources(void);
extern void call_8c060724(int);
extern void clear_hierarchy_groups(void *);
extern void call_8c0a2b20(void);
extern void clear_render_flags(void);
extern void call_8c380516(void);
void operation_8c184498(void)
{
    int v23;
    int v24;
    int v25;
    S_vv13 *v13;
    int v26;
    S_vv19 *v19;
    int t1;
    int t2;
    int t3;
    int t4;
    g_8c4dbb3c = 0;
    v23 = (int)g_8c4dbb30;
    if (v23 != 0) {
        t1 = hierarchy_is_active((void *)v23);
        if (t1 != 0) {
            request_resource_release(g_8c4dbb30);
            g_8c4dbb30 = (S_g8c4dbb30 *)0;
        }
    }
    v24 = (int)g_8c4dbb34;
    if (v24 != 0) {
        t2 = hierarchy_is_active((void *)v24);
        if (t2 != 0) {
            request_resource_release(g_8c4dbb34);
            g_8c4dbb34 = (S_g8c4dbb34 *)0;
        }
    }
    v25 = (int)g_8c4dbb2c;
    if (v25 != 0) {
        t3 = hierarchy_is_active((void *)v25);
        if (t3 != 0) {
            v13 = (S_vv13 *)g_8c4dbb2c;
            v13->f04 |= 1;
            g_8c4dbb2c = (S_g8c4dbb2c *)0;
        }
    }
    operation_8c1bec20();
    v26 = (int)g_8c4dbb28;
    if (v26 != 0) {
        t4 = hierarchy_is_active((void *)v26);
        if (t4 != 0) {
            v19 = (S_vv19 *)g_8c4dbb28;
            v19->f04 |= 1;
            g_8c4dbb28 = (S_g8c4dbb28 *)0;
        }
    }
    call_8c1981fc();
    call_8c04c2d4();
    clear_global_render_resources();
    call_8c060724(0);
    clear_hierarchy_groups((void *)((void *)0x8c44bec8));
    call_8c0a2b20();
    clear_render_flags();
    call_8c380516();
}
