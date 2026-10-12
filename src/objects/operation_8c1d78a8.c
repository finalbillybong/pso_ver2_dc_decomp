typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x70];
    Arg0_70 *f70;
};
extern char g_8c32a21c[];
extern void reset_text_cursor_8c18ea38(void);
extern int call_8c1c7b68(void *);
extern void operation_8c18ea4c(int);
extern int call_8c1c7d48(void *);
void operation_8c1d78a8(Object *o)
{
    int t1;
    int t2;
    reset_text_cursor_8c18ea38();
    t1 = call_8c1c7b68((void *)(o->f70));
    operation_8c18ea4c(t1);
    operation_8c18ea4c((int)(g_8c32a21c + 0x51));
    t2 = call_8c1c7d48((void *)(o->f70));
    operation_8c18ea4c(t2);
}
