int str2val( string str ) {
  int ten;
  int val;
  int i;

  val = 0;
  ten = 1;
  for( i = strlen( str )-1; i >= 0; i-- ) {
    if( str[i] >= '0' && str[i] <= '9' ) {
      val += ( str[i] - '0' ) * ten;
      ten = ten * 10;
    } else {
      return( -1 );
    }
  }
  return( val );
}
