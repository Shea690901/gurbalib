/* vim:set ft=lpc: */
void main( string str ) {
  mapping mudlist;
  string *muds;
  int i;
  string tmp;
  string line;
  string *lines;
  int len, slen, mlen;
  int count;

  mudlist = IMUD_D->query_mudlist();

  if( !mudlist ) {
    write( "Empty mudlist. Wait a few minutes and try again.\n" );
    return;
  }

  muds = map_indices( mudlist );

  lines = ({ "Up Mud                Address         Port  Lib            Status             " });
  lines += ({ "-----------------------------------------------------------------------------" });

  count = 0;
  for( i=0; i < sizeof( muds ); i++ ) {

    line = "";

    if( mudlist[muds[i]][0] != -1 ) {
      continue;
    }

    if( sizeof(mudlist[muds[i]]) < 9 ) {
       continue;
    }

    if( str && strlen( str ) > 0 ) {
      slen = strlen(str)-1;
      mlen = strlen(muds[i])-1;
      len = slen < mlen ? slen : mlen;

      if(    "" + mudlist[muds[i]][1] != str
          && "" + uppercase(muds[i][..len]) != uppercase(str[..len]))
        continue;
    }
    count++;

    tmp = "U   ";
    line += tmp[..2];

    tmp = muds[i] + "                   ";
    line += tmp[..17] + " ";

    tmp = mudlist[muds[i]][1] + "                ";
    line += tmp[..15];

    tmp = "" + mudlist[muds[i]][2] + "      ";
    line += tmp[..4] + " ";

    tmp = mudlist[muds[i]][5] + "              ";
    line += tmp[..13] + " ";

    tmp = mudlist[muds[i]][9] + "                      ";
    line += tmp[..19];

    lines += ({ line });
  }

  lines = ({ "" + count + " of " + sizeof(muds) + " muds listed.\n" }) + lines;

  this_player()->more( lines );
}
