/* Library pool group 0x8c1f33a0-0x8c1f33b6 (Hitachi SHC): returns value + 1000
   when its low half is nonzero, otherwise a field of the record. */
typedef struct Record {
    int unknown0[2];
    short fallback;
} Record;

int short_or_offset_8c1f33a0(Record *record, int value)
{
    int result;
    if ((unsigned short)value) result = value + 1000;
    else result = record->fallback;
    return result;
}
