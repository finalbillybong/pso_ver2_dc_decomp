typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    char unknown38[0x18];
    int f50;
};
extern char g_8c3299bc[];
extern int operation_8c2535bc(void);
extern void call_8c217da8(int);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18ea4c(int);
extern void operation_8c119764(int, int, int);
void operation_8c1d4474(Object *o, int a1)
{
    int v1;
    int v3;
    int v2;
    int t1;
    v1 = (int)o->f50;
    if (v1 != a1) {
        o->f50 = a1;
        t1 = operation_8c2535bc();
        v2 = (int)(t1 + a1 * 0xd4 + 4);
        call_8c217da8(v2);
        v3 = (int)(void *)0x8c505248;
        reset_text_cursor_8c18ea38();
        operation_8c18ea4c((int)(v2 + 0x14));
        operation_8c18ea4c((int)(v3 + 0x19));
        operation_8c18ea4c((int)(g_8c3299bc + 0x25));
        operation_8c18ea4c((int)(v3 + 0x2a));
        operation_8c18ea4c((int)(g_8c3299bc + 0x25));
        operation_8c18ea4c((int)(v3 + 0x3b));
        operation_8c119764((int)(o->f34), (int)((void *)0x8c4dbe40), 0x82);
    }
}
