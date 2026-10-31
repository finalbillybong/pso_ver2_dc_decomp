typedef struct Obj {
    int pad0;
    char b4;
    char b5;
    char pad6[2];
    int v08;
    int v0c;
    int v10;
    int v14;
} Obj;

void obj_set_08_8c356d5c(Obj *o, int a, int b)
{
    o->v08 = a;
    o->v0c = b;
}

void obj_set_b5_8c356d62(Obj *o, char v)
{
    o->b5 = v;
}

void obj_set_10_8c356d68(Obj *o, int a, int b)
{
    o->v10 = a;
    o->v14 = b;
}

void obj_get_b5_8c356d6e(Obj *o, int *out)
{
    *out = o->b5;
}

void obj_get_10_8c356d74(Obj *o, int *a, int *b)
{
    *a = o->v10;
    *b = o->v14;
}
