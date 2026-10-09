struct Vector {float x,y,z;};struct Parameters {short identifier;char unknown2[4];short kind;char unknown8[56];};struct Record {unsigned int state;unsigned short value,flags;unsigned int unknown8;};struct Resource {char unknown0[8];void *model,*transform;};struct Owner {char unknown0[1068];Resource *resource;void *auxiliary;};struct Profile {float speed;char unknown4[20];int duration,mode;};
struct Base {void *name;char unknown4[20];virtual void unused0();virtual void unused1();virtual void unused2();virtual void unused3();virtual void unused4();virtual void unused5();virtual void unused6();virtual void unused7();virtual void unused8();virtual void unused9();virtual void unused10();virtual void unused11();virtual void unused12();virtual void unused13();virtual void unused14();virtual void unused15();virtual void unused16();virtual void unused17();virtual void unused18();virtual void unused19();virtual void unused20();virtual void unused21();virtual void unused22();virtual void unused23();virtual void unused24();virtual void unused25();virtual void unused26();virtual void unused27();virtual void unused28();virtual void unused29();virtual void unused30();virtual void unused31();virtual void unused32();virtual void unused33();virtual void unused34();virtual void unused35();virtual void unused36();virtual void unused37();virtual void unused38();virtual void unused39();virtual void unused40();virtual void unused41();virtual void unused42();virtual void unused43();virtual void unused44();virtual void unused45();virtual void unused46();virtual void unused47();virtual void unused48();virtual void unused49();virtual void unused50();virtual void unused51();virtual void unused52();virtual void unused53();virtual void unused54();virtual void unused55();virtual void unused56();virtual void unused57();virtual void unused58();virtual void unused59();virtual void unused60();virtual void unused61();virtual void unused62();virtual void unused63();virtual void unused64();virtual void unused65();virtual void unused66();virtual void unused67();virtual void unused68();virtual void unused69();virtual void unused70();virtual void unused71();virtual void unused72();virtual void unused73();virtual void unused74();virtual void unused75();virtual void unused76();virtual void unused77();virtual void unused78();virtual void unused79();virtual void unused80();virtual void unused81();virtual void unused82();virtual void unused83();virtual void unused84();virtual void unused85();virtual void unused86();virtual void unused87();virtual void configure(Parameters *);};
struct View:Base {char unknown28[2];unsigned short size;short kind;char unknown34[6];void * transform;char unknown44[4];short identifier;char unknown50[2];unsigned int flags;void * resource;Vector position;Vector previous;Vector anchor;char unknown96[24];Vector origin;char unknown132[100];unsigned int control;char unknown236[4];short state;char unknown242[30];void * descriptor;void * auxiliary;char unknown280[420];unsigned int extra_flags;char unknown704[88];float v0;float v1;float v2;Vector saved_position;short index;char unknown818[2];int counter;char unknown824[34];short saved_index;char unknown860[48];int mode;char unknown912[4];float w0;float w1;float w2;char unknown928[8];int enabled;void * result;int slots[2];void * loader;char loader_data[68];void * first_child;void * second_child;int status;char unknown1036[4];int frame;int last;int next;char embedded[28];float speed;int duration;int parameter_mode;};
typedef char check_size[(unsigned long)&((View *)0)->size==30?1:-1];
typedef char check_kind[(unsigned long)&((View *)0)->kind==32?1:-1];
typedef char check_transform[(unsigned long)&((View *)0)->transform==40?1:-1];
typedef char check_identifier[(unsigned long)&((View *)0)->identifier==48?1:-1];
typedef char check_flags[(unsigned long)&((View *)0)->flags==52?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==56?1:-1];
typedef char check_position[(unsigned long)&((View *)0)->position==60?1:-1];
typedef char check_previous[(unsigned long)&((View *)0)->previous==72?1:-1];
typedef char check_anchor[(unsigned long)&((View *)0)->anchor==84?1:-1];
typedef char check_origin[(unsigned long)&((View *)0)->origin==120?1:-1];
typedef char check_control[(unsigned long)&((View *)0)->control==232?1:-1];
typedef char check_state[(unsigned long)&((View *)0)->state==240?1:-1];
typedef char check_descriptor[(unsigned long)&((View *)0)->descriptor==272?1:-1];
typedef char check_auxiliary[(unsigned long)&((View *)0)->auxiliary==276?1:-1];
typedef char check_extra_flags[(unsigned long)&((View *)0)->extra_flags==700?1:-1];
typedef char check_v0[(unsigned long)&((View *)0)->v0==792?1:-1];
typedef char check_v1[(unsigned long)&((View *)0)->v1==796?1:-1];
typedef char check_v2[(unsigned long)&((View *)0)->v2==800?1:-1];
typedef char check_saved_position[(unsigned long)&((View *)0)->saved_position==804?1:-1];
typedef char check_index[(unsigned long)&((View *)0)->index==816?1:-1];
typedef char check_counter[(unsigned long)&((View *)0)->counter==820?1:-1];
typedef char check_saved_index[(unsigned long)&((View *)0)->saved_index==858?1:-1];
typedef char check_mode[(unsigned long)&((View *)0)->mode==908?1:-1];
typedef char check_w0[(unsigned long)&((View *)0)->w0==916?1:-1];
typedef char check_w1[(unsigned long)&((View *)0)->w1==920?1:-1];
typedef char check_w2[(unsigned long)&((View *)0)->w2==924?1:-1];
typedef char check_enabled[(unsigned long)&((View *)0)->enabled==936?1:-1];
typedef char check_result[(unsigned long)&((View *)0)->result==940?1:-1];
typedef char check_slots[(unsigned long)&((View *)0)->slots==944?1:-1];
typedef char check_loader[(unsigned long)&((View *)0)->loader==952?1:-1];
typedef char check_loader_data[(unsigned long)&((View *)0)->loader_data==956?1:-1];
typedef char check_first_child[(unsigned long)&((View *)0)->first_child==1024?1:-1];
typedef char check_second_child[(unsigned long)&((View *)0)->second_child==1028?1:-1];
typedef char check_status[(unsigned long)&((View *)0)->status==1032?1:-1];
typedef char check_frame[(unsigned long)&((View *)0)->frame==1040?1:-1];
typedef char check_last[(unsigned long)&((View *)0)->last==1044?1:-1];
typedef char check_next[(unsigned long)&((View *)0)->next==1048?1:-1];
typedef char check_embedded[(unsigned long)&((View *)0)->embedded==1052?1:-1];
typedef char check_speed[(unsigned long)&((View *)0)->speed==1080?1:-1];
typedef char check_duration[(unsigned long)&((View *)0)->duration==1084?1:-1];
typedef char check_parameter_mode[(unsigned long)&((View *)0)->parameter_mode==1088?1:-1];
typedef char check_sizes[sizeof(View)==1092&&sizeof(Parameters)==64&&sizeof(Record)==12&&sizeof(Vector)==12&&sizeof(Base)==28?1:-1];typedef char check_aux[(unsigned long)&((Owner *)0)->resource==1068&&(unsigned long)&((Owner *)0)->auxiliary==1072?1:-1];typedef char check_profile[(unsigned long)&((Profile *)0)->duration==24&&(unsigned long)&((Profile *)0)->mode==28?1:-1];
extern "C" {extern void *object_name;extern Record *records;extern Owner *owner;extern char descriptor[],secondary_descriptor[],loader_name[];void base_at(View *,void *),embedded_at(void *),reset_at(View *,int),bind_at(View *,int,int,int),finish_at(View *),start_at(void *),activate_at(View *,int),link_at(void *,View *,void *);void *set_at(View *,void *,int),*load_at(void *,void *),*child_at(Parameters *,int);int profile0_at(int),profile1_at(int),profile2_at(int);Profile *profile_at(int);}
static inline int get_record(short id,Record *out) {if(id<0||id>2895) return 0;*out=records[id];return 1;}
static inline void put_record(short id,Record *in) {if(id<0||id>2895) return;records[id]=*in;}
extern "C" View *initialize_record_grid_actor(View *o,void *parent,Parameters *parameters) {Record record;Parameters copy;View **home=&o;base_at(o,parent);*(void **)((char *)o+24)=(void *)0x8c26a070;embedded_at(o->embedded);o->name=object_name;o->size=1092;o->extra_flags|=2;o->configure(parameters);{short id=o->identifier;if(get_record(id,&record)) {record.state=0;record.flags=0;put_record(id,&record);}}o->transform=owner->resource->transform;o->resource=owner->resource->model;{const Vector *p=&o->position;o->origin=*p;o->anchor=*p;o->origin=*p;o->previous=*p;}o->result=set_at(o,descriptor,1);o->descriptor=secondary_descriptor;o->auxiliary=owner->auxiliary;reset_at(o,0);o->state=0;o->saved_position=o->position;o->v2=0.0f;o->v1=0.0f;o->v0=0.0f;o->w2=0.0f;o->w1=0.0f;o->w0=0.0f;o->counter=0;{int first=profile0_at(49);int second=profile1_at(49);int third=profile2_at(49);bind_at(o,first,second,third);}o->saved_index=o->index;finish_at(o);o->mode=21;{int i;for(i=0;i<2;++i) *(int *)((char *)o->slots+((unsigned int)i<<2))=0;}o->control&=~1;o->loader=load_at(loader_name,o->loader_data);o->enabled=1;o->status=0;o->frame=o->index;o->last=0;o->next=0;o->speed=profile_at(49)->speed;o->duration=profile_at(49)->duration;if(o->duration<5) o->duration=5;o->parameter_mode=profile_at(49)->mode;if(o->parameter_mode<0) o->parameter_mode=0;start_at(o->embedded);activate_at(o,1);copy=*parameters;copy.identifier=o->identifier+1;copy.kind=o->kind+1;o->first_child=child_at(&copy,0);copy.identifier=o->identifier+2;copy.kind=o->kind+2;o->second_child=child_at(&copy,1);if(!o->first_child||!o->second_child) return o;link_at(o->first_child,o,o->second_child);link_at(o->second_child,o,o->first_child);return o;}
