typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    int f00;
    int f04;
    int f08;
};
extern int g_8c46fd6c;
extern int g_8c46fd70;
extern int g_8c46fd74;
extern int g_8c46fd78;
extern void call_8c38ade4(void *);
extern void call_8c0d1df4(int, int);
extern void call_8c38ad10(void);
void operation_8c0d1f28(int a0, Arg1 *a1)
{
    g_8c46fd74 = (int)(a1->f00);
    g_8c46fd6c = (int)(a1->f04);
    g_8c46fd70 = (int)(a1->f08);
    g_8c46fd78 = (int)(((char *)a1 + 0x54));
    call_8c38ade4((void *)((void *)0x8c400500));
    call_8c0d1df4(a0, 0);
    call_8c38ad10();
}
