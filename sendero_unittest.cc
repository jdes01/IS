#include "sendero.h"
#include "gtest/gtest.h"

TEST(Sendero, Constructor) {

  Sendero sendero("nombre");
  
  EXPECT_EQ( "nombre",     sendero.getNombre() );
  EXPECT_EQ( "0",          sendero.getId() );

}
