#include "ruta.h"
#include "gtest/gtest.h"

TEST(Ruta, Constructor) {
  
  Parque parque("a", "a", 1);
  
  Ruta r("nombre", 1, parque);
  
  EXPECT_EQ( "Nombre", r.getNombre());
  EXPECT_EQ( 1,        r.getAforo());
  EXPECT_EQ( parque,   r.getParque());

}