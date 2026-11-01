extern void *game_malloc_8c011ecc(unsigned int);extern void initialize_at(void *,int,void *,int,int,int);extern void *context;extern char descriptor[];
void load_assets_o_door_vo_ship_8c1af684(void) {void *p=game_malloc_8c011ecc(1088);if(p) initialize_at(p,1,descriptor,0,0,0);context=p;}
