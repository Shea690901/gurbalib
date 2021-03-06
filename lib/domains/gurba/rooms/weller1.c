inherit OUTDOOR_ROOM;

void setup( void ) {
   add_area( "Gurba" );
   add_area( "WellerAve" );
   add_area( "GurbaOutdoor" );
   
   set_brief( "Weller Avenue" );
   set_long( "You are at the northern end of Weller Avenue, a pleasant tree-lined walk that seems to be largely surrounded by old and well-kept houses. The landscaping is immaculate and the brick on the road is a bit nicer than what you might see in other parts of the town. To the north the avenue widens as it opens into the town square." );
   
   set_exits( ([ 
		  "north" : "/domains/gurba/rooms/square_south",
		  "south" : "/domains/gurba/rooms/weller2",
		  ]) );
   
}