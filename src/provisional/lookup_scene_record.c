typedef struct Entry { char unknown[60]; } Entry;
typedef struct Table { short count; char unknown2[6]; Entry *entries; } Table;
typedef char check_entry[sizeof(Entry)==60?1:-1];
typedef char check_count[(unsigned long)&((Table *)0)->count==0?1:-1];
typedef char check_entries[(unsigned long)&((Table *)0)->entries==8?1:-1];
typedef char check_table[sizeof(Table)==12?1:-1];
Entry *lookup_scene_record(int index) {
 Table *table=*(Table **)0x8c44be0c;
 if(index>=table->count) return 0;
 return table->entries+index;
}
