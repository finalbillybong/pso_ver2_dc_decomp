typedef struct Entry { unsigned int tag; char unknown4[20]; } Entry;
typedef struct View { char unknown0[32]; Entry *entries[513]; } View;
typedef char check_entry[sizeof(Entry)==24?1:-1];
typedef char check_entries[(unsigned long)&((View *)0)->entries==32?1:-1];
void clear_entry_list(View *o) { o->entries[0]=0; }
void initialize_entry_list(View *o,Entry *source) {
 Entry **out=o->entries;
 while(source->tag) { *out++=source; ++source; }
 *out=0;
}
void append_entry(View *o,Entry *entry) {
 Entry **out=o->entries; int i;
 for(i=0;i<512;++out,++i) { if(!*out) { *out++=entry; *out=0;return; } }
}
