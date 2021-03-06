/* 
   Demonstrates use of M_WANDER for testing purposes.
   Cerihan 3/14/09
*/
inherit MONSTER;
inherit M_WANDER;

void setup()
{
  set_name("traveller");
  /*  set_gender(0); */ /* Leave out the gender specification, get a random one. */
  add_adj( "wandering" );
  set_in_room_desc("A wandering traveller.");
  set_long("This tired-looking person just happens to be passing through the area..");
  set_race( "human" );
  set_max_hp( 20 + random(10) );
  set_hit_skill("combat/unarmed");
  set_skill( "combat/unarmed", 50 );
  set_skill( "combat/defense", 100 );

  set_wander_area( "Gurba" );
  start_wander( 10, 20 );
}

