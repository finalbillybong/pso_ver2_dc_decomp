typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv19 S_vv19;
typedef struct S_vv19_0 S_vv19_0;
typedef struct S_vv26 S_vv26;
typedef struct S_vv26_0 S_vv26_0;
typedef struct S_vv28 S_vv28;
typedef struct S_vv28_4 S_vv28_4;
typedef struct S_vv28_c S_vv28_c;
typedef struct S_vv37 S_vv37;
typedef struct S_vv39 S_vv39;
typedef struct S_x43776 S_x43776;
struct Frame {
    int f00;
    S_vv28_c *f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    char unknown18[0x1c];
};
struct S_vv28 {
    int f00;
    S_vv28_4 *f04;
    int f08;
    S_vv28_c *f0c;
    int f10;
    int f14;
};
struct S_vv26 {
    S_vv26_0 *f00;
};
struct S_vv19 {
    S_vv19_0 *f00;
    int f04;
};
struct S_x43776 {
    int f00;
};
struct S_vv37 {
    int f00;
};
struct S_vv28_c {
    int f00;
};
struct S_vv28_4 {
    int f00;
};
struct S_vv39 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c462ce4;
extern char g_8c2ef0e4[];
extern int operation_8c03ec84(void *, int, int, int);
extern void operation_8c03ee90(int, int, int);
extern int create_file_buffer_task(void *, int, void *, void *, Frame *);
extern void operation_8c03ef80(void *, ...);
extern void operation_8c03e264(void *);
extern void operation_8c03e23c();
void operation_8c03e080(int a0, int a1)
{
    Frame frame;
    int v18;
    char *v33;
    int v29;
    S_vv28 *v28;
    int v31;
    int v32;
    int v30;
    S_vv26 *v26;
    int v14;
    S_vv19 *v19;
    unsigned int v21;
    int v17;
    int v34;
    int v16;
    int v25;
    int v35;
    int v36;
    int v20;
    int v23;
    S_vv37 *v37;
    int v38;
    S_vv39 *v39;
    int v40;
    int t1;
    int t2;
    (&frame)->f10 = 0;
    v25 = 0x418;
    v23 = 0x43c;
    v28 = (S_vv28 *)a0;
    while ((unsigned int)(&frame)->f10 < (unsigned int)v28->f14) {
        t1 = operation_8c03ec84((void *)(v28->f0c), g_8c462ce4, (int)(&(&frame)->f10), (int)(&(&frame)->f0c));
        switch ((&frame)->f0c) {
        case 0x4e4a544c:
            v26 = (S_vv26 *)v28->f08;
            v26->f00 = (S_vv26_0 *)t1;
            v21 = 0;
            for (; (v19 = (S_vv19 *)v26->f00, (unsigned int)v19->f04 > v21); v21++) {
                *(void **)((char *)v19->f00 + v21 * 0xc) = (void *)0x8c466d3c;
            }
            (&frame)->f04 = v28->f0c;
            (&frame)->f08 = v28->f10;
            operation_8c03ee90((int)(&(&frame)->f14), v28->f00, (int)(g_8c2ef0e4 + 0x215));
            v16 = create_file_buffer_task((void *)(&(&frame)->f14), (int)v26->f00, operation_8c03e23c, (void *)(&(&frame)->f04), &frame);
            if (v16 >= 0) {
                a1 = (&frame)->f00;
                v36 = (int)v28->f0c;
                v37 = (S_vv37 *)(v36 + v25);
                v35 = v37->f00;
                v36 = v36 + 0x18;
                v37->f00 = v35 + 1;
                *(int *)(v36 + (v35 << 2)) = a1;
                *(int *)((char *)v28->f0c + v23) += 1;
            } else if ((v28->f0c->f00 & 4) == 0) {
                operation_8c03ef80((void *)(g_8c2ef0e4 + 0x219), &(&frame)->f14, v16);
            }
            break;
        case 0x4e4a434d:
            v28->f04->f00 = t1;
            ((S_vv39 *)v28->f0c)->f04 += 1;
            break;
        default:
            operation_8c03ef80((void *)(g_8c2ef0e4 + 0x23e));
            break;
        }
    }
    operation_8c03e264((void *)(v28->f0c));
}
