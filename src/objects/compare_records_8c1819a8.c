typedef struct Record { int unknown0; int group; int kind; char unknownc[8]; unsigned int order; } Record;
int compare_records_8c1819a8(Record *a, Record *b)
{
    if (!a || !b) return 0;
    if (a->order > b->order) return 2;
    if (a->group != b->group) return 4;
    if (a->kind != (int)0xa205b064 || b->kind != (int)0xa205b064) return 5;
    return 6;
}
