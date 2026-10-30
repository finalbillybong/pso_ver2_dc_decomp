typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3159fc S_L8c3159fc;
typedef struct S_g8c4da6d0 S_g8c4da6d0;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_8 S_vv1_42c_8;
typedef struct S_vv1_42c_8_4 S_vv1_42c_8_4;
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_L8c3159fc {
    char unknown0[0x20];
    int f20;
};
struct S_vv1_42c_8 {
    char unknown0[0x4];
    S_vv1_42c_8_4 *f04;
};
struct S_vv1_42c_8_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c4d9b60;
extern int g_8c4da6c0;
extern int g_8c4da6c4;
extern int g_8c4da6c8;
extern int g_8c4da6cc;
extern S_g8c4da6d0 *g_8c4da6d0;
extern void *g_8c4da6d4;
extern S_L8c3159fc g_8c3159fc;
extern char g_8c315b6c[];
extern void initialize_resource_entry_pointers(void *);
extern void load_scene_control_resource(void *, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c151308(void)
{
    int v2;
    int v3;
    S_vv1 *v1;
    int v7;
    int off;
    int t2;
    int t3;
    int pm1;
    int pm5;
    int pm4;
    int *pm6;
    g_8c4da6d4 = (void *)0x8c315b64;
    g_8c4da6d0 = (S_g8c4da6d0 *)(g_8c4d9b60);
    initialize_resource_entry_pointers(((void *)0x8c315b64));
    load_scene_control_resource((void *)((0x14 + g_8c315b6c)), g_8c4da6d4);
    off = 0x42c;
    pm4 = 0;
    v2 = pm4;
    v1 = (S_vv1 *)g_8c4da6d0;
    while (4 > v2) {
        v3 = v2 << 2;
        ++v2;
        pm6 = &g_8c3159fc.f20;
        *(int *)(v3 + (char *)0x8c4da6dc) = (*(S_vv1_42c_8 **)((*(int *)((char *)pm6 + v3) << 4) + (char *)((char *)*(int *)(off + (char *)v1) + 0x8)))->f04->f04;
    }
    v3 = record24_8c17948c(0x23);
    g_8c4da6c0 = (v3);
    t2 = record30_8c1794a0(0x23);
    v3 = (int)(t2);
    off = v3;
    pm1 = 0x23;
    g_8c4da6c4 = off;
    t3 = block32_8c1794b4(pm1);
    g_8c4da6c8 = (int)(t3);
    pm5 = record30_8c1794c8(0x23);
    g_8c4da6cc = (int)(pm5);
}
