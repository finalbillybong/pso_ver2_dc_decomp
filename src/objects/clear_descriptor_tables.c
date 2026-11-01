typedef struct Descriptor { unsigned int flags; void *resource; int mode, count; void *coordinates; char unknown20[12]; unsigned int resource_index, kind; } Descriptor;
typedef struct Quad { float x0,y0,x1,y1; } Quad;
typedef char check_layout[sizeof(Descriptor)==40 && sizeof(Quad)==16 && (unsigned long)&((Descriptor *)0)->resource==4 && (unsigned long)&((Descriptor *)0)->count==12 && (unsigned long)&((Descriptor *)0)->coordinates==16 && (unsigned long)&((Descriptor *)0)->resource_index==32 && (unsigned long)&((Descriptor *)0)->kind==36 ? 1:-1];
extern Descriptor descriptors[];
extern void *instances[], *resources[], *heap, *parent;
extern Quad quads[];
extern void *heap_alloc_8c122700(void *,unsigned int);
extern void TQuadSpriteNormal_ctor_8c040790(void *,void *,Descriptor *),TQuadSpriteScl_ctor_8c040a44(void *,void *,Descriptor *),TQuadSpriteCol_ctor_8c040254(void *,void *,Descriptor *),initialize3_at(void *,void *,Descriptor *),TQuadSpriteSclColRot_ctor_8c0419b8(void *,void *,Descriptor *),append_at(void *,void *);
void clear_descriptor_tables(void) {
    { int i; for(i=0;i<110;++i) { *(void **)((char *)&descriptors->resource+i*40)=0; *(void **)((char *)instances+((unsigned int)i<<2))=0; } }
    { int i; for(i=0;i<110;++i) *(void **)((char *)&descriptors->resource+i*40)=0; }
}
