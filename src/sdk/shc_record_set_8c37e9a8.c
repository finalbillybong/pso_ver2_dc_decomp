/* SDK pool group 0x8c37e9a8-0x8c37e9c8 (Hitachi SHC): two record initialisers.
   The second tests bit 30 of one argument without using the result (an empty
   conditional, probably a debug macro); SHC keeps the test and its pool word. */
typedef struct Record {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
} Record;

void set_record_8c37e9a8(Record *record, int a, int b, int e, int f)
{
    record->a = a;
    record->e = e;
    record->f = f;
    record->b = b << 16;
}

void set_record_8c37e9b6(Record *record, int a, int c, int b)
{
    /* Reproduces an observed unused bit test (likely a no-op macro). */
    if (b & 0x40000000) {
    }
    record->a = a;
    record->b = b;
    record->c = c;
}
