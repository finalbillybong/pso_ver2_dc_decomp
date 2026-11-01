extern void *game_malloc_8c011ecc(unsigned int);extern void initialize_at(void *,int,void *,int,int,int);extern void *context;extern char descriptor[];
void load_assets_n_eom_i_body_8c120018(void) {void *p=game_malloc_8c011ecc(1088);if(p) initialize_at(p,1,descriptor,0,0,0);context=p;}
