typedef struct Table { int unknown0; int first[4]; int second[4]; int third[4]; } Table;
typedef struct Owner { char unknown0[0x30]; Table *table; } Owner;
int table_first_8c1a6604(Owner *o, int index)
{
    return *(int *)((char *)o->table->first + (index << 2));
}
