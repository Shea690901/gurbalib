inherit ARMOR;

void setup( void ) {
  set_id( "boots" );
  set_adj( "red" );
  set_long( "A pair of crocodile-skin boots." );
  set_in_room_desc( "A pair of coolio boots." );
  set_gettable( 1 );
  set_slot( "feet" );
  set_wear_message( "$N $vput on $o." );
  set_remove_message( "$N $vtake off $o." );
}
