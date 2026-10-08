#define release_entry_at ((void (*)(void *))0x8c37d534)
#define release_table_at ((void (*)(void *))0x8c105320)
void release_effect_resources(void) {
 int i;
 for(i=0;i<1;i++)release_entry_at(*(void **)((char *)0x8c285100+(i<<3)));
 release_table_at(*(void **)0x8c46eda0);
 *(void **)0x8c46eda0=0;
}
