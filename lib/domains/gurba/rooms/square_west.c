inherit OUTDOOR_ROOM;

void setup( void ) {
   add_area( "Gurba" );
   add_area( "GurbaSquare" );
   add_area( "GurbaOutdoor" );
   
   set_brief( "Gurba Town Square - West" );
   set_long( "The west side of the town square seems to be dominated by an informal farmer's market, with numerous salesman offering a variety of fresh produce. Passers-by seem helpless to resist the salesmen's charm, and many men and women can be seen hauling away large baskets of fruits and vegetables. Market Street leads out of the square to the west." );
   
      set_exits( ([ 
		  "north" : "/domains/gurba/rooms/square_northwest", 
		  "south" : "/domains/gurba/rooms/square_southwest",
		  "east" : "/domains/gurba/rooms/square_center",
		  "west" : "/domains/gurba/rooms/market1"
		  ]) );
   
   add_item( "market", "This area is full of produce stands and carts.");
   add_item( "salesmen", "The salesmen are a motley crew, varying in age and skill but all doing their best to hawk vegetables." );
   add_item( "produce", "From fresh red apples to mushrooms, all forms of produce are on sale here." );
   
}