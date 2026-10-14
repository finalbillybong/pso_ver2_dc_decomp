typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4688c8 S_L8c4688c8;
typedef struct S_L8c4688dc S_L8c4688dc;
struct S_L8c4688c8 {
    int f00;
    int f04;
};
struct S_L8c4688dc {
    int f00;
    int f04;
};
extern S_L8c4688c8 g_8c4688c8;
extern S_L8c4688dc g_8c4688dc;
extern void call_8c18e318(void *, void *, void *);
extern void release_effect_node();
void operation_8c281ff0(void)
{
    (&g_8c4688c8)->f00 = 0;
    (&g_8c4688c8)->f04 = 0;
    call_8c18e318((void *)((void *)&g_8c4688c8), release_effect_node, (void *)((void *)0x8c4688bc));
    (&g_8c4688dc)->f00 = 0;
    (&g_8c4688dc)->f04 = 0;
    call_8c18e318((void *)((void *)&g_8c4688dc), release_effect_node, (void *)((void *)0x8c4688d0));
}
