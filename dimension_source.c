#include "dimension_source.h"

int c_main( void ) {
  // Set up routing tables, for this test this should be comparatively simple
  spin1_callback_on( TIMER_TICK, timer_callback, 0 );
}

void timer_callback( uint simulation_time, uint none ) {
  // Set some predefined values per dimension
  accum val = 0.5;
  spin1_send_mc_packet( 0x0000, (uint) val, 1 );
}
