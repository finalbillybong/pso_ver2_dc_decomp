typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int TObject_ctor_8c0330e4(void *, void *);
extern void call_8c18e318(int, void *, void *);
extern void TObject_dtor_8c03311c();
void operation_8c282244(void)
{
    int t1;
    t1 = TObject_ctor_8c0330e4((void *)((void *)0x8c470374), (void *)0);
    call_8c18e318(t1, TObject_dtor_8c03311c, (void *)((void *)0x8c470368));
}
