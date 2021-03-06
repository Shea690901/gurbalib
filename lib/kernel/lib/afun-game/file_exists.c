nomask static int file_exists( string file ) {
  if( !valid( file, MODE_READ ) ) {
#ifdef ENABLE_STACK_SECURITY
    return 0;
#else
    console_msg("Access to "+file+" would have been denied, ignoring...\n");
#endif
  }
  return ::file_exists( file );
}
