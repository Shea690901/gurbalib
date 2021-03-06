inherit MONSTER;
inherit M_ACTIONS;
inherit M_TRIGGERS;
inherit M_BLOCKEXITS;

void setup()
{
  set_name("brute");
  /*  set_gender(0); */ /* Leave out the gender specification, get a random one. */
  add_adj( "huge" );
  set_in_room_desc("A huge brute.");
  set_long("The brute looks huge.");
  set_race( "rodent" );
  set_max_hp( 200 );
  set_hit_skill("combat/unarmed");
  set_skill( "combat/unarmed", 250 );
  set_skill( "combat/defense", 200 );
}

