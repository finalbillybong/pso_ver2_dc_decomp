typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4671b4 S_L8c4671b4;
typedef struct S_L8c4671c0 S_L8c4671c0;
typedef struct S_L8c4671cc S_L8c4671cc;
struct S_L8c4671b4 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c4671c0 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c4671cc {
    float f00;
    float f04;
    float f08;
};
extern int g_8c4671b0;
extern S_L8c4671b4 g_8c4671b4;
extern S_L8c4671c0 g_8c4671c0;
extern S_L8c4671cc g_8c4671cc;
extern void transform_in_vector_frame(void *, void *, void *);
void operation_8c04f4ec(void)
{
    switch (g_8c4671b0) {
    case 0x10:
    case 0x1a:
    case 0x20:
        break;
    case 0x1e:
        (&g_8c4671b4)->f00 = 0.0f;
        (&g_8c4671b4)->f04 = 0.0f;
        (&g_8c4671b4)->f08 = 0.0f;
        transform_in_vector_frame((void *)((void *)0x8c46ee84), (void *)((void *)&g_8c4671b4), (void *)((void *)&g_8c4671b4));
        break;
    case 0x22:
        (&g_8c4671c0)->f00 = 0.0f;
        (&g_8c4671c0)->f04 = 0.0f;
        (&g_8c4671c0)->f08 = 0.0f;
        transform_in_vector_frame((void *)((void *)0x8c46ee84), (void *)((void *)&g_8c4671c0), (void *)((void *)&g_8c4671c0));
        break;
    case 0x2f:
        (&g_8c4671cc)->f00 = 0.0f;
        (&g_8c4671cc)->f04 = 0.0f;
        (&g_8c4671cc)->f08 = 0.0f;
        transform_in_vector_frame((void *)((void *)0x8c46ee84), (void *)((void *)&g_8c4671cc), (void *)((void *)&g_8c4671cc));
        break;
    }
    g_8c4671b0 += 1;
}
