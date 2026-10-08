extern int effect_index_table[55];
int lookup_effect_index(int index){if(index>=55)return 54;return *(int *)((char *)effect_index_table+((unsigned int)index<<2));}
