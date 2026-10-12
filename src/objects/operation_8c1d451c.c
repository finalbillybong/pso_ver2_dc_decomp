typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c505248 S_g8c505248;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x44];
    Arg0_44 *f44;
};
extern int call_8c051d18(void *);
extern void call_8c2069b4(int, void *);
extern void call_8c20a644(void *, void *);
extern void call_8c18de08(int);
void operation_8c1d451c(Object *o)
{
    int t1;
    t1 = call_8c051d18(o->f44);
    call_8c2069b4(t1, (void *)0x8c4dbe40);
    call_8c20a644(*(S_g8c505248 **)0x8c505248, (void *)0x8c4dbe40);
    call_8c18de08(t1);
}
