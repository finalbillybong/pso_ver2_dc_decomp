typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c5064f0 S_L8c5064f0;
typedef struct S_L8c5064f0_4 S_L8c5064f0_4;
typedef struct S_g8c5064f0 S_g8c5064f0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct S_L8c5064f0 {
    S_g8c5064f0 *f00;
    S_L8c5064f0_4 *f04;
};
struct Object {
    Arg0_0 *tag;
};
extern S_L8c5064f0 g_8c5064f0;
extern int call_8c011e9c(int);
extern void call_8c3889a4(int, int, int);
extern void seed_random_state(void *, unsigned int);
extern void call_8c037f20(void *);
extern void call_8c038020(void *, int, int, int);
extern void call_8c011ec0(int);
extern void call_8c03809c(void *, int, int);
extern void call_8c037eb8(void *, void *, int);
void operation_8c22d42c(Object *o, int a1)
{
    int t1;
    int t2;
    t1 = call_8c011e9c(a1);
    t2 = call_8c011e9c(a1);
    call_8c3889a4(t1, (int)o, a1);
    seed_random_state((void *)0x8c506408, (unsigned int)(&g_8c5064f0)->f04);
    call_8c037f20((void *)0x8c506408);
    call_8c038020((void *)0x8c506408, t1, t2, a1);
    call_8c3889a4((int)o, t2, a1);
    call_8c011ec0(t2);
    call_8c011ec0(t1);
    seed_random_state((void *)0x8c506408, (unsigned int)(&g_8c5064f0)->f00);
    call_8c03809c((void *)0x8c506408, (int)o, a1);
    seed_random_state((void *)0x8c506408, (unsigned int)o->tag);
    call_8c037eb8((void *)0x8c506408, ((char *)o + 0x4), a1 + -4);
}
