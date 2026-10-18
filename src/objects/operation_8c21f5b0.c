typedef struct Object Object;
int operation_8c21f5b0(Object *o, int a1)
{
    int v2;
    char v1;
    v1 = (char)-1;
    v2 = (int)a1;
    while (0xc > v2) {
        if (*(char *)((char *)((char *)o + 0x28) + (v2 << 2)) == v1) {
            return v2;
        }
        v2 = (int)(v2 + 1);
    }
    return (int)(v2);
}
