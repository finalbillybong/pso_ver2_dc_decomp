#define get_current_area_8c032b10 ((int (*)(void))0x8c032b10)
#define release_area_object_assets_8c033f5c ((void (*)(int))0x8c033f5c)
void run_current_resource_end(void) { release_area_object_assets_8c033f5c(get_current_area_8c032b10()); }
