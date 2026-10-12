typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_a0 Arg0_a0;
typedef struct Arg0_a4 Arg0_a4;
struct Object {
    char unknown0[0xa0];
    Arg0_a0 *fa0;
    Arg0_a4 *fa4;
};
extern void reset_text_cursor_8c18ea38(void);
extern int call_8c18ea94(void *);
extern void call_8c119764(Object *, void *, void *);
void operation_8c22ed20(Object *o)
{
    int t1;
    if (o->fa4 != 0) {
        reset_text_cursor_8c18ea38();
        t1 = call_8c18ea94(o->fa4);
        o->fa4 = (Arg0_a4 *)t1;
        call_8c119764(o, (void *)0x8c4dbe40, o->fa0);
    }
}
