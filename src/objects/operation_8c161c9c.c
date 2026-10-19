typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db1e0 S_L8c4db1e0;
typedef struct S_L8c4db1e0_4 S_L8c4db1e0_4;
typedef struct S_vv12 S_vv12;
struct S_L8c4db1e0 {
    int f00;
    S_L8c4db1e0_4 *f04;
    int f08;
};
struct S_vv12 {
    int f00;
};
extern S_L8c4db1e0 g_8c4db1e0;
extern void submit_render_buffers(void *, void *);
void operation_8c161c9c(void)
{
    int v11;
    int v17;
    S_vv12 *v12;
    int v18;
    int v19;
    v11 = (int)-1;
    v12 = (S_vv12 *)(&g_8c4db1e0)->f04;
    v19 = (int)(&g_8c4db1e0)->f08;
    v18 = (int)v19;
    goto L_8c161cc4;
L_8c161cae:;
    if (v17 == (&g_8c4db1e0)->f00) {
        submit_render_buffers((void *)((int)v12 + 4), (void *)v18);
    }
    v12 = (S_vv12 *)((char *)v12 + 16);
    v18 = (int)(v18 + 0xc);
L_8c161cc4:;
    v17 = (int)v12->f00;
    if (v17 != v11) {
        goto L_8c161cae;
    }
    (&g_8c4db1e0)->f00 += 1;
}
