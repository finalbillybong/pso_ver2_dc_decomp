typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9a20 S_L8c4d9a20;
typedef struct S_L8c4d9a20_4 S_L8c4d9a20_4;
typedef struct S_g8c4d9a20 S_g8c4d9a20;
typedef struct S_g8c4d9a28 S_g8c4d9a28;
typedef struct S_g8c4d9a28_8 S_g8c4d9a28_8;
struct S_g8c4d9a28 {
    char unknown0[0x8];
    S_g8c4d9a28_8 *f08;
};
struct S_L8c4d9a20 {
    S_g8c4d9a20 *f00;
    S_L8c4d9a20_4 *f04;
};
extern S_g8c4d9a28 *g_8c4d9a28;
extern S_L8c4d9a20 g_8c4d9a20;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9a28 *);
void operation_8c1306c0(void)
{
    call_8c37d534((void *)(g_8c4d9a28->f08));
    call_8c011ec0((void *)(g_8c4d9a28->f08));
    call_8c03dc40((void *)((&g_8c4d9a20)->f00), 1);
    call_8c03dc40((void *)((&g_8c4d9a20)->f04), 1);
    call_8c18de08(g_8c4d9a28);
}
