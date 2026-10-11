typedef struct Record { int words[12]; } Record;
void store_record_8c1795e8(Record *source)
{
    int i;
    int index = *(int *)0x8c4db958;
    int valid = 0;
    if (index >= 0 && index < 0x60) valid = 1;
    if (valid) {
        for (i = 0; i < 4; i++) (*(Record **)0x8c4db950)[index] = *source;
    }
}
